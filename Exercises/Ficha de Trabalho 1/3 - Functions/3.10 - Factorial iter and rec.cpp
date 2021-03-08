// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int factorial_ite(unsigned int n) {

    unsigned long long total = 1;
    while (n > 1) {
        total = total * n;
        n = n - 1;
    }
    return total;
}

int factorial_rec(unsigned int n) {

    if (n == 1) {
        return n;
    }
    else {
        return n * factorial_rec(n-1)
    }
}

int main ()
{   
    unsigned int number; 

    cout << "Number: ";
    cin >> number;
    cout << "The factorial of number " << number << " is " << factorial_ite(number) << endl;
    return 0;
}