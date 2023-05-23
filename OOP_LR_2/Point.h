#pragma once
class Point
{
private:
	float x, y, z;	

public:
	Point();

	Point(float x, float y, float z);

	void Input();

	void Display();

	float Distance_to_Point(Point end);

	float getX();

	float getY();

	float getZ();	

	bool More_distant(Point second);

	friend void ValuePointX2(Point& point);

	Point operator + (Point b);

	Point& operator ++();

	Point operator ++(int unused);	
};






