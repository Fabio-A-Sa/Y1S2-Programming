// Created on May 06, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 18, pages 220 --> 251

#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <class T>
void swapvalues (T x, T y) {

    cout << "Before: x = " << x << " and y = " << y << endl;
    T temp = x;
    x = y;
    y = temp;
    cout << "After: x = " << x << " and y = " << y << endl;
}

void using_iterators() {

    vector<int> numbers = {5, 51, 51, 6, 51, 65, 53, 8, 52, 51, 96, 14, 541};
    vector<int>::iterator p;
    for (p = numbers.begin() ; p != numbers.end() ; p++ ) {
        cout << *p << endl;
    }
}

int main ()
{
    swapvalues("Hello", "World");  // Strings
    swapvalues(56165, 651651);     // Integers
    swapvalues('F', 'A');          // Chars

    using_iterators();

    return 0;
}