prog: main.o
	g++ -std=c++11 -g -Wall main.cpp -o prog

main.o: main.cpp Circle.h CircleDriver.h
	g++ -std=c++11 -g -Wall -c main.cpp

Circle.o: Circle.h Circle.cpp
	g++ -std=c++11 -g -Wall -c Circle.cpp

CircleDriver.o: CircleDriver.h CircleDriver.cpp
	g++ -std=c++11 -g -Wall -c CircleDriver.cpp

clean:
	rm *.o prog
