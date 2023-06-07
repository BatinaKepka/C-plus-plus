#include "Point.h"
#include <math.h>
#include <iostream>
using namespace std;

Object_in_space::Object_in_space()
{
	Name = "";
}

Object_in_space::Object_in_space(string name)
{
	Name = name;
}

string Object_in_space::getName()
{
	return this->Name;
}

Point::Point() :Object_in_space()
{
	x = 0;
	y = 0;
	z = 0;	
}

Point::Point(float x, float y, float z, string name):Object_in_space(name)
{
	this->x = x;
	this->y = y;
	this->z = z;	
}

void Point::Input()
{
	float x, y, z;
	string name;
	cout << "Название: ";
	cin >> name;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	cout << "z = ";
	cin >> z;


	this->x = x;
	this->y = y;
	this->z = z;
	Name = name;
}

float Point::Distance_to_Point(Point end)
{
	return sqrt(pow((end.x - this->x), 2) + pow((end.y - this->y), 2) + pow((end.z - this->z), 2));
}

bool Point::More_distant(Point second)
{
	Point zero(0, 0, 0, "");
	if (this->Distance_to_Point(zero) > second.Distance_to_Point(zero))
	{
		return true;
	}
	else
	{
		return false;
	}
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

Point Point::operator + (Point b)
{
	Point c;
	c.x = this->x + b.x;
	c.y = this->y + b.y;
	c.z = this->z + b.z;
	return c;
}

Point& Point::operator ++()
{
	this->x++;
	this->y++;
	this->z++;
	return *this;
}

Point Point::operator ++(int unused)
{
	Point temp = *this;
	++*this;	
	return temp;
}


