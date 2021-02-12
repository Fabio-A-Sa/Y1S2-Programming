// Exercices from first collection, available on: 
// https://github.com/MIEIC-FEUP/Recursos/blob/master/1%C2%BA%20ano/2%C2%BA%20semestre/PROG%20-%20Programa%C3%A7%C3%A3o/Pr%C3%A1ticas/Folha%20%20de%20exerc%C3%ADcios%201.pdf

#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

bool readFracc(int &numerator, int &denominator) 
{
    char operador;
    cin >> numerator >> operador >> denominator;
    bool flag = (operador != '/' || denominator == 0 || numerator == 0);

    if (flag) {
        // Fração não válida
        numerator = 0;
        denominator = 0;
        return !flag;
    }
    else {
        return !flag;
    }
}

int main () // Test function
{
    cout << readFracc(numerator)
}