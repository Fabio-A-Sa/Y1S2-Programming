// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 47 of Lectures Material

#include <iostream>
using namespace std;

int main()
{
    int x;
    int &y = x; // Y is memory-copy of X. If X is changed, Y is changed too.

    x = 10;
    cout << "x = " << x << "; y = " << y << endl;
    y = 205654;
    cout << "x = " << x << "; y = " << y << endl;
    x = 10;
    cout << "x = " << x << "; y = " << y << endl;


    
    return 0;
}