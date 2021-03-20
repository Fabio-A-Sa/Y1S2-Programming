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

    // Input numbers
    for (int number = 0 ; number < 100 ; number = rand() % 6 + number + 1) {
        numbers.push_back(number);
    }

    for () {
        
    }
    cout << "Numbers: "
    // example = {0, 3, 8, 9, 10, 12, 18, 24, 26, 29, 33, 37, 39, 40, 42, 48, 52, 58, 63, 68, 73, 74, 78, 80, 84, 88, 91, 93, 96}

    return 0;
}