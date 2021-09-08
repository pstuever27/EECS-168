/*----------------------------------
*
*File Name: main.cpp
*Author: Paul Stuever
*Assignment: EECS-168 Lab 6 Exercise 3
*Description: This program will take in an array from input.txt, then it will
  *allow the user to search to see if a particular number is in that array.
*Date: 4/1/2021
*
------------------------------------*/

#include <fstream>
#include <iostream>

int main()
{
  const int SIZE = 5;
  int array[SIZE];
  std::ifstream inFile;
  inFile.open("input.txt");

    if(inFile.is_open())
    {
      for(int i = 0; i <= SIZE; i++)
      {
        inFile >> array[i];
      }
      std::cout << "Contents of input.txt:\n[";
      for(int i = 0; i <= SIZE; i++)
      {
        std::cout << array[i];
        if(i<SIZE)
        {
          std::cout << ", ";
        }
      }
      std::cout << "]\n";

    for(int i = 0; i<1;)
    {
      int num;
      std::cout << "Input a value to search for: ";
      std::cin >> num;
      for(int j = 0; j<SIZE; j++)
      {
        if(num == array[j])
        {
          std::cout << num <<" is in the array.\n";
          j = SIZE;
        }
        if(j == SIZE - 1)
        {
          std::cout << num << " is not in the array.\n";
        }
      }

      char quit;
      std::cout << "Do you wish to quit (y/n): ";
      std::cin >> quit;

      if(quit == 'y' || quit == 'Y')
      {
        i=1;
      }
    }

    inFile.close();
  }






  return (0);
}
