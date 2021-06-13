// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 21 of Lectures Material

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void to_do() {

    // Tested with "#ABcdE12345$Esc" string
    char current_char;
    cout << "Chars: ";
    while (cin >> current_char) {

        if (cin.peek() != '\n') {
            if (isdigit(current_char)) {
                cout << current_char;
            }
            cin.clear();
        }
        else {
            cin.clear();
            break;
        }
    }
    cout << endl;
}

int main()
{   
    vector<int> numbers;
    cout << "Input 10 numbers: " << endl;
    int counter = 0;
    int current_number;

    while (numbers.size() != 10) {
        cout << "Number " << counter+1 << ": ";
        cin >> current_number;

        if (!cin.eof()) { // CTRL+Z for example

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
        else {
            break;
        }
    }

    for (auto number : numbers) {
        cout << number << " ";
    }
    cout << endl;

    to_do(); // Example in page 22

    return 0;
}