// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
using namespace std;

int gcd (int m, int n) {
    
    if (m % n == 0) {
        return n;
    }
    else {
        int remainder = m % n;
        return gcd (n, remainder);
    }
}

int main ()
{
    int a, b;
    cout << "Please enter two integer numbers: ";
    cin >> a >> b;
    cout << "Greatest common divisor of numbers " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}