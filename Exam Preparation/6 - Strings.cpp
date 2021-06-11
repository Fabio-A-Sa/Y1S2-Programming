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
    cout << "Word " << example << " is " << example.toupper() << " in uppercase and " << tolower(example) << " in lowercase\n";
    return 0;
}