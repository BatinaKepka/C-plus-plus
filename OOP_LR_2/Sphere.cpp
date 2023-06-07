#include "Sphere.h"
#include <math.h>
#include <iostream>
using namespace std;

Sphere::Sphere() : Object_in_space()
{

}

Sphere::Sphere(Point centre, float radius, string name) : Object_in_space(name)
{
	this->centre = centre;
	this->radius = radius;
}

void Sphere::Input()
{	
	centre.Input();
	cin >> radius;	
	this->Name = centre.getName();
}

bool Sphere::Point_on_Sphere(Point point)
{
	if ((pow((point.getX() - centre.getX()), 2) + pow((point.getY() - centre.getY()), 2) + pow((point.getZ() - centre.getZ()), 2)) == (pow(radius, 2)))
	{
		printf("\n����� ����� �� �����!");
		return true;
	}
	else
	{
		printf("\n����� �� ����� �� �����!");
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