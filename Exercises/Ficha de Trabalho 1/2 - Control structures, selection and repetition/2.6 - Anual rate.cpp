// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    double n, q, j;
    int amount = 0;

    cout << "Years? ";
    cin >> n;
    cout << "Initial amount: ";
    cin >> q;
    cout << "Annual interest rate: ";
    cin >> j;

    while (n) {
        amount = (amount + q)*(1 + j);
        n--;
    }

    cout << "Amount that a depositor can withdraw from the bank: " << amount << endl;
    return 0;
}