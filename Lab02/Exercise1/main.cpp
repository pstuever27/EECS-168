
  /*----------------------------------
  *
  *File Name: main.cpp
  *Author: Paul Stuever
  *Assignment: EECS-168 Lab 2 Exercise 1
  *Description: This program will calculate the hypotenuse of a triangle, given 2 inputs from the user
  *Date: 2/22/2021
  *
  ------------------------------------*/
  //Starting program
 #include <iostream>
  #include <math.h>
  using namespace std;
  int main()
  {
    double a = 0;
    double b = 0;
    std::cout << "This script will calculate the hypotenuse of a triangle.\nPlease enter a number for a: ";
    std::cin >> a;
    std::cout << "Please enter a number for b: ";
    std::cin >> b;
    double x = (a*a)+(b*b);
    cout << "The hypotenuse is:" << sqrt(x) << endl;

}
