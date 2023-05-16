#include "Point.h"
#include <math.h>
#include <iostream>
using namespace std;

Point::Point()
{
	x = 0;
	y = 0;
	z = 0;
}

Point::Point(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void Point::Input()
{
	float x, y, z;

	cin >> x >> y >> z;

	this->x = x;
	this->y = y;
	this->z = z;

}

void Point::Display()
{
	cout << "x = " << this->x << " y = " << this->y <<" z = " << this->z;
}

float Point::Distance_to_Point(Point end)
{
	return sqrt(pow((end.x - this->x), 2) + pow((end.y - this->y), 2) + pow((end.z - this->z), 2));
}

float Point::getX()
{
	return this->x;
}

float Point::getY()
{
	return this->y;
}

float Point::getZ()
{
	return this->z;
}