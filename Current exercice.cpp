// Exercices from first collection, available on: 
// https://github.com/MIEIC-FEUP/Recursos/blob/master/1%C2%BA%20ano/2%C2%BA%20semestre/PROG%20-%20Programa%C3%A7%C3%A3o/Pr%C3%A1ticas/Folha%20%20de%20exerc%C3%ADcios%201.pdf

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

double rad (double degree)
{
    const double pi = 3.14159265;
    double rads;
    rads = (pi*degree)/180.0;
    return rads;
}

int main () // Exercício 2.7.b (tabela de ângulos por input)
{
    double lower, upper, incremento;
    string template_b = "ang    sen     cos     tan";

    cout << "Enter a lower number in degrees: ";
    cin >> lower;
    cout << "Enter a upper number in degrees: ";
    cin >> upper;
    cout << "Enter a increment number: ";
    cin >> incremento;

    cout << endl << template_b;
    for (double x = lower; x <= upper; x = x+incremento) {
        cout << x << "   ";
        cout << sin(rad (x)) << "   " << cos(rad (x)) << "   " << tan(rad (x)) << endl;
    }

    return 0;
}