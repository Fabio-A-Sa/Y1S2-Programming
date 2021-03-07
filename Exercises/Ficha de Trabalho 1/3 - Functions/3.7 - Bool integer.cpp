// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

bool readInt(string x)
{
    bool flag = true;
    for (char c : x) {
        flag = flag && ( c == '0' || c == '1' ||c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' );
    }
    return flag;
}

int main () {

    string input, answer;
    cout << "Enter a integer number: ";
    getline(cin, input);
    answer = readInt(input) ? "True" : "False";
    cout << answer << endl;
    return 0;
}