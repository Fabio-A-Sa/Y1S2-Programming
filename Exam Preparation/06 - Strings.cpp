// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 27/123 of Lectures Material

#include <iostream>
#include <string>
#include <array>
using namespace std;

void convertion () {

    // Convert strings to numbers (integer, long int and double)
    cout << atoi("999654") * 10 << endl;
    cout << atol("56") << endl;
    cout << atof("9.655") * 10 << endl;
}

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
    cout << "String size is: " << sizeof(s) / sizeof(s[0]) << endl; // String.size() + 1 --> '\0'

    convertion();

    string fabio = "Araujo de Sa";
    cout << fabio.substr(10, 2) << endl; // Initial index and its length
    
    return 0;
}