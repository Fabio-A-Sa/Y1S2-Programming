// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 89 of Lectures Material

#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector<int> example(10); // Initialize with 10 zeros
    for (auto number: example) {
        cout << number << " ";
    }
    return 0;
}