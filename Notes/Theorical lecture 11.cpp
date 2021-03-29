// Created on March 29, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 11, pages 107 --> 122

#include <iostream>
#include <vector>
#include <array>
#include <cstdlib>
#include <string>
using namespace std;

unsigned const int NLIN = 2;
unsigned const int NCOL = 3;

void show_static_Array (int a[][NCOL]) {
    for (int i = 0 ; i < NLIN ; i++) {
        for (int j = 0 ; j < NCOL ; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void static_allocation_2d_array () {
    
    int a[NLIN][NCOL];
    for (int i=0; i<NLIN; i++)
        for (int j=0; j<NCOL; j++)
            a[i][j] = 10*(i+1)+j;
    show_static_Array(a);
}

void show_dinamic_array(int **a, int lines, int cols) {

    for (int i = 0 ; i < lines ; i++) {
        for (int j = 0 ; j < cols ; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void dinamic_allocation_2d_array () {

    int numLines = 3;
    int numCols = 4;
    int ** a = (int **) malloc(numLines * sizeof(int*)) ;
    for (int i = 0; i < numLines; i++)
        a[i] = (int *) malloc(numCols * sizeof(int));

    for (int i = 0 ; i < numLines ; i++)
        for (int j = 0 ; j < numCols ; j++ )
            a[i][j] = 10 * (i + 1) + j ;

    show_dinamic_array(a, numLines, numCols);

    // Free memory
    for (int i = 0 ; i < numLines ; i++ )
        free(a[i]);
    free(a);
}

void using strings () {

    string sentence = "Jaime Villate and Tux" ;
}

int main ()
{   
    static_allocation_2d_array();
    dinamic_allocation_2d_array();
    return 0;
}