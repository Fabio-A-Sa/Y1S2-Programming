// Created on March 15, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 7, pages 52 --> ??

#include <iostream>
#include <cmath>
using namespace std;

// Function that generate a random number between min-number and max-number
int random_numbers (int min, int max) {
    int number = min + rand();
    return number;
}
int main ()
{   
    cout << random_numbers(5, 10) << endl;
    return 0;
}