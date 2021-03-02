// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
using namespace std;

int main()
{
    int d, h1, h2, m1, m2, s1, s2, total, resto;

    // Inputs and Strings --> Integers
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

    return 0;
}