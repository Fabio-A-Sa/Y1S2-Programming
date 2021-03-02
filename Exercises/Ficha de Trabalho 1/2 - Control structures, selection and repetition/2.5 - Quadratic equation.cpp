// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <cmath>
using namespace std;

int main () 
{
    double a, b, c, binomio, sol1, sol2, complex;
    string answer;

    cout << "The formula for the quadratic equation is given by: \n{ ax^2 + bx + c\nEnter the coefficient values:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    binomio = pow(b, 2) - 4*a*c;

    if (binomio > 0)
    {
        answer = "The equation has 2 different real roots: ";
        sol1 = ((-1*b) + sqrt(binomio))/(2*a);
        sol2 = ((-1*b) - sqrt(binomio))/(2*a);
        cout << answer << sol1 << " and " << sol2 << endl;
    }
    else if (binomio == 0)
    {
        answer = "The equation has 2 equal real roots: ";
        sol1 = (-1*b)/(2*a);
        cout << answer << sol1 << endl;
    }
    else
    {
        answer = "The equation has 2 complex roots: ";
        complex = sqrt(binomio*-1)/(2*a);
        sol1 = (-b)/(2*a);
        cout << answer << sol1 << "+" << complex << "i and " << sol1 << "-" << complex << "i" << endl;
    }
    return 0;
}