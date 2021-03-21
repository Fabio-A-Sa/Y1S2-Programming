// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <array>
#include <cmath>
#include <vector>
using namespace std;

// Global constant
const int NE = 5;

void localMax_usingArray(const int a[][NE]) {
    
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

void localMax_usingVector(vector<vector<int>> a) {
    
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
    // Input user values --> Vector (2D)
    vector<vector<int>> matrix_vector;
    vector<int> values;
    int nRows, nLines, number;
    cout << "Number of rows: ";
    cin >> nRows;
    cout << "Number of lines: ";
    cin >> nLines;

    for (int line = 0 ; line < nLines ; line ++ ) {
        for (int row = 0 ; row < nRows ; row ++ ) {
            cout << "Input a number: ";
            cin >> number;
            values.push_back(number);
        }   
        matrix_vector.push_back(values);
        values.clear();
    }

    for (int line = 0 ; line < nLines ; line ++ ) {
        for (int row = 0 ; row < nRows ; row ++ ) {
            cout << "Number " << matrix_vector[line][row] << endl;
        }   
    }


    return 0;   
}