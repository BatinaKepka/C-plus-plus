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
    cout << "\nСейчас существует " << Line::getCount() << " объектов класс Line";
    delete B;
    delete C;
    cout << "\nСейчас существует " << Line::getCount() << " объектов класс Line";
}


