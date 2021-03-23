// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <array>
using namespace std;

int comparator (const void* number1 , const void* number2) {

    return (*(int*)number1 - *(int*)number2);
}

int main ()
{
    int number;
    
    int example[] = {120, 2, 5, -9, 8, 52, -1, 0, 6} ;

    qsort (void* base, size_t num, size_t size, int (*comparator)(const void*,const void*))


    qsort(example);
    for (int number : example) {
        cout << number << " ";
    }
    return 0;
}