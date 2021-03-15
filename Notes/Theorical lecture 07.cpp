// Created on March 15, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 7, pages 52 --> ??

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

// Function that generates a random number between min-number and max-number
int random_numbers (int min, int max) {
    int number = min + rand() % (max - min + 1);
    return number;
}

int main ()
{   
    srand(time(NULL));
    cout << random_numbers(5, 10) << endl;
    return 0;
}