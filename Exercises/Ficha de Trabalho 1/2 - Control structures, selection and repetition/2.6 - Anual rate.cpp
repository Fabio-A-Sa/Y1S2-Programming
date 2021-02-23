// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
using namespace std;

int main ()
{
    double n, q, j, result;

    cout << "Quantos anos? ";
    cin >> n;
    cout << "Quantia inicial: ";
    cin >> q;
    cout << "Taxa de juros anuais, em percentagem: ";
    cin >> j;

    result = q*pow((1+j), n);

    cout << "No final de " << n << " anos deveria ter " << result << " euros no banco!" << endl;
    return 0;
}