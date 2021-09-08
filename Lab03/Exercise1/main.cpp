/***************************************************************
  File Name : main.cpp
  Author: Paul Stuever
  Assignment: EECS168 Lab03 Exercise 2
  Description: This program will take a wind speed as an input from the user. Then, it will output the category of tropical storm or hurricane it falls under.
  Date: 3/4/2021
***********************************************************/

#include <iostream>

int main()
{
  double wspeed;

  std::cout << "Input a wind speed (m/s): ";
  std::cin >> wspeed;

    if (wspeed >= 70)
      {
        std::cout << "A wind speed of "<< wspeed << "m/s is a Category 5 hurricane.\n";
      }

    else if (58 <= wspeed && wspeed < 70)
      {
        std::cout << "A wind speed of "<< wspeed << "m/s is a Category 4 hurricane.\n";
      }

    else if (50 <= wspeed && wspeed < 58)
      {
        std::cout << "A wind speed of "<< wspeed << "m/s is a Category 3 hurricane.\n";
      }

    else if (43 <= wspeed && wspeed < 50)
      {
        std::cout << "A wind speed of "<< wspeed << "m/s is a Category 2 hurricane.\n";
      }

    else if (33 <= wspeed && wspeed < 43)
      {
        std::cout << "A wind speed of "<< wspeed << "m/s is a Category 1 hurricane.\n";
      }

    else if (18 <= wspeed && wspeed < 33)
      {
        std::cout << "A wind speed of "<< wspeed << "m/s is a Tropical Storm.\n";
      }

    else if (0 <= wspeed && wspeed < 18)
      {
        std::cout << "A wind speed of "<< wspeed << "m/s is a Tropical Depression.\n";
      }

    else if (wspeed < 0 )
      {
        std::cout << "Negative wind? Sorry, that's invalid\n";
      }

    else
      {
        std::cout << "Error. Please input a valid wind speed\n";
      }

  return (0);
}
