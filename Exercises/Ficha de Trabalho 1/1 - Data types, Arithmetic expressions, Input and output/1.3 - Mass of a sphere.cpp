// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double pi = 3.14;
    double specific_mass, radius, mass;

    cout << "Specific Mass (Kg/m^3): ";
    cin >> specific_mass;
    cout << "Radius (m): ";
    cin >> radius;

    mass = (double) 4 / 3 * (specific_mass*pi*pow(radius, 3));
    cout << "Mass of a sphere: " << mass << endl;
    return 0;
}