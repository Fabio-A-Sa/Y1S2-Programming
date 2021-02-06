// Exercices from course https://www.youtube.com/watch?v=_bYFu9mBnr4

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <fstream>
using namespace std;

int main() // Using files
{
    ofstream file;
    file.open("hello.txt");
    vector<int> numbers;

    // Write numbers until 1000 in .txt file
    for (int n = 0; n <= 1000; n++) {
        numbers.push_back(n); }

    for (int n: numbers) {
        file << n << endl; }

    // Read data of hello.txt
    int input;
    while (file >> input) {
        numbers.push_back(input); }

    for (int number : numbers) {
        cout << number << endl; }
        
    return 0;
}