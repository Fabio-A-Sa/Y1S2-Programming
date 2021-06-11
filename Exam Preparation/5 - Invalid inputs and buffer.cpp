// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 21 of Lectures Material

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{   
    vector<int> numbers;
    cout << "Input 10 numbers: " << endl;
    int counter = 0;
    int current_number;

    while (numbers.size() != 10) {
        cout << "Number " << counter+1 << ": ";
        cin >> current_number;
        if (cin && cin.peek() == '\n') {
            numbers.push_back(current_number);
            cin.ignore(10000, '\n');
            counter+=1;
        }
        else {
            cout << "Input error, please try again!" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    for (auto number : numbers) {
        cout << number << " ";
    }

    return 0;
}