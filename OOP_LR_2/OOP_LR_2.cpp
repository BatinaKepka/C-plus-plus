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
    cout << endl << "Точка - " << point.Name << ", координыты: " << "x = " << point.x << " y = " << point.y << " z = " << point.z << endl;
}

void operator << (ostream& o, Line line)
{
    cout << "Название прямой: " << line.Name;
    cout << endl << "Первая точка:" << line.first;
    cout << "Вторая точка:" << line.second;
}

void operator << (ostream& o, Line_segment line_segment)
{
    cout << "Название отрезка: " << line_segment.Name;
    cout << endl << "Первая точка:" << line_segment.first;
    cout << "Вторая точка:" << line_segment.second;
    cout << "Длинна отрезка: " << line_segment.length;
}

void operator << (ostream& o, Triangle triangle)
{
    cout << "Название треугольника: " << triangle.Name;
    cout << endl << "Первая точка:" << triangle.first;   
    cout << "Вторая точка:" << triangle.second;
    cout << "Третья точка:" << triangle.third;
    
}

void operator << (ostream& o, Plane plane)
{
    cout << "Название треугольника: " << plane.Name;
    cout << endl << "Первая точка:" << plane.first;
    cout << "Вторая точка:" << plane.second;
    cout << "Длинна отрезка: " << plane.third;
}

void operator << (ostream& o, Sphere sphere)
{
    cout << "Название сферы: " << sphere.Name << endl;
    cout << "Центр сферы:" << sphere.centre;    
    cout << "Радиус сферы:" << sphere.radius;
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
   
    Line line;
    Line_segment line_segment;
    Line* x;
    x = &line;
    cout << "Введите точки прямой: \n";
    x->Input();   
    x = &line_segment;
    cout << "Введите точки отрезка: \n";
    x->Input();   
    */

    Point point;
    Line line;
    Triangle triangle;
    Plane plane;
    Sphere sphere; 
    cout << "Введите точку:" << endl;
    point.Input();
    cout << "Введите линию:" << endl;
    line.Input();
    cout << "Введите треугольник: " << endl;
    triangle.Input();
    cout << "Введите плоскость: " << endl;
    plane.Input();
    cout << "Введите сферу: " << endl;
    sphere.Input();

    cout << point;
    cout << endl << line;
    cout << endl << triangle;
    cout << endl << plane;
    cout << endl << sphere;

}


