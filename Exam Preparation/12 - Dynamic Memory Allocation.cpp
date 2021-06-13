// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 106 of Lectures Material

#include <iostream>
#include <array>
#include <new> // For using new and delete
#include <cstdlib> // For using malloc() and free() methods
using namespace std;

void using_C () {

    // 1D array
    int n = 25, *p;
    p = (int *) malloc(n * sizeof(int));
    for (int i = 0 ; i < n ; i++ ) {
        *(p+i) = i;
    }
    for (int i = 0 ; i < n ; i++ ) {
        cout << *(p+i) << " ";
    }
    cout << endl;
    free(p);

    // 2D array
    int ncol = 3, nline = 5, **matrix;
    matrix = (int **) malloc (nline * sizeof(int *));
    for (int i = 0 ; i < nline ; i++ ) {
        matrix[i] = (int *) malloc (ncol * sizeof(int));
    }

    for (int i = 0 ; i < nline ; i++) {
        for (int j = 0 ; j < ncol ; j++) {
            matrix[i][j] = i+j;
        }
    }
    
    for (int i = 0 ; i < nline ; i++) {
        for (int j = 0 ; j < ncol ; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    free(matrix);
}

void using_CPP () {

    // 1D array
    int n = 25;
    int *p = new int[n];
    
    for (int i = 0 ; i < n ; i++ ) {
        *(p+i) = i;
    }

    for (int i = 0 ; i < n ; i++ ) {
        cout << *(p+i) << " ";
    }
    cout << endl;
    delete [] p;
}

int main ()
{
    // Using C and C++ methods
    using_C();
    using_CPP();
    return 0;
}