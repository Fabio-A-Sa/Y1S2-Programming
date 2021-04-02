// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <array>
#include <cstdlib>
using namespace std;

int comparator (const void* a, const void* b) {

    return (*(int*)a - *(int*)b);
}

int main ()
{   
    int example[10] = {9, 8, 5, 2, 7, 3, 1, 4, 0, -8} ;

    cout << "Ascending or descending order? a/d: "
    qsort (example, 10, sizeof(int), comparator) ;

    cout << "Sorted: ";
    for (int number : example) {
        cout << number << " ";
    }
    cout << endl;

    return 0;
}
