// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <cmath>
using namespace std;

void a ()
{
    int soma = 0, maior = -100000, menor = 100000, input;
    double media, contador;

    do  {
        cout << "Numero: ";
        cin >> input;
        maior = input > maior ? input : maior;
        menor = input < menor ? input : menor;
        soma = soma + input;
        contador = contador + 1;
        } while (input != 0);

    media = soma / contador;
    cout << "Dados obtidos\nSoma: " << soma << endl;
    cout << "Media: " << media << endl;
    cout << "Maior numero colocado: " << maior << endl;
    cout << "Menor numero colocado: " << menor << endl;
}

void b ()
{
    int soma = 0, maior = -100000, menor = 100000, input, comprimento;
    double media, contador = 0;

    cout << "Qual e o comprimento da sequencia? ";
    cin >> comprimento;

    do  {
        cout << "Numero: ";
        cin >> input;
        maior = input > maior ? input : maior;
        menor = input < menor ? input : menor;
        soma = soma + input;
        contador = contador + 1;
        } while (contador != comprimento);

    media = soma / contador;
    cout << "Dados obtidos\nSoma: " << soma << endl;
    cout << "Media: " << media << endl;
    cout << "Maior numero colocado: " << maior << endl;
    cout << "Menor numero colocado: " << menor << endl;
}

void c ()
{
    int soma = 0, maior = -100000, menor = 100000, input;
    double media, contador = 0;

    do  {
        cout << "Numero: ";
        cin >> input;
        maior = input > maior ? input : maior;
        menor = input < menor ? input : menor;
        soma = soma + input;
        contador = contador + 1;
        } while (!(cin.eof()));

    media = soma / contador;
    cout << "Dados obtidos\nSoma: " << soma << endl;
    cout << "Media: " << media << endl;
    cout << "Maior numero colocado: " << maior << endl;
    cout << "Menor numero colocado: " << menor << endl;
}

int main ()
{
    a () ;
    b () ;
    c () ;
    return 0;
}