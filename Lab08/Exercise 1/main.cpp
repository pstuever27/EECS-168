/*--------------------------------------------
* Name: Paul Stuever
* Filename: main.cpp
* Assignment: Lab08 Exercise 1
* Description: This lab will use functions to complete desired actions chosen by the user.
  * These actions include counting digits, summing digits, finding palindromes, reversing, and exiting.
* Date: 4/15/2021
----------------------------------------------*/
#include<iostream>

int lastDigit(int n)
{
          int last = 0;
          last = n % 10;
          return(last);
}

int removeLastDigit(int n)
{
          int newDigit;
          newDigit = n / 10;
          return(newDigit);
}

int addDigit(int currentNum, int newDigit)
{
          currentNum = (currentNum * 10) + newDigit;

          return(currentNum);
}

int countDigits(int n)
{

          int count = 0;
          int number = n;

          while(number>0)
          {
              number = removeLastDigit(number);
              ++count;
          }
          return(count);
}

int reverse(int n)
{
          int reverse = 0;

          //take count
          int count = countDigits(n);

          for(int i = 0; i<count; i++)
          {
            int last = 0;

            //store last digit
            last = lastDigit(n);

            //store new number
            n = removeLastDigit(n);

            //add to reverse counter
            reverse = addDigit(reverse, last);
          }
          return(reverse);
}

bool isPalindrome(int n)
{
          std::cout << "Number: ";
          std::cin >> n;

          int reversed = reverse(n);

          //test for t/f
          if(reversed == n)
          {
            return true;
          }
          else
          {
            return false;
          }

          return(n);
}

int sumDigits(int n)
{
          std::cout << "Number: ";
          std::cin >> n;
          int x = 0;
          int sum = 0;

          while(n>0)
          {
            x = n % 10;
            sum = sum + x;
            n = removeLastDigit(n);
          }
          std::cout << "Sum: " << sum << '\n';
          return(sum);
}

void printMenu()
      {
          std::cout << "---------------\n1) Count Digits\n2) Sum Digits\n3) Is Palindrome\n4) Reverse\n5) Exit\nChoice: ";
}

void run()
    {
      int reversed;
      int i = 0;
      while(i<1)
      {
          printMenu();
          int choice = 0;
          std::cin >> choice;
          std::cout << "---------------\n";
          if(choice == 1)
          {
            int n;
            std::cout << "Number: ";
            std::cin >> n;

            int count;
            count = countDigits(n);

            std::cout << "Digits: " << count << '\n';
          }
          if(choice == 2)
          {
            sumDigits(0);
          }
          if(choice == 3)
          {
            bool result;
            result = isPalindrome(0);
            if(result == 1)
            {
              std::cout << "Palindrome: True\n";
            }
            else
            {
              std::cout << "Palindrome: False\n";
            }

          }
          if(choice == 4)
          {
            int n;
            std::cout << "Number: ";
            std::cin >> n;
            reversed = reverse(n);
            std::cout << "Reverse: " << reversed << '\n';
          }
          if(choice == 5)
          {
            i = 1;
          }
      }
}
//tiny main :)
int main()
{
  run();
  return(0);
}
