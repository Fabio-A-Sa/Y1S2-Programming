// Exercices from first collection, available on: 
// https://github.com/MIEIC-FEUP/Recursos/blob/master/1%C2%BA%20ano/2%C2%BA%20semestre/PROG%20-%20Programa%C3%A7%C3%A3o/Pr%C3%A1ticas/Folha%20%20de%20exerc%C3%ADcios%201.pdf

#include <iostream>
#include <cmath>
using namespace std;

int main () // Exercício 2.2.c (construção de um triângulo com os valores)
{
    int a, b, c, maior, menor, medio;
    cout << "Insira 3 numeros:" << endl;
    cout << "Primeiro numero: ";
    cin >> a;
    maior = a;
    menor = a;
    cout << "Segundo numero: ";
    cin >> b;
    maior = b > maior ? b : maior;
    menor = b < menor ? b : menor;
    cout << "Terceiro numero: ";
    cin >> c;
    maior = c > maior ? c : maior;
    menor = c < menor ? c : menor;
    medio = (a + b + c) - (maior + menor);

    if ((maior >= (medio + menor)) || !(a>0 && b>0 && c>0))
    {
        // Se os vértices não se unirem ou um dos comprimentos for negativo
        cout << "Nao se pode construir um triangulo com estes valores!" << endl;
    }
    else
    {
        cout << "Pode-se construir um triangulo com estes valores!" << endl;
    }
    return 0;
}