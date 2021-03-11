// Created on March 11, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 6, pages 45 --> 52

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
    // By value --> the value does not change out of scope
    swap_by_value (x, y);
    cout << "Value of x: " << x << " and value of y: " << y << endl;
    // By value --> the value is changed in memory --> "Global variable"
    swap_by_reference (x, y);
    cout << "Value of x: " << &x << " and value of y: " << y << endl;
    // Show memory positions / adress
    cout << "Address of x: " << &x << " and address of y: " << &y << endl;
    return 0;
}

int main ()
{
    swap();
    return 0;
}