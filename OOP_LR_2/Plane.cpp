#include "Plane.h"
#include <iostream>

void PlaneInit(Plane* plane, Point first, Point second, Point third)
{
	PointInit(&plane->first, first.x, first.y, first.z);
	PointInit(&plane->second, second.x, second.y, second.z);
	PointInit(&plane->third, third.x, third.y, third.z);
}
void PlaneInput(Plane* plane)
{
	Point first, second, third;
	printf("");
	PointInput(&first);
	printf("");
	PointInput(&second);
	printf("");
	PointInput(&third);
	PlaneInit(plane, first, second, third);
}
void PlaneDisplay(Plane plane)
{
	PointDisplay(plane.first);
	PointDisplay(plane.second);
	PointDisplay(plane.third);
}
bool Point_on_plane(Plane plane, Point point)
{
	float x = (point.x - plane.first.x) * ((plane.second.y - plane.first.y) * (plane.third.z - plane.first.z) - (plane.second.z - plane.first.z) * (plane.third.y - plane.first.y));
	float y = (point.y - plane.first.y) * ((plane.second.x - plane.first.x) * (plane.third.z - plane.first.z) - (plane.second.z - plane.first.z) * (plane.third.x - plane.first.x));
	float z = (point.z - plane.first.z) * ((plane.second.x - plane.first.x) * (plane.third.y - plane.first.y) - (plane.second.y - plane.first.y) * (plane.third.x - plane.first.x));
	if ((x + y + z) == 0)
	{
		printf("\nТочка лежит на плоскости!");
		return true;
	}		
	else
	{
		printf("\nТочка не лежит на плоскости!");
		return false;
	}
		
}
