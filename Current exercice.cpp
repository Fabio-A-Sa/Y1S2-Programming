// Exercícios da primeira ficha de exercícios que está aqui: 
// https://github.com/MIEIC-FEUP/Recursos/blob/master/1%C2%BA%20ano/2%C2%BA%20semestre/PROG%20-%20Programa%C3%A7%C3%A3o/Pr%C3%A1ticas/Folha%20%20de%20exerc%C3%ADcios%201.pdf

#include <iostream>
using namespace std;

int main() // Exercício 1.3 (massa de uma esfera)
{
    const int pi = 3.14;
    double densidade, raio, massa;

    cout << "Valor da desidade da esfera, em quilogramas por metro cubico (Kg/m^3): ";
    cin >> densidade;
    cout << "Valor do raio da esfera, em metros (m): ";
    cin >> raio;

    massa = 4 / 3 * (densidade*pi*raio*raio*raio);
    cout << "A esfera considerada tem " << massa << " Kg de massa aproximadamente." << endl;
    return 0;
}