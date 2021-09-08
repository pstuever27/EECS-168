//Filename: DMV.h

#ifndef DMV_H
#define DMV_H
#include "DriversLicenseRecord.h"
#include <iostream>

class DMV
{
public:

  DriversLicenseRecords* records = nullptr;

  int readfile(std::string fileName);

  ~DMV();

  int printmenu();
  void printinfo(int size);
  void printvoters(int size);
  void printinitial(int size);
  void printID(int size);
  void run(std::string fileName);


};
#endif
