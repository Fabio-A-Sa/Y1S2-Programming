// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <cmath>
using namespace std;

void length_a ()
{
    int soma = 0, maior = -100000, menor = 100000, input, comprimento;
    double media, contador = 0;

    cout << "Length of the sequence? ";
    cin >> comprimento;

    do  {
        cout << "Number: ";
        cin >> input;
        maior = input > maior ? input : maior;
        menor = input < menor ? input : menor;
        soma = soma + input;
        contador = contador + 1;
        } while (contador != comprimento);

    media = soma / contador;
    cout << endl << "Sum: " << soma << endl;
    cout << "Mean: " << media << endl;
    cout << "Smallest number: " << menor << endl;
    cout << "Larger number: " << maior << endl;
}

void zero_b ()
{
    int soma = 0, maior = -100000, menor = 100000, input;
    double media, contador;

    do  {
        cout << "Number: ";
        cin >> input;
        maior = input > maior ? input : maior;
        menor = input < menor ? input : menor;
        soma = soma + input;
        contador = contador + 1;
        } while (input != 0);

    media = soma / contador;
    cout << endl << "Sum: " << soma << endl;
    cout << "Mean: " << media << endl;
    cout << "Smallest number: " << menor << endl;
    cout << "Larger number: " << maior << endl;
}

void endInput_c ()
{
    int soma = 0, maior = -100000, menor = 100000, input;
    double media, contador = 0;

    do  {
        cout << "Number: ";
        cin >> input;
        maior = input > maior ? input : maior;
        menor = input < menor ? input : menor;
        soma = soma + input;
        contador = contador + 1;
        } while (!(cin.eof()));

    media = soma / contador;
    cout << endl << "Sum: " << soma << endl;
    cout << "Mean: " << media << endl;
    cout << "Smallest number: " << menor << endl;
    cout << "Larger number: " << maior << endl;
}

int main ()
{
    length_a () ;
    zero_b () ;
    endInput_c () ;
    return 0;
}