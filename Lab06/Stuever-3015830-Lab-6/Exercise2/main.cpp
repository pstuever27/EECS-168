/*----------------------------------
*
*File Name: main.cpp
*Author: Paul Stuever
*Assignment: EECS-168 Lab 6 Exercise 2
*Description: This program will take in a chosen size of words from the user.
  *Then, it will find the largest and smallest words using the .length() function to quantify the amount of letters.
*Date: 4/1/2021
*
------------------------------------*/

#include <iostream>
#include <string>
int main()
{
  int size;
  std::cout << "How big should the array be?: ";
  std::cin >> size;
  std::string swap;

    for(int i = 0; i<1;)
    {
      if(size == 0)
      {
        std::cout << "Please enter a valid size: ";
        std::cin >> size;
      }
      else
      {
        i = 1;
      }
    }
    std::string array[size];

    std::cout << "Now please enter " << size << " words\n";

    for(int i = 0; i<size; i++)
    {
      std::cout << "Input a word: ";
      std::cin >> array[i];
    }
    //print largest
    for(int i = 0; i<size; i++)
    {
      if(array[0].length()<array[i].length())
      {
        swap = array[0];
        array[0] = array[i];
        array[i] = swap;
      }
    }
    std::cout << "The largest word is: " << array[0] << '\n';
    for(int i = 0; i<size; i++)
    {
      if(array[0].length()>array[i].length())
      {
        swap = array[i];
        array[i] = array[0];
        array[0] = swap;
      }
    }
    std::cout << "The shortest word is: " << array[0] << '\n';

  return(0);
}
