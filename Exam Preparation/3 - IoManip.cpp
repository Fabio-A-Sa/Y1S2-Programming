// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 16 of Lectures Material

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main ()
{   
    int number1, number2;
    cout << "Two numbers: ";
    cin >> number1 >> number2;
    cout << fixed << setprecision(10) << (double) number1 / number2 << endl;
    cout << setprecision(10) << (double) number1 / number2 << endl;

    string name1, name2;
    cout << "Two names: ";
    cin >> name1 >> name2;
    cout << fixed << setprecision(10) << name1 << name2 << endl;
    return 0;
}