/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Paul Stuever
 * Assignment:   EECS-168 Lab 2 Exercise 3
 * Description:  This program will convert the input temperature from Fahrenheit to Celsius.
 * Date: 2/26/2021
 *
 ---------------------------------------------------------------------------- */
//Program Start

#include <iostream>
int main()
{
  float temp = 0;

    std::cout << "What is the temperature outside in Fahrenheit? ";
    std::cin >> temp;

  float Celsius = (temp - 32) * 5/9;

    std::cout << "The temperature in Celsius is: " << Celsius <<"°C\n";

  return(0);
}
