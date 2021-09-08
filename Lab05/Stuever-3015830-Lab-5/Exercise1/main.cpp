/*----------------------------------
*
*File Name: main.cpp
*Author: Paul Stuever
*Assignment: EECS-168 Lab 5 Exercise 1
*Description: This program will give the user 5 options of what they want to do, and will use for loops in order to achieve
  *  the desired size and function of the program.
*Date: 3/24/2021
*
------------------------------------*/
#include <iostream>
int main()

{

  for(int i=0; i<1;)
  {
    int choice;
    std::cout << "\n1) Checkerboard\n2) Rook Path\n3) Running Total\n4) Upper Left Triangle\n5) Upper Right Triangle\n";
    std::cout << "\nInput a choice: ";
    std::cin >> choice;

  //Choice 1: Checkerboard-------------------------------------------
      if(choice == 1)
      {
        int checkersize;
        std::string T;
        std::string X = "X";
        std::string O = "O";
        std::cout << "Input a size: ";
        std::cin >> checkersize;
        //creates the checkerboard
          for(int j=1; j<=checkersize; j++)
          {
            for(int k=1; k<=checkersize; k++)
            {
              //if the position that is being printed isn't divisible by 2, then it will print O
              if(k % 2 != 0)
              {
                std::cout << O;
              }
              //if it is, then it prints X
              else if (k % 2 == 0)
              {
                std::cout << X;
              }
            }
            //to flip the characters for the checker pattern
            T = X;
            X = O;
            O = T;
            std::cout << '\n';
          }
      }
  //Choice 2: Rook-----------------------------------------------------------

      if(choice == 2)
      {
      int size, column, row;
      std::cout << "How big is the board?: ";
      std::cin >> size;

      std::cout << "What row is the Rook in?: ";
      std::cin >> row;

      std::cout << "What column is the Rook in?: ";
      std::cin >> column;

      std::cout << '\n';

        //begin for loops
          //column size
        for(int j = 0; j<=size-1; j++)
        {
          //row size
          for(int k = 0; k<=size-1; k++)
          {
            //prints | when K equals the desired column
            if(k == column && j != row)
            {
              std::cout << "|";
            }
            //prints - when J equals the desired row
            if(j == row && k != column)
            {
              std::cout << "-";
            }
            //asterisks everywhere else
            if(k != column && j != row)
            {
              std::cout << "*";
            }
            //Rook position
            if(k == column && j == row)
            {
              std::cout << "R";
            }
          }
         std::cout << '\n';
        }

      }

  //Choice 3: Running Total--------------------------------------------------
      if(choice == 3)
      {
        int totalsize;
        std::cout << "Input a Size: ";
        std::cin >> totalsize;
        int number = 1;

          for(int j=0; j<totalsize; j++)
          {

            for(int k=0; k<totalsize; k++)
            {
              //prints number and adds one to total
              std::cout << number;

              number = number + 1;
              //ensures comma is in correct places
              if(k < totalsize-1)
              {
                std::cout << ",";
              }
            }
            std::cout<<'\n';
          }
      }
  //Choice 4: Upper Left Triangle-----------------------------------------
    if(choice == 4)
    {
      //loops to create triangle shape
      for(int j = 1; j<=5; j++)
      {
        for(int k = 5; k>=j; k--)
        {
          std::cout << "*";
        }
        std::cout << '\n';
      }
    }
  //Choice 5: Upper Right Triangle---------------------------------------
    if(choice == 5)
    {
      for(int j = 5; j>0; j--)
      {
        //adds spaces in order to create correct triangle shape
        for(int l = 0; l < 5 - j; l++)
        {
          std::cout << " ";
        }
        //prints *
          for(int k = 1; k<=j; k++)
          {
            std::cout << "*";
          }
      std::cout << '\n';
      }
    }
//Quit Sequence---------------------------------------------------------
            char quit;
            std::cout << "\nDo you want to quit (y/n)?: ";
            std::cin >> quit;

              if(quit == 'y' || quit == 'Y')
              {
                i = 1;
              }
            std::cout << '\n';

  }

  return(0);
}
