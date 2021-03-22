// Created on March 22, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 8, pages 81 --> 102

#include <iostream>
#include <vector>
using namespace std;

// Using vectors
int main ()
{
    vector<vector<int>> example = {{1, 2}, {2, 4}, {4, 7}};
    cout << example.at(2).at(1) << endl;
    cout << example[2][1] << endl;
    cout << example.empty();                    // answer = exampleIsEmpty? 1 : 0;
    return 0;
}