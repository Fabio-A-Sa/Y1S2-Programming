// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    double n, q, j, result;

    cout << "Years? ";
    cin >> n;
    cout << "Initial amount: ";
    cin >> q;
    cout << "Annual interest rate: ";
    cin >> j;

    result = q*pow((1+j), n);

    cout << "Amount that a depositor can withdraw from the bank: " << result << endl;
    return 0;
}