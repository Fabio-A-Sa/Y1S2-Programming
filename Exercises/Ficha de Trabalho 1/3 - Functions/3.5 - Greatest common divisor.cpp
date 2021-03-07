// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

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

int main ()
{   
    int input1, input2;
    cout << "Enter a number: ";
    cin >> input1;
    cout << "Enter another number: ";
    cin >> input2;

    int answer = greatest_common_divisor(input1, input2);
    cout << "The greatest common divisor of numbers " << input1 << " and " << input2 << " is " << answer << endl;
    return 0;
}