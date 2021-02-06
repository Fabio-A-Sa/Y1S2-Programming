// Exercices from course https://www.youtube.com/watch?v=_bYFu9mBnr4

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <fstream>
using namespace std;

void swap(int a , int b)
{
    int temporario;
    temporario = b;
    b = a;
    a = temporario;
    cout << "Value a: " << a << " and value b: " << b << "." << endl;
}

int main()
{
    int a, b;
    cout << "Input two numbers" << endl;
    cout << "Value a: ";
    cin >> a;
    cout << "Value b: ";
    cin >> b;
    swap(a, b); 
    return 0;
}