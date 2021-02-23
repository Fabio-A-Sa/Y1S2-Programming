// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <cmath>
using namespace std;

int factorial (int number) 
{
    if (number <= 1) { return 1 ; }
    else { return number * factorial(number - 1) ; }
}

void serie_a_with_precision ()
{
    int i = 1;
    double result = 0, precision; 
    double const pi = 3.14159265359;

    cout << "Precisao pretendida? ";
    cin >> precision;

    do {
        double denominador = 2*i-1;
        if ( i%2 == 1) {
            // Somar
            result = result + 4/denominador;
        }
        else {
            // Subtrair
            result = result - 4/denominador;
        }
        i++;

        } while (abs(result-pi) > precision);

    cout << "O valor de pi: " << result << endl;
}

void serie_b_with_precision ()
{
    double result = 0, precision; 
    int i = 1;
    double const e = 2.71828;

    cout << "Precisao pretendida? ";
    cin >> precision;

    do {
        double denominador = factorial(i-1);
        result = result + 1/denominador;
        i++;
        } while (abs(result - e) > precision) ;

    cout << "O valor de e: " << result << endl;
}

void serie_c_with_precision ()
{
    int x, i = 1;
    double result = 1, precision;
    const double e = 2.71828; 

    cout << "Qual o valor de x? ";
    cin >> x;
    cout << "Qual a precisao pretendida? ";
    cin >> precision;
    double compare = pow(e, (-1)*x);

    do  {
        double denominador = factorial(i);
        if ( i%2 == 1) {
            result = result - pow(x, i)/denominador;
        }
        else {
            result = result + pow(x, i)/denominador;
        }
        i++;
        } while ( abs(result - compare) > precision );

    cout << "O valor de e elevado a menos x: " << result << endl;
}

int main ()
{
    serie_a_with_precision ();
    serie_b_with_precision ();
    serie_c_with_precision ();
    return 0;
}