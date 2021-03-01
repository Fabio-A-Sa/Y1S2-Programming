// Created on March 1, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 3, pages 18 -> ?

#include <iostream>
#include <ios>
#include <limits>
using namespace std;

// More switch statements with numbers. We can combine cases.
int combine_cases ()
{
    int month, year, numDays;
    cout << "Please enter a month (respective integer number): ";
    cin >> month;
    cout << "Please enter a year (respective integer number): ";
    cin >> year;

    switch (month) {
        case 1: case 3: case 5:  case 7: case 8: case 10: case 12: 
            numDays = 31;
            break;
        case 4: case 6: case 9: case 11:
            numDays = 30;
            break;
        case 2:
            if ( year%4 == 0 ) {
                numDays = 29;
            }
            else {
                numDays = 28;
            }
            break;
    }
    cout << "This month has " << numDays << " days.";
    return 0; 
}

// While statement
int while_statement ()
{   
    int number = -1;
    while ( number < 0 ) {
        cout << "Enter a positive number: ";
        cin >> number;
        if (number < 0) {
            cout << "Input error" << endl;
        }
    }
    cout << "Your positive number is " << number << endl;
    return 0;
}

// Do.. while statement:
int do_while_statement ()
{   
    int number, sum = 0;
    do  {
        cout << "Enter a positive number: ";
        cin >> number;
        if (number <= 0) {
            continue;
        }
        else {
            sum = sum + number;
        }
        } while ( number > 0 );
    cout << "Your sum is " << sum << endl;
    return 0;
}

// For statement:
int for_statement () 
{
    int value;
    cout << "Enter a integer number in range (0, 10): ";
    cin >> value;
    for (int i = 0; i <= value; i++) {
        cout << "Number: " << i << endl;
    }
    return 0;
}

// Invalids outputs
int main () 
{
    int number;
    cout << "Please enter a integer number: ";
    cin >> number;
    if ( !cin.fail() )  {
        cout << "Number * 2 = " << number*2 << endl;
    }
    else {
        cin.clear();                                            // Limpa a flag de erro
        cin.ignore(100000, '\n');                               // Limpa caracteres do buffer
        cin.ignore(numeric_limits<streamsize>::max(),'\n');     // Limpa caracteres do buffer outra opção, com #include <ios> e # include <limits>
        cout << "Input error" << endl;
    }
    return 0;
}
