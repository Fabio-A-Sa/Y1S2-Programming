// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <array>
using namespace std;

void readArray(int a[], size_t nElem) {

    for (int index = 0 ; index < nElem ; index++ ) {
        cout << index << ": " << a[index] << endl;
    }

}

int main () 
{
    int numbers[7] = {89, 56, 54, 1, 0, 89, 56} ;
    readArray(numbers, 4);
    return 0;
}