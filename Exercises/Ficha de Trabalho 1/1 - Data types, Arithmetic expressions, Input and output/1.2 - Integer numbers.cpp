// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
using namespace std;

int main() 
{
    double A, B, C;
    cout << "Please enter three numbers:" << endl;
    cin >> A >> B >> C;

    cout << "mean = " << (A + B + C) / 3 << endl;
    cout << "A-mean = " << A - (A + B + C) / 3 << endl;
    cout << "B-mean = " << B - (A + B + C) / 3 << endl;
    cout << "C-mean = " << C - (A + B + C) / 3 << endl;

    return 0;
}