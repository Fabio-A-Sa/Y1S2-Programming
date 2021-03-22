// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <iomanip>
#include <cmath>
#include <climits>
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
        return n * factorial_rec(n-1);
    }
}

int main ()
{   
    unsigned int number; 

    cout << "Number: ";
    cin >> number;
    unsigned long long result = factorial_ite(number);
    cout << "The factorial of number " << number << " is " << result << endl;

    unsigned int n = 1;
    result = 1;
    while (true) {
        result = factorial_rec(n);
        if (result > ULLONG_MAX || result == 0) {
            break;
        }
        n = n + 1;
    }
    cout << "Max n for ULLONG integer is " << n-1 << endl;

    return 0;
}