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

int findValueInArray(const  int  a[], size_t nElem, int value, size_t pos1, size_t pos2) {

    int answer = -1;
    for (int index = pos1 ; index < pos2; index ++ ) {
        if (a[index] == value) {
            answer = index;
            break;
        }
    }
    return answer;
}

size_t findMultValuesInArray(const int a[], size_t nElem, int value, size_t pos1, size_t pos2, size_t index[]) {

    size_t pointer = 0;
    for (int i = pos1 ; i < pos2 ; i++ ) {
        if (a[i] == value) {
            index[pointer] = i;
            pointer ++;
        }
    }
    return pointer;
}

int main () 
{
    const int size_of_array = 15;
    int numbers[size_of_array] = {89, 56, 54, 1, 0, 89, 50, 58, 6, 8, 27, 158, 89, 33, 11} ;
    size_t index[size_of_array];

    readArray(numbers, 4);
    cout << findValueInArray(numbers, 15, 11, 3, 8) << endl;
    cout << findMultValuesInArray(numbers, 15, 89, 1, 13, index) << endl;
    return 0;
}