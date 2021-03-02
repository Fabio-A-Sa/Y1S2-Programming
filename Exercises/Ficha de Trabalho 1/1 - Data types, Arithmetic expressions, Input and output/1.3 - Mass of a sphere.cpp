// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double pi = 3.14;
    double densidade, raio, massa;

    cout << "Specific Mass (Kg/m^3): ";
    cin >> densidade;
    cout << "Radius (m): ";
    cin >> raio;

    massa = (double) 4 / 3 * (densidade*pi*pow(raio, 3));
    cout << "Mass of a sphere: " << massa << endl;
    return 0;
}