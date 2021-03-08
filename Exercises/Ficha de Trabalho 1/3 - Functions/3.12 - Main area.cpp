// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <cmath>
using namespace std;

// Global variable
const double PI = 3.1415;

double distance_t (double x1, double x2, double y1, double y2) {

    double dist;
    dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return dist;
}

double area (double p, double p1, double p2, double p3) {

    double area;
    area = sqrt(p*(p-p1)*(p-p2)*(p-p3));
    return area;
}

void circle () {

    double radius, total;
    cout << "Enter a radius distance: ";
    cin >> radius;
    total = PI*pow(radius, 2);
    cout << "Area of circle is " << total << endl;
}

void triangle () {

    double ax, ay, bx, by, cx, cy;
    double distance, area_total, l1, l2, l3, l_total;

    cout << "Vertice A (x and y):";
    cin >> ax >> ay;
    cout << "Vertice B (x and y):";
    cin >> bx >> by;
    cout << "Vertice C (x and y):";
    cin >> cx >> cy;

    l1 = distance_t(ax, bx, ay, by);
    l2 = distance_t (ax, cx, ay, cy);
    l3 = distance_t (bx, cx, by, cy);
    l_total = l1 + l2 + l3;
    area_total = area (l_total, l1, l2, l3); 
    cout << "Area of triangle is " << area_total << endl;
}

void retangle () {

    double x1, x2, y1, y2, area;
    cout << "Vertice 1 (x and y):";
    cin >> x1 >> y1;
    cout << "Vertice 2 (x and y):";
    cin >> x2 >> y2;
    area = abs(x2-x1)*abs(y1-y2);
    cout << "Area of rectangle is " << area << endl;
}

int main () 
{
    int op;
    do  {

        cout << "Area of... \n1 --> Circle\n2 --> Triangle\n3 --> Retangle\nYour choice: ";
        cin >> op;

        switch (op) {
            case 1:
                circle();
                break;
            case 2:
                triangle();
                break;
            case 3:
                retangle();
                break;
            default:
                cout << "Input error. Please try again.";
            }

        } while (op != 1 && op != 2 && op != 3);
    return 0;
}