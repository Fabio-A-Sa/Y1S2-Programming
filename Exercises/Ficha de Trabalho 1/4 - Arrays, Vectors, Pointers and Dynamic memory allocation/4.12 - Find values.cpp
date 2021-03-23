// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <array>
using namespace std;

// Falta colocar correctamente os pointers --> Ver mais tarde!

void readArray(int *a[], size_t nElem) {

    for (int index = 0 ; index < nElem ; index++ ) {
        cout << index << ": " << *a[index] << endl;
    }

}

int findValueInArray(const int *a[], size_t nElem, int value, size_t pos1, size_t pos2) {

    int answer = -1, loop = 0;
    for (int index = pos1 ; index < pos2; index ++ ) {

        loop ++;
        if (a[index] == value) {
            answer = index;
            break;
        }
        if (loop == nElem) {
            break;
        }
    }
    return answer;
}

size_t findMultValuesInArray(const int a[], size_t nElem, int value, size_t pos1, size_t pos2, size_t *index[]) {

    size_t pointer = 0, loop = 0;
    for (int i = pos1 ; i < pos2 ; i++ ) {

        loop ++;
        if (a[i] == value) {
            index[pointer] = i;
            pointer ++;
        }
        if (loop == nElem) {
            break;
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

    // Read numbers
    do  {
        cout << "How many numbers would you like to read? Integer number: ";
        cin >> next_number;
        if (next_number >= size_of_array) {
            cout << "Input error. Please try again with an integer number less than 15" << endl;
        }
        } while (next_number >= size_of_array);
    readArray(numbers, next_number);

    // Search value
    int max_index, min_index, value, limit;
    do  {
        cout << "Min and max index to search (integer numbers between 0 and 15): ";
        cin >> min_index >> max_index;
        cout << "Which value would you like to search?";
        cin >> value;
        cout << "Max numbers to search: ";
        cin >> limit;
        if (min_index < 0 || max_index < 0 || max_index <= min_index || limit > size_of_array) {
            cout << "Input error. Please try again." << endl;
        }
        } while (min_index < 0 || max_index < 0 || max_index <= min_index || limit > size_of_array);
    int answer = findValueInArray(numbers, limit, value, min_index, max_index);
    if (answer == -1) {
        cout << "Not found!" << endl;
    }
    else {
        cout << "Number " << value << " can be found in " << answer << "th position in array" << endl;
    }

    // Repeted numbers
    cout << "Your number has found " << findMultValuesInArray(numbers, limit, value, min_index, max_index, index) << " times in array" << endl;
    return 0;
}