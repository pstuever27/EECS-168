//Filename : DriversLicenseRecord.h
//Author: Paul Stuever

#ifndef DRIVERSLICENSERECORD_H
#define DRIVERSLICENSERECORD_H
#include <iostream>

class DriversLicenseRecords
{
private:

  //member vars
  int m_DLnum;
  std::string m_Fname;
  std::string m_Lname;
  int m_age;
  char m_voter;

public:

  void setDLnum(int DLnum);
  void setFname(std::string Fname);
  void setLname(std::string Lname);
  void setage(int age);
  void setvoting(char voter);


  int getDLnum();
  std::string getFname();
  std::string getLname();
  int getage();
  char getvoting();


};
#endif
