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
    else if (islower(c)) {
        index = (abc.find(c) + key) % 26;
        return tolower(abc[index]);
    }
    else {
        return c;
    }
}

string encryptString(string s, int key) {

    string solution;
    for (char letter : s) {
        solution = solution + encryptChar(letter, key);
    }
    return solution;
}

int main ()
{
    int offset = -10;
    char letter = 'A';
    string sentense = "The quick brown fox JUMPS over the lazy dog";

    cout << encryptString(sentense, offset) << endl;
    return 0;
}