// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <array>
#include <cmath>
#include <vector>
using namespace std;

// Global constant
const int NE = 5;

void localMax(const int a[][NE]) {
    
    cout << "Local maxima: " << endl;
    for (int line = 1 ; line + 1 < NE ; line++ ) {
        for (int row = 1 ; row + 1 < NE ; row++ ) {
            if (a[line][row] > a[line+1][row] && a[line][row] > a[line-1][row] && a[line][row] > a[line][row+1] && a[line][row] > a[line][row-1] &&
                a[line][row] > a[line+1][row+1] && a[line][row] > a[line+1][row-1] && a[line][row] > a[line-1][row+1] && a[line][row] > a[line-1][row-1]    ) {
                    cout << "Number " << a[line][row] << " is in " << line << " line and " << row << " row of matrix" << endl;
                }
            else {
                continue;
            }
        }
    }
}

int main () 
{       
    // Example
    int matrix[][NE] = {{7, 3, 4, 1, 3}, 
                        {2, 9, 6, 2, 1}, 
                        {1, 3, 5, 1, 4}, 
                        {6, 5, 2, 7, 5}, 
                        {4, 2, 1, 3, 6}};
    localMax(matrix);

    // Input user values
    int input;
    int user_matrix[NE][NE];
    for (int line = 0 ; line < NE ; line ++) {
        for (int row = 0 ; row < NE ; row ++ ) {
            cout << "Another number: ";
            cin >> input;
            user_matrix[line][row] = input;
        }
    }
    localMax(user_matrix);

    
    return 0;
}