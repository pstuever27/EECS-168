/*----------------------------------------------
*
*File Name: main.cpp
*Author: Paul Stuever
*Assignment: EECS168 Lab04 Exercise 2
*Description: This program will print the desired number of values in a Gibbonacci Sequence, which is totally not made up,
* but will take the last two numbers added together to equal the current number.
*
----------------------------------------*/
#include <iostream>
int main()
{
  int num1 = 5;
  int num2 = 7;
  int num3;
  int i;
  int number;

  std::cout << "How many Gibbonacci numbers do you want printed? ";
  std::cin >> number;

  std::cout << num1 << ", " << num2 << ", ";

    for(i = 3; i<number; i++)
    {
      num3 = num1 + num2;
      std::cout << num3;

      if(i<number + 1)
      {
        std::cout << ", ";
      }
      num1 = num2;
      num2 = num3;
    }
    int lastnum = num1 + num3;
    std::cout << lastnum;
    std::cout << '\n';

  return(0);
}
