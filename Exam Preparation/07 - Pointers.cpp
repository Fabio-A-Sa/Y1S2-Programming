// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 47/102 of Lectures Material

#include <iostream>
using namespace std;

int sum (int number1, int number2) { return number1 + number2 ; }

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
    cout << another << endl;

    // Pointers and arrays:
    int arr[] = {10, 52, -9, 56, 23, 7, 23};
    int *pointer = arr;
    for (int i = 0 ; i < sizeof(arr) / sizeof(arr[0]) ; i++ ) {
        cout << *(pointer+i) << " ";
    }
    cout << endl;

    // Pointers and functions:
    int (*p_function) (int, int) = sum;
    int result = (*p_function) (2, 3);
    cout << "Sum with pointer function: " << result << endl;

    return 0;
}