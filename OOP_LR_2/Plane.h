#pragma once
#include "Point.h"
typedef struct
{
	Point first, second, third;

}Plane;

void PlaneInit(Plane* plane, Point first, Point second, Point third);

void PlaneInput(Plane* plane);

void PlaneDisplay(Plane plane);

bool Point_on_plane(Plane plane, Point point);
