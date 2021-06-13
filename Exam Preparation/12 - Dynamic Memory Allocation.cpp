// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 106 of Lectures Material

#include <iostream>
#include <array>
#include <cstdlib> // For using malloc() and free() methods
using namespace std;

void using_C () {
    
    int n = 25, *p;
    p = (int *) malloc(n * sizeof(int));
    for (int i = 0 ; i < n ; i++ ) {
        *(p+i) = i;
    }
    for (int i = 0 ; i < n ; i++ ) {
        cout << *(p+i) << " ";
    }
    cout << endl;
    free(p);
}

void using_CPP () {

}

int main ()
{
    // Using C and C++ methods
    using_C();
    return 0;
}