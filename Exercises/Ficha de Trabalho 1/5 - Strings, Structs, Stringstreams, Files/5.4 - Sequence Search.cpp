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

bool using_find () {


}

int main ()
{
    string sequence = "abcddeeddf" ;
    int times = 3 ;
    char letter = 'd' ;
    cout << my_own (sequence, times, letter);
    return 0;
}