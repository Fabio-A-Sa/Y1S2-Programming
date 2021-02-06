// Exercices from first collection, available on: 
// https://github.com/MIEIC-FEUP/Recursos/blob/master/1%C2%BA%20ano/2%C2%BA%20semestre/PROG%20-%20Programa%C3%A7%C3%A3o/Pr%C3%A1ticas/Folha%20%20de%20exerc%C3%ADcios%201.pdf

// Exercício 2.6.d --> ver se o número é perfeito


#include <iostream>
#include <cmath>
using namespace std;

// There is one bug in this code! But I quit now!
int main () // Exercício 2.6.b (100 primeiros números primos)
{
    bool flag = true;
    int counter = 0;

    for (int cobaia = 2; cobaia < 100; cobaia++)
    {
        for (int i = 2; i < sqrt(cobaia); i++)
        {
            flag = flag && ((cobaia % i) != 0);
        } 
        if (flag != true) // Its not prime
        {
            continue;
        }
        else
        {
            cout << cobaia << " ";
            counter = counter + 1;
        }
    }

}
