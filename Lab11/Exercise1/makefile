Exercise1: main.o DMV.o DriversLicenseRecord.o
	g++ -std=c++11 -g -Wall main.o DMV.o DriversLicenseRecord.o -o Exercise1
main.o: main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp
DriversLicenseRecord.o: DriversLicenseRecord.h DriversLicenseRecord.cpp
	g++ -std=c++11 -g -Wall -c DriversLicenseRecord.cpp
DMV.o: DMV.h DMV.cpp
	g++ -std=c++11 -g -Wall -c DMV.cpp
Clean:
	rm *.o Exercise1
