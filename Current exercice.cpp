// Exercices from course https://www.youtube.com/watch?v=_bYFu9mBnr4

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main () // With do-while statement
{
    string password = "12345";
    string guess;
    do {
        cout << "Give me a password: " << endl;
        cin >> guess; } while (guess != password);

    cout << "Welcome, Fabio!" << endl;
    return 0;
}