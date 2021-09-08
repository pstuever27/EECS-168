/*----------------------------------
*
*File Name: main.cpp
*Author: Paul Stuever
*Assignment: EECS-168 Lab 2 Exercise 4
*Description: This program will take in a character from the user. Then, it will output what the corresponding ASCII value for that character is.
*Date: 2/26/2021
*
------------------------------------*/
//program Starting

#include <iostream>
int main()
{
  char input;
    std::cout << "Please enter a character: ";
    std::cin >> input;
    std::cout << "The ASCII value of " << input <<" is: " << (int)input <<"\n";

  return (0);
}
