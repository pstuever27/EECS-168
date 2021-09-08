/*--------------------------------------------
* Name: Paul Stuever
* Filename: main.cpp
* Assignment: Lab09 Exercise 1
* Description: This program will take an array of integers from a file with command line arguments.
 *Then, it will allow the user to add, subtract, count, and print the elements of the array.
* Date: 4/25/2021
----------------------------------------------*/

#include <iostream>
#include <fstream>
#include <cstdlib>

int* insert(int arr[], int (&size), int value, int position)
{
        int i = 0;
        for(i = size; i >= position; i--)
        {
          arr[i] = arr[i-1];
        }
        arr[position] = value;
        size++;
        return arr;
}
int* remove(int arr[], int (&size), int position)
{
        int* numbers = (int *)malloc((size-1)*sizeof(int));
        int i,j = 0;
        for(i = 0; i<size; i++)
        {
          if(i != position)
          {
            *(numbers+j) = arr[i];
            j++;
          }
        }
        delete[] arr;
        size--;
        return numbers;
}

int count(int arr[], int size, int target)
{
        int count = 0;
        int i = 0;
        for(i = 0; i<size; i++)
        {
          if(target == arr[i])
          {
            count++;
          }
        }
        return count;
}

void print(int arr[], int size)
{
        int i = 0;
        std::cout << "Current Array: [";
        for(i = 0; i < size; i++)
        {
            std::cout << arr[i];
          if(i<size-1)
          {
          std::cout << ',';
          }
          if(i == size-1)
          {
            std::cout << "]\n";
    }
  }
}

void printmenu()
{
        std::cout << "Make a selection:\n1) Insert\n2) Remove\n3) Count\n4) Print\n5) Exit\nChoice: ";
}

int main(int argc, char** argv)
{
  if (argc == 3)
   {
     int length = atoi(argv[2]);
     int *numbers = new int[length];
     int array;
     int i = 0;

     std::ifstream read;

     read.open(argv[1]);
     if(!read)
     {
        std::cout << "Entered file does not exist\n";
        return 0;
      }

       while(read >> array)
       {

           numbers[i++] = array;
       }

  int choice;
  int Count = 0;
  int value = 0;
  int position = 0;

  do
    {
        printmenu();

        std::cin >> choice;
        std::cout << '\n';

       if(choice == 1)
            {
              std::cout << "Enter a number to insert: ";
              std::cin >> value;
              std::cout << "Enter a position to insert to: ";
              std::cin >> position;

              if(position < length)
              {
                numbers = insert(numbers,length,value,position);
                std::cout << "Inserted\n";
              }
              else
              {
                std::cout << "Invalid position\n";
              }
            }


              if(choice == 2)
               {
                std::cout << "Enter a position to delete: ";
                std::cin >> position;
                if(position < length)
                  {
                    numbers = remove(numbers,length,position);
                  }
                else
                  {
                    std::cout << "Invalid position\n";
                  }
                }

               if(choice == 3)
               {
                std::cout << "Enter a number to count: ";
                std::cin >> array;
                Count = count(numbers,length,array);

                if(Count != 0)
                   {
                     std::cout << array << " was found " << Count << " time(s)\n";
                   }
                else
                   {
                     std::cout << array << " is not found\n";
                   }
                }

                if(choice == 4)
                {
                   print(numbers,length);
                }

                if(choice == 5)
                {
                   std::cout << "Exiting...\n";
                }
                if(choice>5 || choice<1)
                {
                   std::cout << "Invalid option. Try again\n";
                }
           }
       while(choice != 5);
   }
   else
   {
       std::cout << "Enter command line arguments. (./filename filename size)\n";
   }
}
