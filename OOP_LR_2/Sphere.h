#pragma once
#include "Point.h"

class Sphere
{
private:
	Point centre;
	float radius;
public:
	Sphere();

	Sphere(Point centre, float radius);

	void Input();

	friend void operator << (ostream& o, Sphere sphere);

	bool Point_on_Sphere(Point point);

	Point GetCentre();

	float GetRadius();
};


