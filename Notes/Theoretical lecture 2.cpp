// Created on February 25, 2021
// @author: Fábio Araújo de Sá
// Theoretical lecture 6->12

#include <iostream>
#include <iomanip>
using namespace std;

// Declaration and simple operations with integers and float numbers
int declarations_and_simple_operations ()
{
        int operand1, operand2, sum, difference, product;
        double quotient;

        cout << "operand1 operand2 ? ";
        cin >> operand1 >> operand2;
        sum = operand1 + operand2;
        difference = operand1 - operand2;
        product = operand1 * operand2;
        quotient = (double) operand1 / operand2;

        cout << "sum = " << sum << endl;
        cout << "difference = " << difference << endl;
        cout << "product = " << product << endl;
        cout << "quotient = " << quotient << endl;
        return 0;
}

// Literals ans constants
int literals_and_constants () 
{
    cout << "Integer and decimal number: " << 1032 << endl;
    cout << "Integer and octal number: " << 012 << endl;
    cout << "Integer and hexadecimal number: " << 0x54 << endl;
    cout << "Real number with exponent: " << 2E-2 << endl;
    cout << "Character: " << 'A' << endl;
    cout << "String: " << "A simple string" << endl;
    cout << "String with quotes: " << "A 'name' simple thing" << endl;
    return 0;
}

// Else and If statements
int if_and_else_statements ()
{
    int number;
    cout << "Integer number? ";
    cin >> number;

    if (number == 0) { 
        cout << "Zero";
    }
    else if (number < 0) {
        cout << "Negative number";
    }
    else {
        cout << "Positive number";
    }
    return 0;
}


