// Created on March 25, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 10, pages 102 --> 107

#include <iostream>
#include <vector>
#include <array>
#include <cstdlib>          // Using 'malloc' and 'free'
#include <new>              // Using 'new' and 'delete'
using namespace std;

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

void malloc_memory () {

    // Reserve memory -> Only the necessary
    int *p = (int*)malloc(10*sizeof(int));

    if (p != NULL) {
        // Input data
        for (int index = 0 ; index < 10 ; index ++ ) {
            p[index] = index + 1;
        }

        // Show data
        for (int i = 0 ; i < 10 ; i++) {
            cout << p[i] << " ";
        }
    }
    else {
        cout << "Out of heap memory!" << endl;
    }
    // After using memory -> freeing it
    free(p);
}

void new_memory () {

    // Reserve memory -> Only the necessary
    int *p = new int(10);

    if (p != NULL) {
        // Input data
        for (int index = 0 ; index < 10 ; index ++ ) {
            p[index] = index + 1;
        }

        // Show data
        for (int i = 0 ; i < 10 ; i++) {
            cout << p[i] << " ";
        }
    }
    else {
        cout << "Out of heap memory!" << endl;
    }
    // After using memory -> freeing it
    delete(p);
}

int main ()
{
    pointers_numbers();
    pointers_functions();

    int x = 10, y = 340;
    cout << "Begin: x = " << x << " and y = " << y << endl;
    swap(x, y);
    cout << "End: x = " << x << " and y = " << y << endl;

    malloc_memory ();
    cout << endl;
    new_memory ();
    cout << endl;
    
    return 0;
}