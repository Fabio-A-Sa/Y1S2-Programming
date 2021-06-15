// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 224 of Lectures Material

#include <iostream>
#include <array>
using namespace std;

// T admite ser um valor genérico (int, long, float, double)
template<typename T> // or template<class T>

T sum (T a, T b) { return a + b ; }

void printArray (const T a[], size_t n) {
    for (size_t i = 0 ; i < n ; i++ ) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main ()
{
    int number1 = 10;
    int number2 = 5;
    cout << sum (number1, number2) << endl;
    double number3 = 7.5;
    double number4 = 9.32;
    cout << sum (number3, number4) << endl;
    T arr[] = {56, 5415, 546, 541, 321, 3215, 6541, 5, 0, 65416};
    printArray(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}