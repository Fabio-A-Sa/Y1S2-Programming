// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
using namespace std;

// Global string
string abc = "abcdefghijklmnopqrstuvwxyz";

char encryptChar2(char c, int key) {
    char solution = islower(c) ? abc[(abc.find(c) + key) % 26] : toupper(abc[(abc.find(tolower(c)) + key) % 26]) ;
    return solution;
}

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
    char letter = 'A';
    cout << encryptChar2(letter, offset) << endl;
    return 0;
}