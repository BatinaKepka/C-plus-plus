#include <iostream>

#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Plane.h"
#include "Sphere.h"

int main()
{
    setlocale(LC_ALL, "Rus");
    
    Point A;
    Point* B = (Point*)malloc(sizeof(Point));
    printf("\nВведите кординты точки А: \n");
    PointInput(&A);
    printf("\nВведите кординты точки B: \n");
    PointInput(B);
    printf("\nКординаты точки A: \n");
    PointDisplay(A);
    printf("\nКординаты точки B: \n");
    PointDisplay(*B);
    printf("\nРасстояние между точками A и B: %f", Distance_to_point(A, *B));
    free(B);    

    Line line;
    printf("\nВведите кординты двух точек прямой: \n");
    LineInput(&line);
    printf("\nКординаты точек задающих прямую: \n");
    LineDisplay(line);
    Point_on_line(line, A);     

    Line* dynamic_line = (Line*)malloc(sizeof(Line));
    printf("\nВведите кординты двух точек прямой: \n");
    LineInput(dynamic_line);
    printf("\nКординаты точек задающих прямую: \n");
    LineDisplay(*dynamic_line);
    Point_on_line(*dynamic_line, A);
    free(dynamic_line);

    Triangle triangle;
    printf("\nВведите кординаты трёх точек - вершин треугольника: \n");
    TriangleInput(&triangle);
    printf("\nКординаты вершин треугольника: \n");
    TriangleDisplay(triangle);
    printf("\nПериметр треугольника: %f", TrianglePerimeter(triangle));
    printf("\nПлощадь треугольника: %f", TriangleArea(triangle));

    Triangle* dynamic_triangle = (Triangle*)malloc(sizeof(Triangle));
    printf("\nВведите кординаты трёх точек - вершин треугольника: \n");
    TriangleInput(dynamic_triangle);
    printf("\nКординаты вершин треугольника: \n");
    TriangleDisplay(*dynamic_triangle);
    printf("\nПериметр треугольника: %f", TrianglePerimeter(*dynamic_triangle));
    printf("\nПлощадь треугольника: %f", TriangleArea(*dynamic_triangle));
    free(dynamic_triangle);

    Plane plane; 
    printf("\nВведите кординаты трёх точек задающих плоскость : \n");
    PlaneInput(&plane);
    printf("\nКординаты точек задающих плоскость: \n");
    PlaneDisplay(plane);
    Point_on_plane(plane, A);

    Plane* dynamic_plane = (Plane*)malloc(sizeof(Plane));
    printf("\nВведите кординаты трёх точек задающих плоскость : \n");
    PlaneInput(dynamic_plane);
    printf("\nКординаты точек задающих плоскость: \n");
    PlaneDisplay(*dynamic_plane);
    Point_on_plane(*dynamic_plane, A);
    free(dynamic_plane);

    Sphere sphere;
    printf("\nВведите центр и радиус сферы: \n");
    SphereInput(&sphere);
    printf("\nЦентр сферы и её радиус: \n");
    SphereDisplay(sphere);
    Point_on_Sphere(sphere, A);

    Sphere* dynamic_sphere = (Sphere*)malloc(sizeof(Sphere));
    printf("\nВведите центр и радиус сферы : \n");
    SphereInput(dynamic_sphere);
    printf("\nЦентр сферы и её радиус: \n");
    SphereDisplay(*dynamic_sphere);
    Point_on_Sphere(*dynamic_sphere, A);
    free(dynamic_sphere);

}


