// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <cmath>
#include <iostream>
using namespace std;

double round (double x, unsigned n) 
{   
    double rounded;
    rounded = floor(x * (pow(10, n)) + 0.5) / pow(10, n) ;
    return rounded;
}

int main ()
{   
    double number;
    int decimal_places;

    cout << "Enter a floar number: ";
    cin >> number;
    cout << "Number of decimal places to round: ";
    cin >> decimal_places;
    cout << round (number, decimal_places);
    
    return 0;
}