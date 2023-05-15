#pragma once
#include "Point.h"
typedef struct
{
	Point first, second, third;
}Triangle;

void TriangleInit(Triangle* triangle, Point first, Point second, Point third);

void TriangleInput(Triangle* triangle);

void TriangleDisplay(Triangle triangle);

float TrianglePerimeter(Triangle triangle);

float TriangleArea(Triangle triangle);