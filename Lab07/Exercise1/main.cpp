/*----------------------------------
*
*File Name: main.cpp
*Author: Paul Stuever
*Assignment: EECS-168 Lab 7 Exercise 1
*Description: This program will take in an input file from the user. Then, it will-
    *use the first 2 values to determine the NxN size. Finally, it will find averages,
    *reverse the rows, flip the array, and if the array is symmetrical then it will mirror
    *it on the diagonal axis.
*Date: 4/7/2021
*
------------------------------------*/
#include <iostream>
#include <fstream>
int main()
{
  std::cout.precision(1);
  std::cout << std::fixed;
  std::string file;
  std::cout << "What file should the program read?: ";
  std::cin >> file;

  std::ifstream inputFile;
  inputFile.open(file);
  //if file name is good, open
  if(inputFile.is_open())
  {
    //initalizing--------------------------------
    int row;
    int column;
    inputFile >> row;
    inputFile >> column;
    double **original = new double*[row];
    for(int i = 0; i<row; i++)
    {
      original[i] = new double[column];
    }
    //fills original array
    for(int i = 0; i<row; i++)
    {
      for(int j = 0; j<column; j++)
      {
        inputFile >> original[i][j];
      }
    }

    //averages--------------------------------

    std::ofstream averages;
    std::string average = "averages.txt";

        averages.open(average);
        //total average
        double totalsum;
        for(int i = 0; i<row; i++)
        {
          for(int j = 0; j<column; j++)
          {
            totalsum = totalsum + original[i][j];
          }
        }
        double totalsize;
        totalsize = row * column;
        averages << "Total average: " << totalsum / totalsize << '\n';

        //row average
        double rowsum;
        for(int i = 0; i<row; i++)
        {
          rowsum = 0;
          for(int j = 0; j<column; j++)
          {
            rowsum = rowsum + original[i][j];
          }
          averages << "Row " << i+1 << " average: " << rowsum / column << '\n';
        }
    averages.close();


        //reverse------------------------------------------------

        //make a copy of original
        double **reverse = new double*[row];
        for(int i = 0; i<row; i++)
        {
          reverse[i] = new double[column];
        }
        //fills reverse array backwards
        for(int i = 0; i<row; i++)
        {
          for(int j = 0; j<column; j++)
          {
            reverse[i][j] = original[i][column -j -1];
          }
        }

    std::ofstream reverses;
    std::string reversed = "reverse.txt";

        reverses.open(reversed);
        for(int i = 0; i<row; i++)
        {
          for(int j = 0; j<column; j++)
          {
            reverses << reverse[i][j] << ".0 ";
          }
          reverses << '\n';
        }
        reverses.close();

        //flipped----------------------------------------

        double **flipped = new double*[row];
        for(int i = 0; i<row; i++)
        {
          flipped[i] = new double[column];
        }
        //fills array completely backwards
        for(int i = 0; i<row; i++)
        {
          for(int j = 0; j<column; j++)
          {
            flipped[i][j] = original[row - i - 1][j];
          }
        }
        std::ofstream flips;
        std::string flip = "flipped.txt";

            flips.open(flip);
            for(int i = 0; i<row; i++)
            {
              for(int j = 0; j<column; j++)
              {
                flips << flipped[i][j] << ".0 ";
              }
              flips << '\n';
            }
            flips.close();
      //diagonal------------------------------------------
      double **diagonal = new double*[row];
      for(int i = 0; i<row; i++)
      {
        diagonal[i] = new double[column];
      }
      //fills array completely backwards
      for(int i = 0; i<row; i++)
      {
        for(int j = 0; j<column; j++)
        {
          diagonal[i][j] = original[j][i];
        }
      }

      if(row == column)
      {

            std::ofstream mirrors;
            std::string mirror = "diagonal.txt";

                mirrors.open(mirror);
                for(int i = 0; i<row; i++)
                {
                  for(int j = 0; j<column; j++)
                  {
                    mirrors << diagonal[i][j] << ".0 ";
                  }
                  mirrors << '\n';
                }
                mirrors.close();

      inputFile.close();

      //DELETE----------------------------------------------
      for(int i = 0; i<row; i++)
      {
        delete[] original[i];
        delete[] reverse[i];
        delete[] flipped[i];
        delete[] diagonal[i];
      }

      delete[] original;
      delete[] reverse;
      delete[] flipped;
      delete[] diagonal;
    }
  }

  //error code
  if(!inputFile)
  {
    std::cout << "File could not be read, try running again. \n";
  }
  return(0);

}
