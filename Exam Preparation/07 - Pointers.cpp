// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 47/102 of Lectures Material

#include <iostream>
using namespace std;

int main()
{
    // Y is memory-copy of X. If X is changed, Y is changed too.
    int x;
    int &y = x;
    x = 10;
    cout << "x = " << x << "; y = " << y << endl;
    y = 205654;
    cout << "x = " << x << "; y = " << y << endl;
    x = 10;
    cout << "x = " << x << "; y = " << y << endl;

    // Pointer operators
    // & --> Returns the memory adress of its operand
    int example = 10;
    int *p1 = &example;
    cout << "& example: " << p1 << endl;
    
    // * --> Returns the value of number in adress *p1
    int another = *p1;
    cout << another;

    return 0;
}