#ifndef CIRCLEDRIVER_H
#define CIRCLEDRIVER_H
#include "Circle.h"

class CircleDriver
{
public:

  Circle circ1;
  Circle circ2;

  void obtainCircles();
  void printCircleInfo();

  void run();
};
#endif
