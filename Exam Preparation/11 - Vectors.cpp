// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 89 of Lectures Material

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int main ()
{
    vector<int> example(10); // Initialize with 10 zeros
    for (auto number: example) {
        cout << number << " ";
    }
    cout << endl;

    srand(time(NULL));
    vector<int> numbers;
    while (numbers.size() != 10) {
        numbers.push_back(rand() % 100);
    }
    for (size_t i = 0 ; i < numbers.size() ; i++ ) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}