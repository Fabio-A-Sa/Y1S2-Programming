// Created on March 8, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 5, pages 29 --> 45

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Using global variables
const double PI = 3.14159; 

// Programming in C++ using functions and modules
double distance_t (double x1, double x2, double y1, double y2) 
{
    double dist;
    dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return dist;
}

double area (double p, double p1, double p2, double p3)
{
    double area;
    area = sqrt(p*(p-p1)*(p-p2)*(p-p3));
    return area;
}

int main()
{
    double ax, ay, bx, by, cx, cy;
    double distance, area_total, l1, l2, l3, l_total;

    // Input
    cout << "Triangle:" << endl;
    cout << "Vertice A (x and y):";
    cin >> ax >> ay;
    cout << "Vertice B (x and y):";
    cin >> bx >> by;
    cout << "Vertice C (x and y):";
    cin >> cx >> cy;

    // Data
    l1 = distance_t(ax, bx, ay, by);
    l2 = distance_t (ax, cx, ay, cy);
    l3 = distance_t (bx, cx, by, cy);
    l_total = l1 + l2 + l3;
    area_total = area (l_total, l1, l2, l3); 
    cout << "Area of triangle: " << area_total << endl;
    return 0;
}