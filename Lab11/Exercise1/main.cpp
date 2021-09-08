/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Paul Stuever
 * Assignment:   EECS-168 Lab11, Exercise 1
 * Description:  This program will use two different classes (DMV and DriversLicenseRecord)-
  *in order to take in a file from the user, store that file, and display different information based on what the user wants to see.
 *
 * Date: 5/6/2021
 *
 ---------------------------------------------------------------------------- */

#include <iostream>
#include <limits>
#include "DriversLicenseRecord.h"
#include "DMV.h"

int main(int argc, char** argv)
{
    std::string fileName;

    if( argc > 1)
    {
      fileName = argv[1];

      DMV myDMV;
      myDMV.run(fileName);
    }
    return(0);
  }
