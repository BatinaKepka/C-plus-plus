#include <iostream>

#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Plane.h"
#include "Sphere.h"

#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
class occupied_memory_space
{
public:
    occupied_memory_space(T value)
    {
        this->value = value;
    }
    void DataTypeSize()
    {
        cout << "Занимаемое место в памяти: " << sizeof(value) << endl;
    }
private:
    T value;
};


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
    cout << "Название плоскости: " << plane.Name;
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

bool con(Point p1, Point p2)
{
    Point zero(0, 0, 0, "");
    if (p1.Distance_to_Point(zero) < p2.Distance_to_Point(zero))
        return true;
    else
        return false;
}

bool first_octant(Point p)
{
    if ((p.x > 0) && (p.y > 0) && (p.z > 0))
        return true;
    else
        return false;
}

int main()
{
    
    setlocale(LC_ALL, "Rus"); 


    /*vector<Line*> v;
    vector<Line*>::iterator  iL;

    Line* line;
    Line_segment* line_segment;
    line = new Line();
    line_segment = new Line_segment();

    v.push_back(line);
    v.push_back(line_segment);

    line = new Line();
    line_segment = new Line_segment();

    v.push_back(line);
    v.push_back(line_segment);

    for (iL = v.begin(); iL != v.end(); ++iL)
    {
        (*iL)->Input();
        (*iL)->Display();
    }
    
    */
    vector<Point> v;
    vector<Point>::iterator  iP;
    v.clear();
    Point A( -1, 1, 1, "A"), B(10, 10, -10, "B"), C(50, 50, 50, "C"), D(100, -100, 100, "D");
    v.push_back(A);
    v.push_back(D);
    v.push_back(C);
    v.push_back(B);
    cout << "Вектор до сортировки\n";
    for (iP = v.begin(); iP != v.end(); ++iP)
    {
        iP->Display();
    }
    sort(v.begin(), v.end(), con);

    cout << "\nВектор после сортировки\n";
    for (iP = v.begin(); iP != v.end(); ++iP)
    {
        iP->Display();
    }

    iP = find_if(v.begin(), v.end(), first_octant);
    if (iP != v.end())     
    {
        cout << "Точка из первого октанта";
        iP->Display();
    }       
    else
        cout << "Нет точек в первом октанте";

    
}


