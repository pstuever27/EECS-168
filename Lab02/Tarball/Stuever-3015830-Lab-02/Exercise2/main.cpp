/*---------------------------------
  *
  *File name: main.cpp
  *Author: Paul Stuever
  *Assignment: EECS-168 Lab 2 Exercise 2
  *Description: This program will take 3 inputs from the user to construct a polynomial. Then, the program will
    *calculate the roots of that polynomial function.
  *Date: 2/26/2021
  *
------------------------------------*/
//program start

#include <iostream>
#include <math.h>
int main()
{
  double a;
  double b;
  double c;

    std::cout << "Input a: ";
    std::cin >> a;

    std::cout << "Input b: ";
    std::cin >> b;

    std::cout << "Input c: ";
    std::cin >> c;


  double sqr_1 = (-b + sqrt((b*b)-(4*a*c)));
  double denom_1 = (2*a);
    std::cout << "Root 1: " << (sqr_1 / denom_1);
    std::cout <<"\n";

  double sqr_2 = (-b - sqrt((b*b)-(4*a*c)));
  double denom_2 = (2*a);
    std::cout << "Root 2: " << (sqr_2 / denom_2);
    std::cout << "\n";

  return(0);
}
