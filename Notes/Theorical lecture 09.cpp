// Created on March 22, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 8, pages 81 --> 102

#include <iostream>
#include <vector>
#include <cstddef>
using namespace std;

// Using vectors
void vectors_init () {
    vector<vector<int>> example = {{1, 2}, {2, 4}, {4, 7}};
    cout << example.at(2).at(1) << endl;
    cout << example[2][1] << endl;
    cout << example.empty() << endl; // answer = exampleIsEmpty? 1 : 0;
    example.clear();         // clean vector;
    cout << example.empty() << endl; // answer = exampleIsEmpty? 1 : 0;
}

// Using pointer
int main () 
{
    int x = 10;
    int& r = x;
    int * ptr;
    cout << r << endl;
    return 0;
}