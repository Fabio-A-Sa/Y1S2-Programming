// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
using namespace std;

void palindrome_a ()
{
    int number;
    string comparation;

    cout << "Enter a number with 3 digits: ";
    cin >> number;
    comparation = to_string(number);

    if ( comparation[0] == comparation[2] ) {
        cout << "Number " << number << " is a palindrome!";
    }
    else {
        cout << "Number " << number << " is not a palindrome!";
    }
}

void palindrome_total_b ()
{
    int number, last_digit, aux, comparation = 0;

    cout << "Enter a integer number: ";
    cin >> number;
    aux = number;
    
    while (aux > 0) {
        last_digit = aux % 10;
        comparation = comparation*10 + last_digit;
        aux = aux / 10;
    }

    if ( number == comparation ) {
        cout << "Number " << number << " is a palindrome!";
    }
    else {
        cout << "Number " << number << " is not a palindrome!";
    }
}

int main ()
{
    palindrome_a ();
    palindrome_total_b ();
    return 0;
}