// Exercices from first collection, available on: 
// https://github.com/MIEIC-FEUP/Recursos/blob/master/1%C2%BA%20ano/2%C2%BA%20semestre/PROG%20-%20Programa%C3%A7%C3%A3o/Pr%C3%A1ticas/Folha%20%20de%20exerc%C3%ADcios%201.pdf

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

double rounded (double number, double exponent)
{
    double n;
    n = round((number * pow(10, exponent)))/pow(10, exponent);
    return n;
}

int main () // SquareRoot
{
    double number, a, b = 0, medio, exponent = -6, precision, zeros;
    cout << "Enter a number: ";
    cin >> number;
    a = number;
    cout << "Enter a precision of result: ";
    cin >> precision;

    for (char number: to_string(1 / precision)) {
        if (number == '0') {
            exponent++;
        }
    }

    while (true) {

        medio = (a + b) / 2;
        if ((pow(medio, 2) == number) || ((a-b) <= precision)) {
            break;
        }
        if (medio*medio > number) {
            a = medio;
        }
        else {
            b = medio;
        }
    }

    cout << "The square root of number " << number << " is " << rounded (medio, exponent) << endl;
    return 0;
}