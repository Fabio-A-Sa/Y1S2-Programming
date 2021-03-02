// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <limits>
using namespace std;

int main ()
{
    int A, B, sum;

    cout << "Enter a number: ";
    cin >> A;
    cout << "Another number: ";
    cin >> B;
    sum = A+B;

    if (sum > 0 && A < 0 && B < 0) {
        // sum < INT_MIN
        cout << "sum underflow" << endl;
    }
    else if (sum < 0 && A > 0 && B > 0) {
        // sum > INT_MAX
        cout << "sum overflow" << endl;
    }
    else {
        cout << "The sum is: " << sum << endl;
    }
    return 0;
}