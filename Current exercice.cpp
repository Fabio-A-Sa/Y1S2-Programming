// Exercices from first collection, available on: 
// https://github.com/MIEIC-FEUP/Recursos/blob/master/1%C2%BA%20ano/2%C2%BA%20semestre/PROG%20-%20Programa%C3%A7%C3%A3o/Pr%C3%A1ticas/Folha%20%20de%20exerc%C3%ADcios%201.pdf

// Exercício 2.6.d --> ver se o número é perfeito
#include <iostream>
#include <cmath>
using namespace std;

int main () // Exercício 2.4 (custo do transporte da mercadoria)
{
    double peso, resultado;

    cout << "Insira o peso da mercadoria, em gramas: ";
    cin >> peso;

    if (peso < 500)
    {
        resultado = 5;
    }
    else if (peso >= 500 && peso <= 1000)
    {
        resultado = 5 + (1.5 * ((peso - 500)/100));
    }
    else
    {
        resultado = 12.5 + (5 * ((peso - 1000)/250));
    }
    cout << "O total a pagar e " << resultado << " euros." << endl;
    return 0;
}