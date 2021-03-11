// Created on March 11, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 6, pages 45 --> ??

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI = 3.1415;

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

int main ()
{
    int x = 1, y = 2;
    swap1 (x, y);
    cout << "Value of x: " << x << " and value of y: " << y;
    swap2 (x, y);
    cout << "Value of x: " << x << " and value of y: " << y;
    return 0;
}