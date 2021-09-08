/*----------------------------------
*
*File Name: main.cpp
*Author: Paul Stuever
*Assignment: EECS-168 Lab 6 Exercise 4
*Description: This program will take in an array from a user selected file. Then,-
 *-it will copy the array, reverse and normalise it, and finally output the modified arrays-
 *-into their resepctive output files.
*Date: 4/1/2021
*
------------------------------------*/

#include <fstream>
#include <iostream>

int main()
{
  std::string file;
  std::cout << "What file should the program read?: ";
  std::cin >> file;

  std::ifstream inFile;
  inFile.open(file);
  //if file name is good, open
  if(inFile.is_open())
  {
    //take the first number and make it the array size
    double* array = nullptr;
    int size;

    //make array
    inFile >> size;
    array = new double[size];

    //just starting these early so I have them later
    double* normalize = new double[size];
    double* normalize2 = new double[size];
    double* reverse = new double[size];

    //put input.txt values in array[size]
      for(int i = 0; i<size; i++)
      {
        inFile >> array[i];
      }

      //copying the reverse of array[size] to reverse[size] and normalize[size]

        for(int i = 0; i<size; i++)
        {
          normalize[i] = array[i];
        }

        //making copy of normalize so that I can find largest and smallest without messing up the order

        for(int i = 0; i<size; i++)
        {
          normalize2[i] = normalize[i];
        }

        for(int j = 0; j<size; j++)
        {
          reverse[j] = array[size - j - 1];
        }

      //doing reverse first because it seems easier
      //spoiler alert: it was harder than I thought

      std::ofstream myoutfile2;
      std::string fileName2 = "Reversed.txt";
      myoutfile2.open("Reversed.txt");

        if(myoutfile2.is_open())
        {
          for(int i = 0; i<size; i++)
          {
            myoutfile2 << reverse[i] << '\n';
          }
          myoutfile2.close();
        }


        //First, i'm going to fid the largest and smallest numbers using the program from exercise1

        //largest
        for(int i = 0; i<size; i++)
        {
          if(normalize2[i]>normalize2[0])
          {
            double swap;
            swap = normalize2[0];
            normalize2[0] = normalize2[i];
            normalize2[i] = swap;
          }
        }
        double largest = normalize2[0];

        //smallest
        for(int i = 0; i<size; i++)
        {
          if(normalize2[i]<normalize2[0])
          {
            double swap;
            swap = normalize2[i];
            normalize2[i] = normalize2[0];
            normalize2[0] = swap;
          }
        }
        double smallest = normalize2[0];

        //time to normalize
        for(int i = 0; i<size; i++)
        {
          normalize[i] = (normalize[i] - smallest) / (largest - smallest);
        }


        //finally, time to output the normalized array to Normalized.txt
        std::ofstream myoutfile1;
        std::string fileName1 = "Normalized.txt";
        myoutfile1.open("Normalized.txt");

        for(int i = 0; i<size; i++)
        {
          myoutfile1 << normalize[i] << '\n';
        }
        myoutfile1.close();

        //NO LEAKS
        delete[] array;
        delete[] normalize;
        delete[] normalize2;
        delete[] reverse;

    inFile.close();
  }
  else
  {
    std::cout << "\nFile could not be opened!\n";
  }



  return(0);
}
