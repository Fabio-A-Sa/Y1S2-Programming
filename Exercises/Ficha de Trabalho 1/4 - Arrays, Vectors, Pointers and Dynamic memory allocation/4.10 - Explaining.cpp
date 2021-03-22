// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <array>
using namespace std;

void fragment () {

    int values[] = { 2, 3, 5, 7, 11, 13 };
    int *p = values+1;
    cout << values[1] << endl;
    cout << values+1 << endl;
    cout << *p << endl;
    cout << *(values+3) << endl;
    cout << p+1 << endl;
    cout << p[1] << endl;
    cout << p-values << endl;
}

int main ()
{
    fragment();
    return 0;
}