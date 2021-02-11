// Exercices from first collection, available on: 
// https://github.com/MIEIC-FEUP/Recursos/blob/master/1%C2%BA%20ano/2%C2%BA%20semestre/PROG%20-%20Programa%C3%A7%C3%A3o/Pr%C3%A1ticas/Folha%20%20de%20exerc%C3%ADcios%201.pdf

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

int main () // Exercício 2.8 Juros compostos
{
    double n, q, j, result;

    cout << "Quantos anos? ";
    cin >> n;
    cout << "Quantia inicial: ";
    cin >> q;
    cout << "Taxa de juros anuais, em percentagem: ";
    cin >> j;

    result = q*pow((1+j), n);

    cout << "No final de " << n << " anos deveria ter " << result << " euros no banco!" << endl;
    return 0;
}