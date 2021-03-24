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
        // Spaces, numbers and others characters
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
    int offset;
    string sentence;
    char answer;

    cout << "Your sentence: ";
    getline(cin, sentence);

    do  {
        cout << "Key: ";
        cin >> offset;
        if (cin.fail()) {
            cout << "Invalid key. Please enter a integer number. " << endl;
        }
        } while (!cin.fail());

    do  {
        cout << "Encryption or decryption? E/D : ";
        cin >> answer;
        if (cin.fail()) {
            cout << "Invalid input. Please try again" << endl;
            cin.clear();
            cin.ignore(10000, '\n');  
        }
        if (tolower(answer) != 'e' && tolower(answer) != 'd') {
            cout << "Invalid letter. Please choose E or D. " << endl;
            cin.clear();
            cin.ignore(10000, '\n');  
        } 

        } while (!cin.fail() && (tolower(answer) != 'e' && tolower(answer) != 'd')) ;

    if (tolower(answer) == 'e') {
        cout << "Encryption: " << encryptString(sentence, offset) << endl;
    }
    else if (tolower(answer) == 'd') {
        cout << "Decryption: " << encryptString(sentence, -offset) << endl;
    }
    else {
        cout << "Invalid input. Please try again." << endl;
    }

    return 0;
}