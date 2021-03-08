// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool readFraction(int &numerator, char option, int &denominator) {

    bool flag = true;
    flag = flag && (option == '/' && denominator != 0);
    return flag;
}

int greatest_common_divisor (int a, int b) {

    if (a == b && a != 0 ) {
        return a;
    }
    else if ( a*b == 0 ) {
        int answer = a == 0 ? b : a;
        return answer;
    }
    else {
        while ( a != b ) {
            if ( a > b ) {
                a = a - b;
            }
            else if ( b > a ) {
                b = b - a;
            }
            else {
                return a;
            }
        }
    }
}

void reduceFraction(int &numerator, int &denominator) {

    int gcd;
    gcd = greatest_common_divisor(numerator, denominator);
    numerator = numerator / gcd;
    denominator = denominator / gcd;
}

int main ()
{
    int a, b;
    string answer, key;
    char op;

    do  {

        cout << "Enter a statement with a operator b with integer numbers: ";
        cin >> a >> op >> b;
        
        if (!cin.fail()) {

            switch (op) {

                case '+':
                    cout << a << " " << op << " " << b << " = " << a+b << endl;
                    break;

                case '-':
                    cout << a << " " << op << " " << b << " = " << a-b << endl;
                    break;

                case 'x': case '*':
                    cout << a << " " << op << " " << b << " = " << a*b << endl;
                    break;          
                
                default:

                    answer = readFraction(a, op, b) ? "Valid function" : "Invalid function";
                    cout << answer << endl;
                    if (readFraction(a, op, b)) {
                        cout << a << op << b << " = ";
                        reduceFraction(a, b);
                        if (b == 1) {
                            cout << a << endl;
                        }
                        else {
                            cout << a << op << b << endl;
                        }
                    }
                    break;
                
                }
        }
        else {
            cin.clear();
            cin.ignore('\n', 10000);
            cout << "Invalid input. Please try again!" << endl;
        }

        cout << "More? Y/N ";
        cin >> key;

        } while (key != "N");

    return 0;
}