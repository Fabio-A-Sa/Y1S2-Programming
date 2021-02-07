// Exercices from first collection, available on: 
// https://github.com/MIEIC-FEUP/Recursos/blob/master/1%C2%BA%20ano/2%C2%BA%20semestre/PROG%20-%20Programa%C3%A7%C3%A3o/Pr%C3%A1ticas/Folha%20%20de%20exerc%C3%ADcios%201.pdf

#include <iostream>
using namespace std;

int main () // FizzBuzz version 2 (sequence) 
{
    int number, i;
    cout << "Please enter a number: ";
    cin >> number;
    cout << "The sequence is: ";

    for (int i = 1; i <= number; i++)
    {
        if (i % 15 == 0)
        {
            cout << "FizzBuzz ";
        }
        else if (i % 3 == 0)
        {
            cout << "Fizz ";
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz ";
        }
        else
        {
            cout << i << " ";
        }
    }
}