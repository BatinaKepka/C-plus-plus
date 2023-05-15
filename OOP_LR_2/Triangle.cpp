#include "Triangle.h"
#include <iostream>

void TriangleInit(Triangle* triangle, Point first, Point second, Point third)
{
	PointInit(&triangle->first, first.x, first.y, first.z);
	PointInit(&triangle->second, second.x, second.y, second.z);
	PointInit(&triangle->third, third.x, third.y, third.z);	
}
void TriangleInput(Triangle* triangle)
{
	Point first, second, third;
	printf("");
	PointInput(&first);
	printf("");
	PointInput(&second);
	printf("");
	PointInput(&third);
	TriangleInit(triangle, first, second, third);
}
void TriangleDisplay(Triangle triangle)
{
	PointDisplay(triangle.first);
	PointDisplay(triangle.second);
	PointDisplay(triangle.third);
}
float TrianglePerimeter(Triangle triangle)
{
	return Distance_to_point(triangle.first, triangle.second) + Distance_to_point(triangle.first, triangle.third) + Distance_to_point(triangle.third, triangle.second);
}
float TriangleArea(Triangle triangle)
{
	float a = Distance_to_point(triangle.first, triangle.second);
	float b = Distance_to_point(triangle.first, triangle.third);
	float c = Distance_to_point(triangle.third, triangle.second);
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}