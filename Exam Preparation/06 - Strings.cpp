// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 27/123 of Lectures Material

#include <iostream>
#include <string>
#include <array>
using namespace std;

int main()
{   
    string example = "eXAmpLE";
    cout << "Default: " << example << endl;
    cout << "Example in lowercase: ";
    for (auto c : example) {
        cout << (char) tolower(c);
    }
    cout << "\nExample in uppercase: ";
    for (auto c : example) {
        cout << (char) toupper(c);
    }

    cout << "String in C: " << endl;
    char s[] = "fabiosa";
    cout << "String size is: " << sizeof(s) / sizeof(s[0]) << endl; // String.size() + 1 --> '\n'

    return 0;
}