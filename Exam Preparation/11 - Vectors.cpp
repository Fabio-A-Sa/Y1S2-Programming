// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 89 of Lectures Material

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

void fill(vector<int> &v) {
    for (int i = 0 ; i < v.size() ; i++ ) {
        v[i] = rand() % 100;
    }
} 

int main ()
{   
    // Initialization
    vector<int> example(10); // Initialize with 10 zeros
    for (auto number: example) {
        cout << number << " ";
    }
    cout << endl;

    // Cout numbers
    srand(time(NULL));
    vector<int> numbers(10);
    fill(numbers);
    for (size_t i = 0 ; i < numbers.size() ; i++ ) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // 2D vector initialization
    vector<vector<int>> more_numbers(4, vector<int>(3)); // 4 lines and 3 columns
    more_numbers.at(3).at(2) = 3289736;
    more_numbers[1][2] = 6541;
    for (auto v: more_numbers) {
        for (auto n : v) {
            cout << n << " " ;
        }
        cout << endl;
    }
    
    return 0;
}