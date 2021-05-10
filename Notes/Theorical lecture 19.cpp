// Created on May 10, 2021
// @author: Fábio Araújoe Sá
// Theorical lecture 19, pages 251 --> ???

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void using_iterator() {

    vector<int>::reverse_iterator p;
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
int main ()
{
    using_iterator();
    return 0;
}