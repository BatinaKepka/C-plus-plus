#pragma once
#include "Point.h"

typedef struct
{
	Point centre;
	float radius;

}Sphere;

void SphereInit(Sphere* sphere, Point centre, float radius);

void SphereInput(Sphere* sphere);

void SphereDisplay(Sphere sphere);

bool Point_on_Sphere(Sphere sphere, Point point);