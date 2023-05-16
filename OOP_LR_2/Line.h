#pragma once
#include "Point.h"

class Line
{
private:
	Point first, second;
public:
	Line();

	Line(Point first, Point second);

	void Input();

	void Display();

	bool Point_on_line(Point point);

	Point Get_first_point();

	Point Get_second_point();

};

