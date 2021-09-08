#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
	public:

		double radius;
		double xPos;
		double yPos;

		void setR( double r );
		void setX( double x );
		void setY( double y );

		double getR();
		double getX();
		double getY();

		double diameter();
		double area();
		double distanceToOrigin();
		double circumference();

		bool intersect( Circle otherCircle );
};

#endif
