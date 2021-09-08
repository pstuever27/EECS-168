/*----------------------------------
*
*File Name: main.cpp
*Author: Paul Stuever
*Assignment: EECS-168 Lab 6 Exercise 1
*Description: This program will take 5 numbers into an array. Then, it will find
    *the sum, average, largest, and smallest numbers in the array. Finally, it will print them.
*Date: 4/1/2021
*
------------------------------------*/

#include <iostream>
int main()
{
  const int SIZE = 4;
  double numbers[SIZE]; //declared the array
  std::cout << "Please enter 5 numbers\n";

    for(int i = 0; i<=SIZE; i++)
    {
      std::cout << "Input a number into your array: ";
      std::cin >> numbers[i];
    }

    //output array values
    std::cout << "Here are all the numbers in your array: \n";

    for(int i = 0; i<=SIZE; i++)
    {
      std::cout << numbers[i] << '\n';
    }

    //sum numbers
    double sum;
      for(int i = 0; i<=SIZE; i++)
      {
        sum = sum + numbers[i];
      }
    std::cout << "The sum of all the values is: " << sum << '\n';

    //average numbers
    double average = sum / 5;
    std::cout << "The average of all the values is: " << average << '\n';

    //largest value
    for(int i = 0; i<=SIZE; i++)
    {
      if(numbers[i]>numbers[0])
      {
        numbers[0] = numbers[i];
      }
    }
    std::cout << "The largest number is: " << numbers[0] << '\n';

    //Smallest value
    for(int i = 0; i<=SIZE; i++)
    {
      if(numbers[i]<numbers[0])
      {
        numbers[0] = numbers[i];
      }
    }
    std::cout << "The smallest number is " << numbers[0] << '\n';

  return(0);
}
