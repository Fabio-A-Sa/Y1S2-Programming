// Created on May 06, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 18, pages 220 --> ???

#include <iostream>
#include <string>
using namespace std;

template <class T>
void swapvalues (T x, T y) {

    cout << "Before: x = " << x << " and y = " << y << endl;
    T temp = x;
    x = y;
    y = temp;
    cout << "After: x = " << x << " and y = " << y << endl;
}

int main ()
{
    swapvalues("Hello", "World");  // Strings
    swapvalues(56165, 651651);     // Integers
    swapvalues('F', 'A');          // Chars
    return 0;
}