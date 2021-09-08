/*----------------------------------
*
*File Name: main.cpp
*Author: Paul Stuever
*Assignment: EECS-168 Lab 2 Exercise 5
*Description: This program will take a random number from the user as a count of how many sodas.
              Then, the program will sort the sodas into specific categories based on remainders.
*Date: 3/01/2021
*
------------------------------------*/
//program Starting

#include <iostream>

int main()
{
  int sodas;
    std::cout << "How many sodas do you have? ";
    std::cin >> sodas;

    int cubes = (sodas / 24);
    int remainder_1 = (sodas % 24);

    int six_packs = (remainder_1 / 6);
    int remainder_2 = (remainder_1 % 6);

    std::cout << "Fridge Cubes: " << cubes << "\n";
    std::cout << "Six-Packs: " << six_packs << "\n";
    std::cout << "Singles: " << remainder_2 << "\n";


  return(0);
}
