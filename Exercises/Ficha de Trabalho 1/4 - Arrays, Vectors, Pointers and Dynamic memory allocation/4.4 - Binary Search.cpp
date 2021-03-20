// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int binarySearch(const vector<int> &v, int value) {
    
    int first = 0;
    int last = v.size() - 1;
    bool found = false;

    while ( !found && first < last ) {

        int middle = (first + last) / 2;

        if (v[middle] == value) {
            found = found || true;
        }
        else if (value < v[middle]) {
            last = middle - 1;
        }
        else {
            first = middle + 1;
        }
    }

    if (found) 
        return first;
    return -1;
}

int main ()
{   
    vector<int> numbers;
    srand(time(NULL));

    // Input numbers and print them
    cout << "Numbers: ";
    for (int number = 0 ; number < 100 ; number = rand() % 6 + number + 1) {
        cout << number << " ";
        numbers.push_back(number);
    }


    int input;
    do  {
            cout << "Input a positive integer number: ";
            cin >> input;
        } while (cin.fail() || input < 0);

    return 0;
}