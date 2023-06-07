#pragma once
#include "Point.h"
#include <iostream>
using namespace std;

class Line
{
protected:
	Point first, second;
	static int Count;
public:
	Line();

	Line(Point first, Point second);

	virtual void Input();	

	bool Point_on_line(Point point);

	Point Get_first_point();

	Point Get_second_point();

	friend void operator << (ostream& o, Line line);

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

	void Input() override;	

	float Get_length();

	Line_segment operator=(Line line);

	friend void operator << (ostream& o, Line_segment line_segment);

};

