#pragma once
#include <iostream>
using namespace std;

class Object_in_space
{
protected:
	string Name;
public:
	Object_in_space();
	Object_in_space(string name); 
	virtual void Input() = 0;
	string getName();
};

class Point : public Object_in_space
{
private:
	float x, y, z;	

public:
	Point();

	Point(float x, float y, float z,string name);

	void Input();	

	float Distance_to_Point(Point end);

	float getX();

	float getY();

	float getZ();		

	bool More_distant(Point second);

	friend void ValuePointX2(Point& point);

	friend void operator << (ostream& o, Point point);

	Point operator + (Point b);

	Point& operator ++();

	Point operator ++(int unused);	

	
};






