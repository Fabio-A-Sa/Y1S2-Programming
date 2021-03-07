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