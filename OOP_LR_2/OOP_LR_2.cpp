#include <iostream>

#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Plane.h"
#include "Sphere.h"


using namespace std;

int Line::Count = 0;

void ValuePointX2(Point& point)
{
    point.x *= 2;
    point.y *= 2;
    point.z *= 2;
}


int main()
{
    
    setlocale(LC_ALL, "Rus"); 
    Line_segment a;
    cout << "Введите точки отрезка:" << endl;
    a.Input();
    cout << "Отрезок:";
    a.Display();
    Line b;
    cout << endl << "Введите точки прямой:" << endl;
    b.Input();
    cout << "Прямая:";
    b.Display();
    a = b;
    cout << endl << "Отрезок после оператора '=' :";
    a.Display();

    
  
}


