#include "Line.h"
#include <iostream>

void LineInit(Line* line,Point first,Point second)
{
	PointInit(&line->first, first.x, first.y, first.z);
	PointInit(&line->second, second.x, second.y, second.z);

}
void LineInput(Line* line)
{
	Point first, second;
	printf("");
	PointInput(&first);
	printf("");
	PointInput(&second);
	LineInit(line, first, second);
}
void LineDisplay(Line line)
{

	PointDisplay(line.first);
	PointDisplay(line.second);
}
bool Point_on_line(Line line, Point point)
{
	float x = (point.x - line.first.x) / (line.first.x - line.second.x);
	float y = (point.y - line.first.y) / (line.first.y - line.second.y);
	float z = (point.z - line.first.z) / (line.first.z - line.second.z);
	if ((x == y) && (y == z))
	{
		printf("\nТочка лежит на прямой!");
		return true;
	}		
	else
	{
		printf("\nТочка не лежит на прямой!");
		return false;
	}
		
}