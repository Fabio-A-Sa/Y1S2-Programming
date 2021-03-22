// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <array>
using namespace std;

void fragment () {

    int values[] = { 2, 3, 5, 7, 11, 13 };
    int *p = values+1;
    cout << values[1] << endl;          // 3
    cout << values+1 << endl;           // memory adress
    cout << *p << endl;                 // pointer == 3
    cout << *(values+3) << endl;        // values[4] == 7
    cout << p+1 << endl;                // memory adress + 4 bits
    cout << p[1] << endl;               // 5
    cout << p-values << endl;           // 5 - 4 == 1
}

int main ()
{
    fragment();
    return 0;
}