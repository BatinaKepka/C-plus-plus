#pragma once
typedef struct
{

	float x;
	float y;
	float z;

} Point;

void PointInit(Point* point, float x, float y,float z);

void PointInput(Point* point);

void PointDisplay(Point point);

float Distance_to_point(Point first_piont, Point second_point);


