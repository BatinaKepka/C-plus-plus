#pragma once
#include "Point.h"

class Line
{
protected:
	Point first, second;
	static int Count;
public:
	Line();

	Line(Point first, Point second);

	void Input();

	void Display();

	bool Point_on_line(Point point);

	Point Get_first_point();

	Point Get_second_point();

	static int getCount()
	{
		return Count;
	}
	~Line();
};

class Line_segment : public Line
{
private:
	float length;
public:
	Line_segment();

	Line_segment(Point first, Point second);

	void Input();

	void Display();

	float Get_length();

	Line_segment operator=(Line line);

};

