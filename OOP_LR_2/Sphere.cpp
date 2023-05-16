#include "Sphere.h"
#include <math.h>
#include <iostream>
using namespace std;

Sphere::Sphere()
{

}

Sphere::Sphere(Point centre, float radius)
{
	this->centre = centre;
	this->radius = radius;
}

void Sphere::Input()
{	
	centre.Input();
	cin >> radius;	
}

void Sphere::Display()
{
	cout << endl << "Центр сферы:";
	centre.Display();
	cout << endl << "Радиус сферы:" << radius;	
}

bool Sphere::Point_on_Sphere(Point point)
{
	if ((pow((point.getX() - centre.getX()), 2) + pow((point.getY() - centre.getY()), 2) + pow((point.getZ() - centre.getZ()), 2)) == (pow(radius, 2)))
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

Point Sphere::GetCentre()
{
	return centre;
}
float Sphere::GetRadius()
{
	return radius;
}