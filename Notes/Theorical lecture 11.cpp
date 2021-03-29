// Created on March 29, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 11, pages 107 --> ???

#include <iostream>
#include <vector>
#include <array>
using namespace std;

#define NLIN 2
#define NCOL 3

void showArray (int a[][NCOL], int numLines, int numCols) {
    for (int i = 0 ; i < numLines ; i++) {
        for (int j = 0 ; j < numCols ; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void static_2d_array ()
{
    int a[NLIN][NCOL];
    for (int i=0; i<NLIN; i++)
        for (int j=0; j<NCOL; j++)
            a[i][j] = 10*(i+1)+j;
    showArray(a, NLIN, NCOL);
}

int main ()
{   
    static_2d_array();
    return 0;
}