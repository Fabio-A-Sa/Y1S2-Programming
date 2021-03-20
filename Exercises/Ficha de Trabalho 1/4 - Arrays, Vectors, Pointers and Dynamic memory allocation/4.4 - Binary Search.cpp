// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int binarySearch(const vector<int> &v, int value) {
    
    





}

int main ()
{   
    vector<int> numbers;
    srand(time(NULL));

    // Input numbers
    for (int number = -5 ; number < 100 ; number = rand() % 6 + number + 1) {
        numbers.push_back(number);
    }
    // example = {-5, -1, 3, 8, 9, 10, 12, 18, 24, 26, 29, 33, 37, 39, 40, 42, 48, 52, 58, 63, 68, 73, 74, 78, 80, 84, 88, 91, 93, 96}

    return 0;
}