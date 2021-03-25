// Created on March 25, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 8, pages 102 --> ??

#include <iostream>
#include <vector>
#include <array>
using namespace std;

// Auxiliar functions

void showArray (const int *a , int size) {

    for (int i = 0 ; i < size ; i++ ) {
        cout << "a[" << i << "] = " << *(a+i) << endl;
    }
}

int sum (int x , int y) {
    return x + y;
}

void pointers_numbers () {

    int example[] = {9, 10, 56, 8, 4} ;
    showArray(example, 5);
}

void swap_with_pointers (int *xPTR, int *yPTR) {
    
    int temp = *xPTR;
    *xPTR = *yPTR;
    *yPTR = temp;
}

void pointers_functions () {

    int result;
    int (*p)(int, int);
    p = sum;
    result = (*p)(5, 8);
    cout << "Sum: " << result << endl;
}

int main ()
{
    pointers_numbers();
    pointers_functions();

    int x = 10, y = 340;
    cout << "Begin: x = " << x << " and y = " << y << endl;
    swap(x, y);
    cout << "End: x = " << x << " and y = " << y << endl;

    return 0;
}