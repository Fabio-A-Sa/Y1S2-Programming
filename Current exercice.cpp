// Exercices from course https://www.youtube.com/watch?v=_bYFu9mBnr4

#include <iostream>
#include <string>
using namespace std;

void converter (int number, int base)
{
    if (base == 1){
        cout << "Number " << number << " is " << dec << number << " in decimal." << endl; }

    if (base == 2) {
        cout << "Number " << number << " is " << oct << number << " in octal" << endl; }

    if (base == 3) {
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
    converter (number, base);
}
