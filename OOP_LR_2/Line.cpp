#include "Line.h"
#include <iostream>
using namespace std;

Line::Line()
{
	Count++;
}

Line::Line(Point first, Point second)
{
	this->first = first;
	this->second = second;
	Count++;
}

void Line::Input() 
{

	this->first.Input();
	this->second.Input();
}

void Line::Display()
{
	cout << endl << "Первая точка:";
	this->first.Display();
	cout << endl << "Вторая точка:";
	this->second.Display();
}

bool Line::Point_on_line(Point point)
{
	float x, y, z;	
	try 
	{
		if (this->first.getX() == this->second.getX())
			throw exception("X кординаты точек прямой равны, возникло деление на ноль");
		x = (point.getX() - this->first.getX()) / (this->first.getX() - this->second.getX());						  
	}
	catch (const exception &ex) 
	{
		cout << endl << "Возникло исключения:" << ex.what() << endl;
		x = 0;
	}

	try
	{
		if (this->first.getY() == this->second.getY())
			throw exception("Y кординаты точек прямой равны, возникло деление на ноль");
		y = (point.getY() - this->first.getY()) / (this->first.getY() - this->second.getY());
	}
	catch (const exception& ex)
	{
		cout << endl << "Возникло исключения:" << ex.what() << endl;
		y = 0;
	}

	try
	{
		if (this->first.getZ() == this->second.getZ())
			throw exception("Z кординаты точек прямой равны, возникло деление на ноль");
		z = (point.getZ() - this->first.getZ()) / (this->first.getZ() - this->second.getZ());
	}
	catch (const exception& ex)
	{
		cout << endl << "Возникло исключения:" << ex.what() << endl;
		z = 0;
	}

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
Line::~Line()
{
	Count--;
	cout << "\nЛиния удалена!";
}




