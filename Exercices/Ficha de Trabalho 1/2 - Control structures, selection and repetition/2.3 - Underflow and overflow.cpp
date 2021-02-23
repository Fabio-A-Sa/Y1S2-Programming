// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
using namespace std;

int main ()
{
    int A, B, sum;

    cout << "Enter a number: ";
    cin >> A;
    cout << "Another number: ";
    cin >> B;
    sum = A+B;

    if (sum < -2147483648) {
        cout << "sum underflow" << endl;
    }
    else if (sum > 2147483647) {
        cout << "sum overflow" << endl;
    }
    else {
        cout << "The sum is: " << sum << endl;
    }
    return 0;
}