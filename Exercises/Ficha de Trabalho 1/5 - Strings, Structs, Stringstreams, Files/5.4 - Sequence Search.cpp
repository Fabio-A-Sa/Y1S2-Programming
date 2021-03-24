// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
using namespace std;

bool my_own (const string &s, int nc, char c) {

    int counter = 0;
    for (char letter : s) {
        if (letter == c) {
            counter = counter + 1;
            if (counter == nc) {
                return true;
            }
        }
        else {
            counter = 0;
        }
    }
    return false;
}

bool using_find (const string &s, int nc, char c) {

    string search;
    for (int number = 0 ; number < nc ; number ++ ) {
        search = search + c ;
    }
    return s.find(search) < s.size();
}

int main ()
{
    string sequence, answer1, answer2 ;
    int times ;
    char letter ;

    cout << "Sequence: ";
    getline(cin, sequence);
    cout << "Times: ";
    cin >> times;
    cout << "Letter: ";
    cin >> letter;

    answer1 = my_own (sequence, times, letter) ? "My own function: true" : "My own function: false" ;
    answer2 = using_find (sequence, times, letter) ? "Using Find() method: true" : "Using Find() method: true";
    cout << answer1 << endl << answer2 << endl;
    return 0;
}