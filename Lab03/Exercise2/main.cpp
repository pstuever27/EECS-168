/***************************************************************
  File Name : main.cpp
  Author: Paul Stuever
  Assignment: EECS168 Lab03 Exercise 1
  Description: This program will take a numerator and denominator from the user. Then, it will calculate the quotient and remainder of the function.
  Date: 3/4/2021
***********************************************************/

#include <iostream>
int main()
{
  int num;
  int den;

    std::cout << "Enter a Numerator: ";
      std::cin >> num;

    std::cout << "Enter a Denominator: ";
      std::cin >> den;

    if (den == 0)
    {
      std::cout << "Cannot divide by 0.\n";
    }
    else
    {
      int result_1 = num / den;
      int result_2 = num % den;

      std::cout << num << " / " << den << " = " << result_1 << "R" << result_2 << "\n";
    }


}
