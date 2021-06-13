// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 77 of Lectures Material

#include <iostream>
#include <array>
using namespace std;

void using_const (const int a[]) {
    int size = 13;
    for (int i = 0 ; i < size ; i++ ) {
        cout << a[i] << " " ;
    }
    cout << endl;
}

void without_const (int a[]) {
    int size = 13;
    for (int i = 0 ; i < size ; i++ ) {
        cout << a[i] << " " ;
    }
    cout << endl;
}


int main ()
{
    const int number_of_numbers = 10; // Is good practice
    int numbers[number_of_numbers];

    int another[] = {4234, 341, 546, 123, 365}; // Size not needed
    int zeros[100] = {0}; // All numbers equal to zero
    int some_zeros[5] = {1, 2, 3}; // 4 and 5 elements equal to zero
    int score[3][2] = {{1, 2}, {3, 4}, {5, 6}}; // 2D array
    int many[][2] = {{1, 2}, {3, 4}, {5, 6}}; // 2D array --> Not a error!

    numbers[1] = 0;
    numbers[8] = 65165;
    for (auto number : numbers) {
        cout << number << endl;
    }

    cout << "Length of array: " << sizeof(numbers) / sizeof(numbers[0]) << endl;
    cout << "Out of range but not a error message: " << numbers[23] << endl;
    cout << numbers << endl; // Show a memory adress of 1st element of numbers array
    cout << &numbers[0] << endl; // Show a memory adress of 1st element of numbers array

    int example[] = {45, 5, 654, 654, 6, 54, 21, 3, 0, 879, -84, 95, 5};

    without_const(example);
    using_const(example);
    
    return 0;
}