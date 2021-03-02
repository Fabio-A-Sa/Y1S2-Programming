// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
using namespace std;

void exercise_a ()
{
    int d, h1, h2, m1, m2, s1, s2, total, resto;

    // Inputs
    cout << "Time 1 (hours minutes seconds) ? ";
    cin >> h1 >> m1 >> s1;
    cout << "Time 2 (hours minutes seconds) ? ";
    cin >> h2 >> m2 >> s2;
    
    // Total of seconds, remainder...
    total = (h1+h2)*(60*60) + (m1+m2)*(60) + (s1+s2);
    cout << total << endl;
    d = total / (24*60*60);
    total = total % (24*60*60);
    h1 = total / (60*60);
    total = total % (60*60);
    m1 = total / 60;
    s1 = total % 60;

    // Output
    cout << "Time1 + Time2 = " << d << " days, " << h1 << " hours, " << m1 << " minutes and " << s1 << " seconds" << endl;
}

void exercise_b ()
{
    int d, h1, h2, m1, m2, s1, s2, total, resto;
    string t1, t2;

    // Inputs and Strings --> Integers
    cout << "Time 1 (hours:minutes:seconds) ? ";
    getline (cin, t1);
    h1 = stoi(t1.substr (0,2));
    m1 = stoi(t1.substr (3,2));
    s1 = stoi(t1.substr (6,2));
    cout << "Time 2 (hours:minutes:seconds) ? ";
    getline (cin, t2);
    h2 = stoi(t2.substr (0,2));
    m2 = stoi(t2.substr (3,2));
    s2 = stoi(t2.substr (6,2));

    // Total of seconds, remainder...
    total = (h1+h2)*(60*60) + (m1+m2)*(60) + (s1+s2);
    d = total / (24*60*60);
    total = total % (24*60*60);
    h1 = total / (60*60);
    total = total % (60*60);
    m1 = total / 60;
    s1 = total % 60;
    
    // Output
    cout << "Time1 + Time2 = " << d << " days, " << h1 << " hours, " << m1 << " minutes and " << s1 << " seconds" << endl;
}

int main ()
{
    exercise_a () ;
    exercise_b () ;
    return 0;
}