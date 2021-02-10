// Exercices from first collection, available on: 
// https://github.com/MIEIC-FEUP/Recursos/blob/master/1%C2%BA%20ano/2%C2%BA%20semestre/PROG%20-%20Programa%C3%A7%C3%A3o/Pr%C3%A1ticas/Folha%20%20de%20exerc%C3%ADcios%201.pdf

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main () // Weird sum
{
    int a, b, difference, sum, answer;
    string type;

    cout << "Value of a: ";
    cin >> a;
    cout << "Value of b: ";
    cin >> b;

    sum = a + b;
    difference = a - b;
    type = (difference % 2 != 0) ? "odd" : "even";

    if ( type == "odd" ) {
        answer = sum + a*b;
        cout << "Because the difference between a and b is " << type << " the weird sum is " << answer << endl;
    }
    else {
        answer = sum*2;
        cout << "Because the difference between a and b is " << type << " the weird sum is " << answer << endl;
    }
    return 0;
}