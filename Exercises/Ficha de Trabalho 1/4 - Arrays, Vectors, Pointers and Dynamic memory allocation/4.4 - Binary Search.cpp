// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int binarySearch(const vector<int> &v, int value) {
    
    int first = 0;
    int last = v.size();
    int middle;
    bool found = false;

    while ( !found && first <= last ) {

        middle = (first + last) / 2;

        if (v[middle] == value) {
            found = true;
        }
        else if (value < v[middle]) {
            last = middle - 1;
        }
        else {
            first = middle + 1;
        }
        
        if (found) {
            return middle;
            break;
        }
    }
    return -1;
}

int main ()
{   
    vector<int> numbers;
    srand(time(NULL));

    // Generate numbers
    cout << "Numbers: ";
    for (int number = 0 ; number < 100 ; number = rand() % 6 + number + 1) {
        cout << number << " ";
        numbers.push_back(number);
    }

    // Input a value to search
    int input;
    do  {
            cout << "\nEnter a positive integer number: ";
            cin >> input;
            if (cin.fail() || input < 0) {
                cout << "Invalid input. Please try again. " << endl;
            }
        } while (input < 0);

    // Search
    if (binarySearch(numbers, input) == -1) {
        cout << "Number " << input << " not in vector." << endl;
    }
    else {
        cout << "Index of number " << input << " is " << binarySearch(numbers, input) << endl;
    }
    return 0;
}