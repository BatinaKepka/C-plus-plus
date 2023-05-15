#include "Point.h"
#include <math.h>
#include <iostream>

void PointInit(Point* point, float x, float y, float z)
{
	point->x = x;
	point->y = y;
	point->z = z;

}
void PointInput(Point* point)
{
	float x, y, z;
	scanf_s("%f%f%f", &x, &y, &z);
	PointInit(point, x, y, z);
}
void PointDisplay(Point point)
{
	printf("x = %f y = %f z =%f\n", point.x, point.y, point.z);
}
float Distance_to_point(Point first_piont, Point second_point)
{
	return sqrt(pow((second_point.x - first_piont.x), 2) + pow((second_point.y - first_piont.y), 2) + pow((second_point.z - first_piont.z), 2));
}