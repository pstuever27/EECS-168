/*----------------------------------------------
*
*File Name: main.cpp
*Author: Paul Stuever
*Assignment: EECS168 Lab04 Exercise 1
*Description: This program will ask the user for a choice between showing a particular ASCII value for a char,
  or will  display all ASCII charaters between 33 and 126.
*
----------------------------------------*/

#include <iostream>
int main()
{
    for(int x; x <= 2;)
  {
    std::cout << "1) Select a specific ASCII character provided an int\n";
    std::cout << "2) Display visible ASCII values (33 to 126)\n";
    std::cout << "3) Exit\n";
    std::cout << "Choice: ";
    std::cin >> x;

      if (x == 1)
      {
        int spec_val;
        std::cout << "Enter Value: ";
        std::cin >> spec_val;
        std::cout << spec_val << " = " << static_cast<char>(spec_val) << '\n';
      }

      if(x == 2)
      {
        int y = 33;
        for(int y = 33; y <= 126; y = y + 1)
          {
            std::cout << y << " = " << static_cast<char> (y) << '\n';
          }
      }

      if (0 >= x || 4 <= x)
      {
        std::cout << "Invalid input. Please choose choice 1, 2, or 3.\n";
      }
  }

  return (0);
}
