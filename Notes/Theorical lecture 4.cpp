// Created on March 4, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 4, pages 22 --> ?

#include <iostream>
#include <cmath>
#include <iomanip>
#include <climits>
using namespace std;


int digits_manipulation ()
{
    int dd, mm, yyyy;
    char sep1, sep2;

    cout << "Date (dd:mm:yyyy): ";
    cin >> dd >> sep1 >> mm >> sep2 >> yyyy;

    cout << "Date: " << setw(2) << dd << sep1 << setw(2) << mm << sep2 << setw(4) << yyyy << endl;

    return 0;
}

int main () 
{
    return 0;
}