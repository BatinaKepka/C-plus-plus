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

bool Line::Point_on_line(Point point)
{
	float x, y, z;	
	try 
	{
		if (this->first.getX() == this->second.getX())
			throw exception("X ��������� ����� ������ �����, �������� ������� �� ����");
		x = (point.getX() - this->first.getX()) / (this->first.getX() - this->second.getX());						  
	}
	catch (const exception &ex) 
	{
		cout << endl << "�������� ����������:" << ex.what() << endl;
		x = 0;
	}

	try
	{
		if (this->first.getY() == this->second.getY())
			throw exception("Y ��������� ����� ������ �����, �������� ������� �� ����");
		y = (point.getY() - this->first.getY()) / (this->first.getY() - this->second.getY());
	}
	catch (const exception& ex)
	{
		cout << endl << "�������� ����������:" << ex.what() << endl;
		y = 0;
	}

	try
	{
		if (this->first.getZ() == this->second.getZ())
			throw exception("Z ��������� ����� ������ �����, �������� ������� �� ����");
		z = (point.getZ() - this->first.getZ()) / (this->first.getZ() - this->second.getZ());
	}
	catch (const exception& ex)
	{
		cout << endl << "�������� ����������:" << ex.what() << endl;
		z = 0;
	}

	if ((x == y) && (y == z))
	{
		printf("\n����� ����� �� ������!");
		return true;
	}
	else
	{
		printf("\n����� �� ����� �� ������!");
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
}

Line_segment::Line_segment()
{
	
}

Line_segment::Line_segment(Point first, Point second)
{
	Line::Line(first, second);
	length = first.Distance_to_Point(second);
}

void Line_segment::Input()
{
	Line::Input();
	length = first.Distance_to_Point(second);
	cout << "������: " << length;
}

float Line_segment::Get_length()
{
	return length;
}

Line_segment Line_segment::operator=(Line line)
{
	this->first = line.Get_first_point();
	this->second = line.Get_second_point();
	length = line.Get_first_point().Distance_to_Point(line.Get_second_point());
	return *this;
}


