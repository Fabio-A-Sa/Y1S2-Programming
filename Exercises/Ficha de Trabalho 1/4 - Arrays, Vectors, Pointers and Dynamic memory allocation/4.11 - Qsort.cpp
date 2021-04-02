// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <array>
#include <cstdlib>
using namespace std;

int comparator_a (const void* a, const void* b) {

    return (*(int*)a - *(int*)b);
}

int comparator_d (const void* a, const void* b) {

    return (*(int*)b - *(int*)a);
}


int main ()
{   
    int example[10];
    int counter = 0;
    int input;
    while (counter != 10) {
        cout << "Number " << counter + 1 << ": ";
        cin >> input;
        example[counter] = input;
        counter++;
    }

    char answer;
    cout << "Ascending, descending or half-half order? a/d/h: ";
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
            int aux1[5];
            for (int i = 5 ; i < 10 ; i++) {
                aux1[i-5] = example[i];
            }
            qsort (aux1, 5, sizeof(int), comparator_d) ;
            for (int i = 5 ; i < 10 ; i++ ) {
                example[i] = aux1[i-5];
            }
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
