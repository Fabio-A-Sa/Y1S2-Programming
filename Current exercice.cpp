// Exercices from first collection, available on: 
// https://github.com/MIEIC-FEUP/Recursos/blob/master/1%C2%BA%20ano/2%C2%BA%20semestre/PROG%20-%20Programa%C3%A7%C3%A3o/Pr%C3%A1ticas/Folha%20%20de%20exerc%C3%ADcios%201.pdf

#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

bool isPrime (int number) 
{
    bool flag = true;
    for (int i = 2; i < number ; i++) {
        flag = flag && ( number % i != 0);
    }
    return flag;
}

int main () // Exercício 3.2.c -> Primos até 1000
{
    int number = 2, counter = 0;

    do  {
        if (isPrime(number)) { cout << number << " "; counter++; number++; }
        else { counter++; number++; }
        } while (counter < 1000);

    return 0;
}