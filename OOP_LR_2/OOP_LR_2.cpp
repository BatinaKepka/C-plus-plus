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
    /*
    Line line;
    line.Input();   
    Point point;
    point.Input();
    cout << "Точка:";
    point.Display();
    cout << endl << "Линия:" ;
    line.Display();    
    line.Point_on_line(point);
    */
    
    Point array_Point1[4];
    
    for (int i = 0; i < 4; i++)
    {
        cout << "Введите координаты " << i + 1 << " точки:" << endl;
        array_Point1[i].Input();
    }
        
    cout << "Одномерный массив:";
    for (int i = 0; i < 4; i++)
    {
        array_Point1[i].Display();
    }
    cout << endl <<  "Одномерный массив после операции '++':";
    for (int i = 0; i < 4; i++)
    {
        array_Point1[i]++;
        array_Point1[i].Display();
    }
       
    cout << endl;
    Point array_Point2[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Введите координаты " << i + 1 << " " << j + 1 << " точки:" << endl;
            array_Point2[i][j].Input();
        }
    }
       
            
    cout << "Двумерный массив:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << endl << "Координаты " << i + 1 << " " << j + 1 << " точки:";
            array_Point2[i][j].Display();
        }
        cout << endl;
    }
    cout << endl << "Двумерный массив после операции '++':" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << endl << "Координаты " << i + 1 << " " << j + 1 << " точки:";
            array_Point2[i][j].Display();
        }
        cout << endl;
    }
        
            
    

 
        
  
}


