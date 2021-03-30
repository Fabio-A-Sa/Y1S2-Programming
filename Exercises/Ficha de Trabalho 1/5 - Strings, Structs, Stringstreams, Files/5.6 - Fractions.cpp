// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct Fraction {
    int numerator;
    int denominator;
};

bool readFraction(Fraction &fraction) {

    bool flag = true;
    // Some code
    return flag;
}

int main () 
{   
    Fraction input;
    char option;
    string answer;

    do  {
        cout << "Enter a fraction type a/b with integer numbers: ";
        cin >> input.numerator >> option >> input.numerator;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
        }
        } while (cin.fail() && option != '/');

    return 0;
}