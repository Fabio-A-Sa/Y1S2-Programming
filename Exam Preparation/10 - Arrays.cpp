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

    int another[] = {4234, 341, 546, 123, 365}; // Size not needed
    int zeros[100] = {0}; // All numbers equal to zero
    int some_zeros[5] = {1, 2, 3}; // 4 and 5 elements equal to zero

    numbers[1] = 0;
    numbers[8] = 65165;
    for (auto number : numbers) {
        cout << number << endl;
    }

    cout << "Length of array: " << sizeof(numbers) / sizeof(numbers[0]) << endl;
    cout << "Out of range but not a error message: " << numbers[23] << endl;
    cout << numbers << endl; // Show a memory adress of 1st element of number

    return 0;
}