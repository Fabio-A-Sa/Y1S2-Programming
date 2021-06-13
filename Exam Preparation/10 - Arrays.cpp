// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 77 of Lectures Material

#include <iostream>
#include <array>
using namespace std;

int main ()
{
    const int number_of_numbers = 10; // Is good practice
    int numbers[number_of_numbers];

    numbers[1] = 0;
    numbers[8] = 65165;
    for (auto number : numbers) {
        cout << number << endl;
    }

    cout << "Length of array: " << sizeof(numbers) / sizeof(numbers[0]) << endl;
    cout << "Out of range but not a error message: " << numbers[23] << endl;

    return 0;
}