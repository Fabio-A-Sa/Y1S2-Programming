// Created on March 4, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 4, pages 22 --> ?

#include <iostream>
#include <cmath>
#include <iomanip>
#include <climits>
#include <cctype>
using namespace std;

// Manipulation digits with setw and setfill
int digits_manipulation ()
{
    int dd, mm, yyyy;
    char sep1, sep2;

    cout << "Date (dd:mm:yyyy): ";
    cin >> dd >> sep1 >> mm >> sep2 >> yyyy;
    cout << "Date: " << setfill('0') << setw(2) << dd << sep1 << setw(2) << mm << sep2 << setw(4) << yyyy << endl;

    if (sep1 != ':' || sep2 != ':' || cin.peek() != '\n') {
        cout << "Invalid date" << endl;
    }

    return 0;
}

// Upper and lower strings --> Char by char #include <cctype>
int upper_and_lower_strings () 
{
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    int length = sentence.length(); 

    for (int i = 0; i < length; i++) { 

        int c = sentence[i]; 
        if (islower(c))  
            sentence[i] = toupper(c); 
        else if (isupper(c))  
            sentence[i] = tolower(c); 
        else
            continue;
    }

    cout << sentence << endl;
    return 0;
}

int main ()
{
    upper_and_lower_strings();
    return 0;
}