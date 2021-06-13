// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 27 of Lectures Material

#include <iostream>
#include <string>
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
    return 0;
}