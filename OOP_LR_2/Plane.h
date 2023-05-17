#pragma once
#include "Point.h"

class Plane
{
private:
	Point first, second, third;
public:

	Plane();

	Plane(Point first, Point second, Point third);

	void Input();

	void Display();

	bool Point_on_plane(Point point);

	Point Get_first_point();

	Point Get_second_point();

	Point Get_third_point();
};



