// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 8 of Lectures Material

#include <iostream>
using namespace std;

int main ()
{
    // Some types of numbers in C++ notation:
    int number1 = 11;
    float number2 = 10.3;
    int number3 = 0x58;
    int number4 = 054;
    int number5 = 75U;
    int number6 = 89L;
    int number7 = 8214234LL;
    double number8 = 2e-1;
    int number9 = 5.3E3;
    cout << "This is an integer number: " << number1 << endl;
    cout << "This is a double/float number: " << number2 << endl;
    cout << "This is a hexadecimal number: " << number3 << endl;
    cout << "This is an octal number: " << number4 << endl;
    cout << "This is an unsigned number: " << number5 << endl;
    cout << "This is a long number: " << number6 << endl;
    cout << "This is a long long int number: " << number7 << endl;
    cout << "This is a real number: " << number8 << endl;
    cout << "This is another real number: " << number9 << endl;

    // Some transformations:
    char letter = 'F';
    char number = 100;
    cout << "Letter " << letter << " to decimal number: " << (int) letter << endl;
    cout << "Number " << number << " to letter: " << (char) number << endl;
    
    return 0;
}