#include<iostream>
#include "CircleDriver.h"

void CircleDriver::obtainCircles()
{
  //Circle #1

  double x1 = 0.0;
  double y1 = 0.0;
  double r1 = 0.0;

  std::cout << "Enter information for Circle 1: \n";
  std::cout << "Radius: ";
  std::cin >> r1;
  circ1.setR(r1);

  std::cout << "X Position: ";
  std::cin >> x1;
  circ1.setX(x1);

  std::cout << "Y Position: ";
  std::cin >> y1;
  circ1.setY(y1);

  //Circle #2

  double x2 = 0.0;
  double y2 = 0.0;
  double r2 = 0.0;

  std::cout << "Enter information for Circle 2: \n";
  std::cout << "Radius: ";
  std::cin >> r2;
  circ2.setR(r2);

  std::cout << "X Position: ";
  std::cin >> x2;
  circ2.setX(x2);

  std::cout << "Y Position: ";
  std::cin >> y2;
  circ2.setY(y2);
}

void CircleDriver::printCircleInfo()
{
  //Circle #1

  std::cout << "Information for Circle 1: \n";
  std::cout << "Location: ("<< circ1.getX() << ',' << circ1.getY() << ")\n";
  std::cout << "Diameter: " << circ1.diameter() << '\n';
  std::cout << "Circumference: " << circ1.circumference() << '\n';
  std::cout << "Distance from the origin: " << circ1.distanceToOrigin() << "\n\n";

  //Circle #2

  std::cout << "Information for Circle 2: \n";
  std::cout << "Location: ("<< circ2.getX() << ',' << circ2.getY() << ")\n";
  std::cout << "Diameter: " << circ2.diameter() << '\n';
  std::cout << "Circumference: " << circ2.circumference() << '\n';
  std::cout << "Distance from the origin: " << circ2.distanceToOrigin() << '\n';

  if(circ1.intersect(circ2))
  {
    std::cout << "The circles intersect.\n";
  }
  else
  {
    std::cout << "The circles do not intersect\n";
  }
}

void CircleDriver::run()
{
  obtainCircles();
  printCircleInfo();
}
