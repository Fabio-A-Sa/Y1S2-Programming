// Created on May 10, 2021
// @author: Fábio Araújoe Sá
// Theorical lecture 19, pages 251 --> ???

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void using_iterator() {

    // Iterator in reverse order
    vector<int>::reverse_iterator p;
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (p = numbers.rbegin() ; p != numbers.rend() ; p++ ) {
        cout << "Number: " << *p << endl;
    }

}
int main ()
{
    using_iterator();
    return 0;
}