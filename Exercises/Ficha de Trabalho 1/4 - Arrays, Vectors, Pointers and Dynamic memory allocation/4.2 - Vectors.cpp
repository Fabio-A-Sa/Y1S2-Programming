// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
using namespace std;

void readArray(vector<int> &v, size_t nElem) {

    for (int index = 0 ; index < nElem ; index++ ) {
        cout << index << ": " << v[index] << endl;
    }

}

int findValueInArray(vector<int> &v, size_t nElem, int value, size_t pos1, size_t pos2) {

    int answer = -1, loop = 0;
    for (int index = pos1 ; index < pos2; index ++ ) {

        loop ++;
        if (v[index] == value) {
            answer = index;
            break;
        }
        if (loop == nElem) {
            break;
        }
    }
    return answer;
}

size_t findMultValuesInArray(vector<int> &v, size_t nElem, int value, size_t pos1, size_t pos2, vector<int> index) {

    size_t pointer = 0, loop = 0;
    for (int i = pos1 ; i < pos2 ; i++ ) {

        loop ++;
        if (v[i] == value) {
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
    int next_number;
    vector<int> numbers, index;

    while (!cin.eof()) {
        cout << "Enter a number (letter for skip): ";
        cin >> next_number;
        numbers.push_back(next_number);
    }
    cin.clear();
    cin.ignore("\n", 1000);
    int size_of_vector = numbers.size();

    // Read numbers
    do  {
        cout << "How many numbers would you like to read? Integer number: ";
        cin >> next_number;
        if (next_number >= size_of_vector) {
            cout << "Input error. Please try again with an integer number less than " << size_of_vector << endl;
        }
        } while (next_number >= size_of_vector);
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
        if (min_index < 0 || max_index < 0 || max_index <= min_index || limit > size_of_vector) {
            cout << "Input error. Please try again." << endl;
        }
        } while (min_index < 0 || max_index < 0 || max_index <= min_index || limit > size_of_vector);
    int answer = findValueInArray(numbers, limit, value, min_index, max_index);
    if (answer == -1) {
        cout << "Not found!" << endl;
    }
    else {
        cout << "Number " << value << " can be found in " << answer << "th position in array" << endl;
    }

    // Repeted numbers, e)
    cout << "Your number has found " << findMultValuesInArray(numbers, limit, value, min_index, max_index, index) << " times in array" << endl;
    return 0;
}