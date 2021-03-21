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

void localMax_usingVector(vector<vector<int>> a, int nRows, int nLines, char answer) {
    
    if (answer == 'N') {

        // It considers "numbers in red"

        cout << "Local maxima: " << endl;
        for (int line = 1 ; line + 1 < nLines ; line++ ) {
            for (int row = 1 ; row + 1 < nRows ; row++ ) {
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

    else {

        // It considers "numbers in red" and "numbers in pink"

        cout << "Local maxima: " << endl;
        for (int line = 0 ; line < nLines ; line ++ ) {
            cout << "line " << line << endl;
            for (int row = 0 ; row < nRows ; row ++ ) {
                cout << "row " << row << endl;
                if (line == 0 && row == 0) {
                    if (a[line][row] > a[line+1][row] && a[line][row] > a[line+1][row+1] && a[line][row] > a[line][row+1]) {
                        cout << "Number " << a[line][row] << " is in " << line << " line and " << row << " row of matrix" << endl;
                }

                else if (line == 0 && row == nRows - 1) {
                    if (a[line][row] > a[line][row-1] && a[line][row] > a[line+1][row-1] && a[line][row] > a[line+1][row]) {
                        cout << "Number " << a[line][row] << " is in " << line << " line and " << row << " row of matrix" << endl;
                    }
                }

                else if (line == nLines - 1 && row == 0) {
                    if (a[line][row] > a[line-1][row] && a[line][row] > a[line-1][row+1] && a[line][row] > a[line][row+1]) {
                        cout << "Number " << a[line][row] << " is in " << line << " line and " << row << " row of matrix" << endl;
                    }
                }

                else if (line == nLines - 1 && row == nRows - 1) {
                    if (a[line][row] > a[line-1][row-1] && a[line][row] > a[line-1][row] && a[line][row] > a[line][row-1]) {
                        cout << "Number " << a[line][row] << " is in " << line << " line and " << row << " row of matrix" << endl;
                    }
                }

                else if (line == 0) {
                    if (a[line][row] > a[line][row-1] && a[line][row] > a[line][row+1] && a[line][row] > a[line+1][row] && 
                        a[line][row] > a[line+1][row-1] && a[line][row] > a[line+1][row+1]) {
                        cout << "Number " << a[line][row] << " is in " << line << " line and " << row << " row of matrix" << endl;
                    }
                }

                else if (row == 0) {
                    if (a[line][row] > a[line+1][row] && a[line][row] > a[line-1][row] && a[line][row] > a[line][row+1] && 
                        a[line][row] > a[line-1][row+1] && a[line][row] > a[line+1][row+1]) {
                        cout << "Number " << a[line][row] << " is in " << line << " line and " << row << " row of matrix" << endl;
                    }
                }

                else if (line == nLines - 1) {
                    if (a[line][row] > a[line][row+1] && a[line][row] > a[line][row-1] && a[line][row] > a[line-1][row] && 
                        a[line][row] > a[line-1][row+1] && a[line][row] > a[line-1][row-1]) {
                        cout << "Number " << a[line][row] << " is in " << line << " line and " << row << " row of matrix" << endl;
                    }
                }

                else if (row == nRows - 1) {
                    if (a[line][row] > a[line-1][row] && a[line][row] > a[line+1][row] && a[line][row] > a[line][row-1] && 
                        a[line][row] > a[line+1][row-1] && a[line][row] > a[line-1][row-1]) {
                        cout << "Number " << a[line][row] << " is in " << line << " line and " << row << " row of matrix" << endl;
                    }
                }
            
                else if (a[line][row] > a[line+1][row] && a[line][row] > a[line-1][row] && a[line][row] > a[line][row+1] && a[line][row] > a[line][row-1] &&
                         a[line][row] > a[line+1][row+1] && a[line][row] > a[line+1][row-1] && a[line][row] > a[line-1][row+1] && a[line][row] > a[line-1][row-1] ) {
                        cout << "Number " << a[line][row] << " is in " << line << " line and " << row << " row of matrix" << endl;
                }

                else {
                    continue;
                }
            }
        }
        }
    }
}

int main () 
{       
    vector<vector<int>> teste = {{7, 3, 4, 1, 3}, 
                        {2, 9, 6, 2, 1}, 
                        {1, 3, 5, 1, 4}, 
                        {6, 5, 2, 7, 5}, 
                        {4, 2, 1, 3, 6}};

    localMax_usingVector(teste, 5, 5, 'Y');

    return 0;   
}