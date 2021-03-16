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
    int numbers[size_of_array];
    size_t index[size_of_array];
    int pointer = 0, next_number = 0;

    // Input numbers
    while (pointer != size_of_array) {
        cout << "Enter a number: ";
        cin >> next_number;
        numbers[pointer] = next_number;
        pointer ++;
    }

    // Read numbers, a)
    do  {
        cout << "How many numbers you would like to read? Integer number: ";
        cin >> next_number;
        if (next_number >= size_of_array) {
            cout << "Input error. Please try again with integer number less than 15" << endl;
        }
        } while (next_number >= size_of_array);
    cout << "Value of " << next_number << "th number is ";
    readArray(numbers, 4);

    // Search value, b)
    int max_index, min_index;
    do  {
        cout << "Min and max index to search (integer numbers between 0 and 15): ";
        cin >> min_index >> max_index;
        cout << "Which value would you like to search?";
        cin >> 
        } while (min_index < 0 || max_index < 0 || max_index < min_index);
    cout << findValueInArray(numbers, 15, 11, 3, 8) << endl;



    cout << findMultValuesInArray(numbers, 15, 89, 1, 13, index) << endl;
    return 0;
}