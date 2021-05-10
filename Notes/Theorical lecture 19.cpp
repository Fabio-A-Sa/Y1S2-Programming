// Created on May 10, 2021
// @author: Fábio Araújoe Sá
// Theorical lecture 19, pages 251 --> ???

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>
using namespace std;

void using_iterator() {

    vector<int>::reverse_iterator p; // --> or using "auto" in for loop
    vector<int> numbers;

    // Input random numbers in vector
    for (int i = 0 ; i < 100 ; i+= rand() % 20) {
        numbers.push_back(i); 
    }
    // Iterator in reverse order
    for (p = numbers.rbegin() ; p != numbers.rend() ; p++ ) {
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

void using_map() {

    map<int, string> phone_user;
    phone_user.insert(pair<int, string> (1234, "Pedro"));
    phone_user.insert(pair<int, string> (5678, "Fabio"));
    phone_user.insert(pair<int, string> (9101, "Ines"));
}

int main ()
{
    using_iterator();
    sort_algorithm();
    using_map();
    return 0;
}