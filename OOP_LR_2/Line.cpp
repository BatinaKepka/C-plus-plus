#include "Line.h"
#include <iostream>
using namespace std;

Line::Line()
{

}

Line::Line(Point first, Point second)
{
	this->first = first;
	this->second = second;
}

void Line::Input() 
{

	this->first.Input();
	this->second.Input();
}

void Line::Display()
{
	this->first.Display();
	this->second.Display();
}

bool Line::Point_on_line(Point point)
{
	float x = (point.getX() - this->first.getX()) / (this->first.getX() - this->second.getX());
	float y = (point.getY() - this->first.getY()) / (this->first.getY() - this->second.getY());
	float z = (point.getZ() - this->first.getZ()) / (this->first.getZ() - this->second.getZ());
	if ((x == y) && (y == z))
	{
		printf("\nТочка лежит на прямой!");
		return true;
	}
	else
	{
		printf("\nТочка не лежит на прямой!");
		return false;
	}
}

Point Line::Get_first_point() 
{
	return this->first;
}

Point Line::Get_second_point()
{
	return this->second;
}




