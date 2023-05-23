#pragma once
#include "Point.h"

class Triangle
{
private:
	Point first, second, third;
public:

	Triangle();

	Triangle(Point first, Point second, Point third);

	void Input();

	void Display();

	float Perimeter();

	void Perimeter(float *perimeter);

	void Perimeter(float &perimeter);

	float Area();

	Point Get_first_point();

	Point Get_second_point();

	Point Get_third_point();
};

