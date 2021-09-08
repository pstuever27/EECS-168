#include "Circle.h"
#include "CircleDriver.h"
#include <math.h>
#include <cmath>

  //assigns user input to circle.h values
    void Circle::setR(double r)
    {
      radius = r;
    }

    void Circle::setX(double x)
    {
      xPos = x;
    }

    void Circle::setY(double y)
    {
      yPos = y;
    }

    //just returns the values of radius and position
    double Circle::getR()
  	{
  		return( radius );
  	}

  	double Circle::getX()
  	{
  		return( xPos );
  	}

  	double Circle::getY()
  	{
  		return( yPos );
  	}

    double Circle::diameter()
    {
      double diameter = (radius * 2);
      return(diameter);
    }

    double Circle::area()
    {
      double area_ = 3.14*(radius * radius);
      return(area_);
    }

    double Circle::circumference()
    {
      double circumference = (2 * 3.14 * radius);
      return(circumference);
    }
    double Circle::distanceToOrigin()
    {
      double distance = sqrt((xPos * xPos)+(yPos * yPos));
      return(distance);
    }
    bool Circle :: intersect(Circle otherCircle)
    {
    double centre_D = sqrt(pow(this->xPos - otherCircle.xPos,2) + pow(this->yPos - otherCircle.yPos,2));

    if( this->getR() + otherCircle.getR() < centre_D)
    return false;
    return true;
    }
