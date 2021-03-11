// Created on March 11, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 6, pages 45 --> ??

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI = 3.1415;

// Difference between call-by-value and call-by-reference
void swap_by_value (int a , int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap_by_reference (int &a , int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int swap ()
{
    int x = 1, y = 2;
    swap_by_value (x, y);
    cout << "Value of x: " << x << " and value of y: " << y;
    swap_by_reference (x, y);
    cout << "Value of x: " << x << " and value of y: " << y;
    return 0;
}