// Exercices from first collection, available on: 
// https://github.com/MIEIC-FEUP/Recursos/blob/master/1%C2%BA%20ano/2%C2%BA%20semestre/PROG%20-%20Programa%C3%A7%C3%A3o/Pr%C3%A1ticas/Folha%20%20de%20exerc%C3%ADcios%201.pdf

#include <iostream>
#include <cmath>
using namespace std;

// Exercício 1.6 (área do triângulo)
// using #include <cmath> for sqrt

double distance_t (int x1, int x2, int y1, int y2)
{
    double dist;
    dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return dist;
}

double area (int p, int p1, int p2, int p3)
{
    double area;
    area = sqrt(p*(p-p1)*(p-p2)*(p-p3));
    return area;
}

int main()
{
    int ax, ay, bx, by, cx, cy;
    double distance, area_total, l1, l2, l3, l_total;
    cout << "Por favor insira as coordenadas dos vertices do triangulo:" << endl;
    cout << "Vertice A --> Abcissa (x):";
    cin >> ax;
    cout << "Vertice A --> Ordenada (y):";
    cin >> ay;
    cout << "Vertice B --> Abcissa (x):";
    cin >> bx;
    cout << "Vertice B --> Ordenada (y):";
    cin >> by;
    cout << "Vertice C --> Abcissa (x):";
    cin >> cx;
    cout << "Vertice C --> Ordenada (y):";
    cin >> cy;
    l1 = distance_t (ax, bx, ay, by);
    l2 = distance_t (ax, cx, ay, cy);
    l3 = distance_t (bx, cx, by, cy);
    l_total = l1 + l2 + l3;
    area_total = area (l_total, l1, l2, l3); 
    cout << "O triangulo considerado tem " << area_total << " unidades de area." << endl;
    return 0;
}