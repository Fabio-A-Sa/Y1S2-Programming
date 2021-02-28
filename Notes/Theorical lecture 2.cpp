// Created on February 25, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 2, pages 6 --> 17

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

// Switch - case statements
int switch_and_case ()
{
    int number, option, result;
    cout << "Integer number: ";
    cin >> number;
    cout << "Chose an option:\n1 -- > Add 5\n2 -- > Multiply by 5" << endl;
    cin >> option;
    switch (option) {
    case 1:
        result = number + 5;
        cout << "The result is " << result << endl;
        break;
    case 2:
        result = 5 * number;
        cout << "The result is " << result << endl;
        break;
    default:
        cout << "Option is not valid" << endl;
    }
    return 0;
}

// Precision of output with include <iomanip>
int result_with_precision ()
{
    int first, second, precision;
    double quotient;
    cout << "Enter two numbers: ";
    cin >> first >> second;
    cout << "Precision? ";
    cin >> precision;
    quotient = (double) first / second;
    cout << "The result with precision is " << fixed << setprecision(precision) << quotient << endl;
    return 0;
}

// Lecture summary
int calculator ()
{
    const unsigned int RESULT_PRECISION = 3;
    double operand1, operand2;
    char operation;
    double result;
    bool validOperation = false;

    cout << "x op y ? ";
    cin >> operand1 >> operation >> operand2;

    if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {

        validOperation = true;

        if (operation == '+')
            result = operand1 + operand2;
        else if (operation == '-')
            result = operand1 - operand2;
        else if (operation == '*')
            result = operand1 * operand2;
        else if (operation == '/')
            result = operand1 / operand2;

    }

    if (validOperation) {
        cout << operand1 << ' ' << operation << ' ' << operand2 << " = ";
        cout << fixed << setprecision(5) << result << endl;
    }
    else {
    cerr << "Invalid operation !" << endl;
    }
    return 0;
}