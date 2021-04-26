// Created on April 26, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 15, pages 170 --> ???

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

void normalization() {

    string input = "      March    25      , 2014      ";
    string month, comma;
    int day, year;

    cout << "Normalization of "  << input << " is: ";
    istringstream istr(input);
    istr >> month >> day >> comma >> year;
    cout << month << " " << day << comma << " " << year << endl;
}

void strings_to_numbers() {

    cout << "Strings to numbers: \n";
    vector<string> numbers = {" 89 ", "   78", "  -1   ", "72    "};
    for (string number : numbers) {
        cout << stoi(number) << endl;
    }
}

int main ()
{
    normalization();
    strings_to_numbers();
    return 0;
}



