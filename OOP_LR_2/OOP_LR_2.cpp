#include <iostream>

#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Plane.h"
#include "Sphere.h"
using namespace std;
int Line::Count = 0;

int main()
{
    setlocale(LC_ALL, "Rus"); 
    cout << "Введите точки первой прямой:\n";
    Line* A = new Line();
    A->Input();
    cout << "Введите точки второй прямой:\n";
    Line* B = new Line();  
    B->Input();
    cout << "Сейчас существует " << Line::getCount() << " объектов класс Line";
    delete A;
    cout << "\nСейчас существует " << Line::getCount() << " объектов класс Line\n";
    cout << "Введите точки третьей прямой:\n";
    Line* C = new Line();
    C->Input();
    cout << "Сейчас существует " << Line::getCount() << " объектов класс Line";
    delete B;
    delete C;
    cout << "\nСейчас существует " << Line::getCount() << " объектов класс Line";


    Triangle x;
    cout << "\nВведите три вержины треугольника: \n";
    x.Input();
    float perimetr1;
    float* perimetr2 = new float;
    x.Perimeter(perimetr1);
    x.Perimeter(perimetr2);
    cout << "\nПериметр треугольника (значение через ссылку): " << perimetr1;
    cout << "\nПериметр треугольника (значение через указатель): " << *perimetr2;
    
}


