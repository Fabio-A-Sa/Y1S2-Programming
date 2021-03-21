// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <array>
using namespace std;

// Global constant
const int NE = 5;

void localMax(const int a[][NE]) {
    
    cout << "Local maxima: " << endl;
    for (int line = 1 ; line < NE ; line++ ) {
        for (int row = 1 ; row < NE ; row++ ) {
            if (a[line][row] > a[line][row] && a[line][row] > a[line][row] && a[line][row] > a[line][row] && a[line][row] > a[line][row] &&
                a[line][row] > a[line][row] && a[line][row] > a[line][row] && a[line][row] > a[line][row] && a[line][row] > a[line][row]    ) {
                    cout << "Number " << a[line][row] << " in " << line << " line and " << row << " row of matrix" << endl;
                }
            else {
                continue;
            }
        }
    }
}

int main ()
{   
    int matrix[][NE] = {{7, 3, 4, 1, 3}, 
                        {2, 9, 6, 2, 1}, 
                        {1, 3, 5, 1, 4}, 
                        {6, 5, 2, 7, 5}, 
                        {4, 2, 1, 3, 6}};



    return 0;
}