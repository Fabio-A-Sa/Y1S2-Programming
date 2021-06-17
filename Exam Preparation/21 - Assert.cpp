// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 89 of Lectures Material

#include <iostream>
#include <assert.h>
using namespace std;

int main ()
{
    int x;
    cout << "Input a value between 0 and 10: ";
    cin >> x;
    assert(x > 10 && x < 0);
    return 0;
}