// Created on March 18, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 8, pages 70 --> ??

#include <iostream>
#include <array>
using namespace std;

void arrays () 
{
    const int size_of_array = 10;
    int numbers[size_of_array];

    for (int index = 0 ; index < (sizeof(numbers) / sizeof(numbers[0])) ; index ++) {
        numbers[index] = index + 1;
    }

    for (int number: numbers) {
        cout << "Number: " << number << endl;
    }
    return 0;
}
