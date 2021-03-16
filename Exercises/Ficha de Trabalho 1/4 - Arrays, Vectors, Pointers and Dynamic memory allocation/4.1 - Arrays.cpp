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

int main () 
{
    int numbers[15] = {89, 56, 54, 1, 0, 89, 50, 58, 6, 8, 27, 158, 4, 33, 11} ;
    readArray(numbers, 4);
    cout << findValueInArray(numbers, 15, 11, 3, 8) << endl;
    return 0;
}