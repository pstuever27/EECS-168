//Filename: DMV.cpp
//Author: Paul Stuever

#include <iostream>
#include <fstream>
#include <string>
#include "DMV.h"

int DMV::readfile(std::string fileName)
{
  int size;
  std::ifstream inFile;
  inFile.open(fileName);


  if(inFile.is_open())
  {
    inFile >> size;

    records = new DriversLicenseRecords[size];

    for(int i = 0; i<size; i++)
    {
      int DLnumber = 0;
      std::string Firstname;
      std::string Lastname;
      int age = 0;
      char voterstatus;

      inFile >> DLnumber;
      records[i].setDLnum(DLnumber);

      inFile >> Firstname;
      records[i].setFname(Firstname);

      inFile >> Lastname;
      records[i].setLname(Lastname);

      inFile >> age;
      records[i].setage(age);

      inFile >> voterstatus;
      records[i].setvoting(voterstatus);


    }
    inFile.close();

    return(size);

  }
  else
  {
    std::cout << "Invalid Input!\n";
    return(0);
  }
}

DMV::~DMV()
{
  delete[] records;
}

void DMV::printinfo(int size)
{
  for(int i = 0; i<size; i++)
  {
    std::cout << records[i].getLname() << ", ";
    std::cout << records[i].getFname();
    std::cout << '(' <<records[i].getage() << "): ";
    std::cout << records[i].getDLnum() << '\n';
  }
}
void DMV::printvoters(int size)
{
  char vtemp;
  int atemp;
  for(int i = 0; i<size; i++)
  {
    vtemp = records[i].getvoting();
    atemp = records[i].getage();

    if(atemp >= 55 && vtemp == 'N')
    {
      std::cout << records[i].getLname() << ", ";
      std::cout << records[i].getFname();
      std::cout << '(' <<records[i].getage() << "): ";
      std::cout << records[i].getDLnum() << '\n';
    }
  }
}

void DMV::printinitial(int size)
{
  std::string tempstr;
  char search;
  char letter;
  bool result;
  std::cout << "Character to search for (case sensitive): ";
  std::cin >> search;
  for(int i = 0; i<size; i++)
  {
    tempstr = records[i].getFname();
    letter = tempstr.at(0);
    if(search == letter)
    {
      std::cout << records[i].getLname() << ", ";
      std::cout << records[i].getFname();
      std::cout << '(' <<records[i].getage() << "): ";
      std::cout << records[i].getDLnum() << '\n';
      result = 1;
    }
  }
  if(result == 0)
  {
    std::cout << "No results!\n";
  }
}



void DMV::printID(int size)
{
  int search;
  std::cout << "Number to search for: ";
  std::cin >> search;
  for(int i = 0; i<size; i++)
    {
      if(search == records[i].getDLnum())
      {
        std::cout << records[i].getLname() << ", ";
        std::cout << records[i].getFname();
        std::cout << '(' <<records[i].getage() << "): ";
        std::cout << records[i].getDLnum() << '\n';
        break;
      }
      if(i == size-1)
      {
        std::cout << "No records found!\n";
      }
    }
}

int DMV::printmenu()
{
  int choice = 0;
  std::cout << "1) Print all Drivers' Info\n2) Print all senior, unregistered voters\n3) Print drivers by first initial\n4) Print driver with ID\n5) Quit\nEnter your choice: ";
  std::cin >> choice;
  std::cout << "------------------------\n";
  return(choice);
}

void DMV::run(std::string fileName)
{
  int size;
  size = readfile(fileName);
  int choice = 0;

if(size>0)
{
  do{

    choice = printmenu();

      if(choice == 1)
      {
        printinfo(size);
      }
      if(choice == 2)
      {
        printvoters(size);
      }
      if(choice == 3)
      {
        printinitial(size);
      }
      if(choice == 4)
      {
        printID(size);
      }

  }
while(choice != 5);
}
}
