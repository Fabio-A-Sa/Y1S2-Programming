// Exercices from course https://www.youtube.com/watch?v=_bYFu9mBnr4

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    getline(cin, text);
    cout << text << endl; // Return the input
    cout << text.length() << endl; // Return input's lenght
    cout << text.erase(text.length() - 1); // Delete last letter
    cout << text.pop_back(); // Delete last letter too
    cout << text.insert(5, " something "); // Append "something" in 5th index
    cout << text.erase(3); // Delete letter in 3rd index
}