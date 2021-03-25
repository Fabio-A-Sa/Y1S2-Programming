// Created on March 25, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 8, pages 102 --> ??

#include <iostream>
#include <vector>
#include <array>
using namespace std;

void showArray (const int *a , int size) {

    for (int i = 0 ; i < size ; i++ ) {
        cout << "a[" << i << "] = " << *(a+i) << endl;
    }
}
int main ()
{
    int example[] = {9, 10, 56, 8, 4} ;
    showArray(example, 5);
    return 0;
}