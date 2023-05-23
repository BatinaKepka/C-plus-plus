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
    /*cout << "Введите точки первой прямой:\n";
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

    cout << "\nПериметр треугольника (значение через возврат float ): " << x.Perimeter();
    cout << "\nПериметр треугольника (значение через ссылку): " << perimetr1;
    cout << "\nПериметр треугольника (значение через указатель): " << *perimetr2;
    
    Point point1(1, 2, 3);
    cout << "Координаты точки до применения дружественной функции: ";
    point1.Display();
    ValuePointX2(point1);
    cout << "\nКоординаты точки после применения дружественной функции: ";
    point1.Display();
    
    Point x1;
    x1.Input();
    Point x2;
    x2.Input();
    if (x1.More_distant(x2))
        cout << "\nПеравая точка расположена дальже от центра!\n";
    else
        cout << "\nВторая точка расположена дальже от центра!\n";
    */

    Point y1(1, 3, 4);
    Point y2(2, 5, 1);
    cout << "\nКординаты первой точки:";
    y1.Display();
    cout << "\nКординаты второй точки:";
    y2.Display();
    Point y3 = y1 + y2;
    cout << "\nКординаты третьей точки (т3 = т1 + т2):";
    y3.Display();
    cout << "\nРабота постфиксного оператора: ";
    y3++.Display();
    y3.Display();
    y3 = y1 + y2;
    cout << "\nРабота префиксного оператора: ";
    (++y3).Display();
    y3.Display();

}


