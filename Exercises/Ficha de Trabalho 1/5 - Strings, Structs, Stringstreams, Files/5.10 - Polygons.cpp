// Created on April, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct Polygon {

    struct Point {

        int x;
        int y;
    };  

    Point ponto;
};

int main ()
{
    int n_vertices, counter = 0;
    cout << "How many vertices you want? ";
    cin >> n_vertices;

    vector<Polygon> all_points ;
    while (counter != n_vertices) {

        Polygon poligono;
        cout << "Vertice " << counter + 1 << endl;
        cout << "X: ";
        cin >> poligono.ponto.x;
        cout << "Y: ";
        cin >> poligono.ponto.y;
        all_points.push_back(poligono);
        counter ++;
    }

    return 0;
}