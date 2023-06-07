#pragma once
#include "Point.h"

class Sphere : public Object_in_space
{
private:
	Point centre;
	float radius;
public:
	Sphere();

	Sphere(Point centre, float radius, string name);

	void Input();

	friend void operator << (ostream& o, Sphere sphere);

	bool Point_on_Sphere(Point point);

	Point GetCentre();

	float GetRadius();
};


