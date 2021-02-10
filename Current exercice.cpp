// Exercices from first collection, available on: 
// https://github.com/MIEIC-FEUP/Recursos/blob/master/1%C2%BA%20ano/2%C2%BA%20semestre/PROG%20-%20Programa%C3%A7%C3%A3o/Pr%C3%A1ticas/Folha%20%20de%20exerc%C3%ADcios%201.pdf

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main () // Sum of divisors
{
    int number, result = 0;
    cout << "Enter a number: ";
    cin >> number;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            result = result + i;
        }
        else {
            continue;
        }
    }
    cout << "The sum of divisors of number " << number << " is " << result << endl;
    return 0;
}
