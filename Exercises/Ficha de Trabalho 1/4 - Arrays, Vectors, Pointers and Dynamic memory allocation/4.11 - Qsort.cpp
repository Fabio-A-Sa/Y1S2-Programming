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

    char answer;
    cout << "Ascending, descending or order? a/d/h: ";
    cin >> answer;

    switch (answer) {
    case 'a':
        qsort (example, 10, sizeof(int), comparator_a) ;
        break;
    case 'd':
        qsort (example, 10, sizeof(int), comparator_d) ;
        break;
    case 'h':
        qsort (example, 10, sizeof(int), comparator_a) ;
        break;

    default:
        cout << "Invalid input!" << endl;
        exit(0);
    }

    cout << "Sorted: ";
    for (int number : example) {
        cout << number << " ";
    }
    cout << endl;

    return 0;
}
