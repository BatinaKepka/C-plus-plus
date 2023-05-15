#include "Sphere.h"
#include <math.h>
#include <iostream>

void SphereInit(Sphere* sphere, Point centre, float radius)
{
	PointInit(&sphere->centre, centre.x, centre.y, centre.z);
	sphere->radius = radius;
	
}
void SphereInput(Sphere* sphere)
{
	Point centre;
	float radius;
	printf("");
	PointInput(&centre);
	printf("");
	scanf_s("%f", &radius);
	SphereInit(sphere, centre, radius);

}
void SphereDisplay(Sphere sphere)
{
	PointDisplay(sphere.centre);
	printf("R = %f", sphere.radius);
}
bool Point_on_Sphere(Sphere sphere, Point point)
{	
	if ((pow((point.x - sphere.centre.x), 2) + pow((point.x - sphere.centre.x), 2) + pow((point.x - sphere.centre.x), 2)) == (pow(sphere.radius, 2)))
	{
		printf("\nТочка лежит на сфере!");
		return true;
	}
		
	else
	{
		printf("\nТочка не лежит на сфере!");
		return false;
	}
		
}