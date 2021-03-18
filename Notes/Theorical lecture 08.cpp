// Created on March 18, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 8, pages 70 --> 81 

#include <iostream>
#include <array>
using namespace std;

void arrays ()  {

    const int size_of_array = 10;
    int numbers[size_of_array];

    // Write numbers in array, number = index + 10
    for (int index = 0 ; index < (sizeof(numbers) / sizeof(numbers[0])) ; index ++) {
        numbers[index] = index + 10;
    }

    // Show values
    for (int number: numbers) {
        cout << "Number: " << number << endl;
    }

    // Show memory address
    for (int index ; index < size_of_array ; index ++ ) {
        cout << "Address of number " << numbers[index] << " is " << &numbers[index] << endl;
    }
}

void multidimensional_arrays () {

    const int size_of_array = 3;
    // Matrix 3*3
    int numbers[size_of_array][size_of_array];

    // Input numbers to matrix
    for (int main = 0; main < size_of_array ; main ++ ) {
        for (int index = 0; index < size_of_array ; index ++ ) {
            numbers[main][index] = index + 20;
            cout << "Number " << main << "x" << index << " is " << numbers[main][index] << endl;
        }
    }
}

int main ()
{  
    arrays () ;
    multidimensional_arrays () ;
    return 0;
}