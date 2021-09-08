//Filename: DriversLicenseRecord.cpp
//Author: Paul Stuever

#include "DriversLicenseRecord.h"
#include <iostream>

      void DriversLicenseRecords::setDLnum(int DLnum)
      {
        m_DLnum = DLnum;

      }

      void DriversLicenseRecords::setFname(std::string Fname)
      {

        m_Fname = Fname;

      }

      void DriversLicenseRecords::setLname(std::string Lname)
      {

        m_Lname = Lname;

      }

       void DriversLicenseRecords::setage(int age)
      {
        m_age = age;

      }

      void DriversLicenseRecords::setvoting(char voter)
      {
        m_voter = voter;

      }

      int DriversLicenseRecords::getDLnum()
      {
        return(m_DLnum);
      }

      std::string DriversLicenseRecords::getFname()
      {
        return(m_Fname);
      }

      std::string DriversLicenseRecords::getLname()
      {
        return(m_Lname);
      }

      int DriversLicenseRecords::getage()
      {
        return(m_age);
      }

      char DriversLicenseRecords::getvoting()
      {
        return(m_voter);
      }
