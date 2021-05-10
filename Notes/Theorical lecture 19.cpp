// Created on May 10, 2021
// @author: Fábio Araújoe Sá
// Theorical lecture 19, pages 251 --> ???

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void using_iterator() {

    vector<int>::reverse_iterator p; // --> or using "auto" in for loop
    vector<int> numbers;

    // Input random numbers in vector
    for (int i = 0 ; i < 100 ; i+= rand() % 20) {
        numbers.push_back(i); 
    }
    // Iterator in reverse order
    for (p numbers.rbegin() ; p != numbers.rend() ; p++ ) {
        cout << "Number: " << *p << endl;
    }

}

void sort_algorithm() {

    // Fill vector
    vector<int> numbers;
    while (numbers.size() < 20) {
        numbers.push_back(rand() % 100);
    }
    cout << "\nNot sorted: ";
    for (int number : numbers) {
        cout << number << " ";
    }
    // Sort by ascending order
    sort(numbers.begin(), numbers.end());
    cout << "\nSorted: ";
    for (int number : numbers) {
        cout << number << " ";
    }
}

int main ()
{
    using_iterator();
    sort_algorithm();
    return 0;
}