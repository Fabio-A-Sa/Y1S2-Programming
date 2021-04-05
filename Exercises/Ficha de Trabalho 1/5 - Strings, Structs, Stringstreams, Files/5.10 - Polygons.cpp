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

    int total = 0;
    for (int index = 0 ; index < all_points.size() - 1 ; index ++) {
        int xa = all_points[index].ponto.x;
        int ya = all_points[index].ponto.y;
        int xp = all_points[index+1].ponto.x;
        int yp = all_points[index+1].ponto.y;
        total = total + (xa*yp - ya*xp);
    }
    int x_inicial = all_points[0].ponto.x;
    int x_final = all_points[all_points.size()-1].ponto.x;
    int y_inicial = all_points[0].ponto.y;
    int y_final = all_points[all_points.size()-1].ponto.y;
    total = total + (x_final*y_inicial-y_final*x_inicial);
    
    double area = (double) abs(total)/2;
    cout << "Total area: " << area << endl;

    return 0;
}