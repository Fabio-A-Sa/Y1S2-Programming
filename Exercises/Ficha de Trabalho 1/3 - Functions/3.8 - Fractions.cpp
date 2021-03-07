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

void reduceFraction(int &numerator, int &denominator) {

    
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

int main()
{
    int a, b;
    char op;
    string answer;

    cout << "Enter a fraction a/b with integer numbers: ";
    cin >> a >> op >> b;
    answer = readFraction(a, op, b) ? "Valid function" : "Invalid function";
    cout << answer << endl;
    return 0;
}