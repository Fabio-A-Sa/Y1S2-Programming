// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <array>
#include <cstdlib>
using namespace std;

int comparator (const void* a, const void* b) {

    if (a == b)
        return 0;
    else if (a < b) 
        return 1;
    else
        return -1 ;
}

void qsort (void *base, size_t num, size_t size, int (*comparator)(const void*, const void*)) {

    // Incomplete

}

int main ()
{   
    int example[10] = {9, 8, 5, 2, 7, 3, 1, 4, 0, -8} ;
    int *base;
    *base = example[0];
    size_t num = 10;
    size_t size = sizeof(example[0]);

    qsort (*base, num, size, (*comparator)(void*, void*)) ;

    // Show sorted data
    cout << "Sorted: ";
    for (int number : example) {
        cout << number << " ";
    }
    cout << endl;

    return 0;
}
