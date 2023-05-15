#pragma once
#include "Point.h"
typedef struct
{
	Point first, second;

}Line;

void LineInit(Line* line, Point first, Point second);

void LineInput(Line* line);

void LineDisplay(Line line);

bool Point_on_line(Line line, Point point);