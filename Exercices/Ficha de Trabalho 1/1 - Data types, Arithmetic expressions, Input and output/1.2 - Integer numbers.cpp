// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
using namespace std;

int main() 
{
    double A, B, C, mean, diference;
    cout << "Please enter three numbers:" << endl;
    cout << "A ? ";
    cin >> A;
    cout << "B ? ";
    cin >> B;
    cout << "C ? ";
    cin >> C;

    cout.precision(4); // Round at 3 decimal places

    mean = (A + B + C) / 3;
    cout << "mean = " << mean << endl;
    diference = A - mean;
    cout << "A-mean = " << diference << endl;
    diference = B - mean;
    cout << "B-mean = " << diference << endl;
    diference = C - mean;
    cout << "C-mean = " << diference << endl;

    return 0;
}