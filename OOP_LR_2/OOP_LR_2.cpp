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

void operator << (ostream& o, Point point)
{
    cout << endl << "x = " << point.x << " y = " << point.y << " z = " << point.z;
}

void operator << (ostream& o, Line line)
{
    cout << endl << "Первая точка:" << line.first;
    cout << endl << "Вторая точка:" << line.second;
}

void operator << (ostream& o, Line_segment line_segment)
{
    cout << endl << "Первая точка:" << line_segment.first;
    cout << endl << "Вторая точка:" << line_segment.second;
    cout << endl << "Длинна отрезка: " << line_segment.length;
}

void operator << (ostream& o, Triangle triangle)
{
    cout << endl << "Первая точка:" << triangle.first;   
    cout << endl << "Вторая точка:" << triangle.second;
    cout << endl << "Третья точка:" << triangle.third;
    
}

void operator << (ostream& o, Plane plane)
{
    cout << endl << "Первая точка:" << plane.first;
    cout << endl << "Вторая точка:" << plane.second;
    cout << endl << "Длинна отрезка: " << plane.third;
}

void operator << (ostream& o, Sphere sphere)
{
    cout << endl << "Центр сферы:" << sphere.centre;    
    cout << endl << "Радиус сферы:" << sphere.radius;
}

int main()
{
    
    setlocale(LC_ALL, "Rus"); 
    /*Line_segment a;
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
    */
    Point point;
    cout << "Точка:" << endl;
    point.Input();
    cout << "Вывод через cout:" << point;
    Line line;
    cout << endl <<"Прямая:" << endl;
    line.Input();
    cout << "Вывод через cout:" << line;
    Triangle triangle;
    cout << endl  << "Треугольник:" << endl;
    triangle.Input();
    cout << "Вывод через cout:" << triangle;
    Plane plane; 
    cout << endl << "Плоскость:" << endl;
    plane.Input();
    cout << "Вывод через cout:" << plane;
    Sphere sphere;
    cout << endl << "Сфера:" << endl;
    sphere.Input();
    cout << "Вывод через cout:" << sphere;
  
}


