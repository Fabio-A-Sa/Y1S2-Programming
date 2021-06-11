// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 27 of Lectures Material

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{   
    string example = "eXAmple";
    for (auto c : example) {
        cout << (char) tolower(c);
    }
    return 0;
}