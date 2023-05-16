#include <iostream>

#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Plane.h"
#include "Sphere.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus"); 

    Point A(1, 2, 3), B;
    cout  << "Введите координаты точки:" << endl;
    B.Input();
    A.Display();
    B.Display();
    cout << endl << "Расстояние между точками равно:" << A.Distance_to_Point(B);

    Line line;
    cout << endl << "Введите координаты двух точек прямой:" << endl;
    line.Input();
    line.Display();
    line.Point_on_line(A);

    Triangle triangle;
    cout << endl << "Введите координаты трех вершин треугольника:" << endl;
    triangle.Input();
    cout << endl << "Вершины треугольника:";
    triangle.Display();
    cout << endl << "Периметр треугольника: " << triangle.Perimeter();
    cout << endl << "Площадь треугольника: " << triangle.Area();

    Plane plane;
    cout << endl << "Введите координаты трёх точек задающих плоскость:" << endl;
    plane.Input();
    cout << endl << "Координаты трёх точек задающих плоскость:";
    plane.Display();
    plane.Point_on_plane(B);

    Sphere sphere;
    cout << endl << "Введите кординаты центра сферы и её радиус:" << endl;
    sphere.Input();
    cout << endl << "Кординаты центра сферы и её радиус:";
    sphere.Display();
    sphere.Point_on_Sphere(A);

    int n;    
    cout << endl <<"Введите размер массива: ";
    cin >> n;
    Point* array_of_points = new Point[n];
    for (int i = 0; i < n; i++) {
        cout << "\nВедите координаты  " << i + 1 << " точки: \n";
        array_of_points[i].Input();      
    }

    cout << "Точки из нашего массива:";
    for (int i = 0; i < n; i++) {
        cout << endl;
        array_of_points[i].Display();
    }
    delete[] array_of_points;

    Line* array_of_line[3];
    cout << "\nВведите массив прямых\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Прямая - " << i + 1 << endl;
        array_of_line[i] = new Line;
        array_of_line[i]->Input();
    }
    cout << "\nНаш массив прямых\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Прямая - " << i + 1 << endl;
        array_of_line[i]->Display();
        delete array_of_line[i];
    }
}


