// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Global string
string abc = "abcdefghijklmnopqrstuvwxyz";

char encryptChar(char c, int key) {

    int index;

    if (isupper(c)) {
        index = (abc.find(tolower(c)) + key) % 26;
        return toupper(abc[index]);
    }   
    else {
        index = (abc.find(c) + key) % 26;
        return tolower(abc[index]);
    }
}

int main ()
{
    int offset = 3;
    char letter = 'a';
    cout << encryptChar(letter, offset) << endl;
    return 0;
}