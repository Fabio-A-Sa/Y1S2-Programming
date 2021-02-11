// Exercices from first collection, available on: 
// https://github.com/MIEIC-FEUP/Recursos/blob/master/1%C2%BA%20ano/2%C2%BA%20semestre/PROG%20-%20Programa%C3%A7%C3%A3o/Pr%C3%A1ticas/Folha%20%20de%20exerc%C3%ADcios%201.pdf

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

int main () // Reverse integers
{
    int number, inverse_number = 0, aux, last_digit;

    cout << "Enter a number: ";
    cin >> number;
    aux = number;

    while (aux > 0) {
        last_digit = aux % 10;
        inverse_number = 10*inverse_number + last_digit;
        aux = aux / 10;
    }

    cout << "The inverse integer of number " << number << " is " << inverse_number << "!" << endl;
    return 0;
}
