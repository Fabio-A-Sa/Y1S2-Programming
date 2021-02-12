// Exercices from first collection, available on: 
// https://github.com/MIEIC-FEUP/Recursos/blob/master/1%C2%BA%20ano/2%C2%BA%20semestre/PROG%20-%20Programa%C3%A7%C3%A3o/Pr%C3%A1ticas/Folha%20%20de%20exerc%C3%ADcios%201.pdf

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

int factorial (int number) 
{
    if (number <= 1) { return 1 ; }
    else { return number * factorial(number - 1) ; }
}

int main () // Exercício 2.11.c -> e elevado a -x
{
    int n, x;
    double result = 1; 

    cout << "Quantas parcelas devo somar? ";
    cin >> n;
    cout << "Qual o valor de x? ";
    cin >> x;

    for (int i = 1; i < n ; i++) {

        double denominador = factorial(i);
        if ( i%2 == 1) {
            result = result - pow(x, i)/denominador;
        }
        else {
            result = result + pow(x, i)/denominador;
        }
    }
    cout << "O valor de e elevado a menos x: " << result << endl;
    return 0;
}