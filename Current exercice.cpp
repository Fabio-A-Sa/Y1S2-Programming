// Exercices from course https://www.youtube.com/watch?v=_bYFu9mBnr4

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void converter_2 (int number, int base)
{
    switch (base) // with switch statement (available only in integer cases)
    {
    case 1:
        cout << "Number " << number << " is " << dec << number << " in decimal." << endl;
        break;
    case 2:
        cout << "Number " << number << " is " << oct << number << " in octal" << endl;
        break;
    case 3:
        cout << "Number " << number << " is " << hex << number << " in hexadecimal." << endl;
        break;

    default:
        cout << "Your choice is not valid! Try again!" << endl;
        break; }
}

void converter_1 (int number, int base) // with if-else statements (available in all cases)
{
    if (base == 1){
        cout << "Number " << number << " is " << dec << number << " in decimal." << endl; }

    else if (base == 2) {
        cout << "Number " << number << " is " << oct << number << " in octal" << endl; }

    else if (base == 3) {
        cout << "Number " << number << " is " << hex << number << " in hexadecimal." << endl; }

    else {
        cout << "Your choice is not valid! Try again!" << endl; }
}

int main()
{
    int number, base;
    cout << "Welcome to the numerical base converter! Input a decimal number: " << endl;
    cin >> number;
    cout << "Which base do you like to convert?\n1 --> Decimal\n2 --> Octal\n3 --> Hexadecimal" << endl;
    cin >> base;
    converter_2 (number, base);
}
