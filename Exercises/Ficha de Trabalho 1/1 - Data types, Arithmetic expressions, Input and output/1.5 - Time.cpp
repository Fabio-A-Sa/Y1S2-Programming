// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
using namespace std;

int main()
{
    string t1, t2;
    int d, h1, h2, m1, m2, s1, s2, total, resto;

    // Inputs and Strings --> Integers
    cout << "Tempo 1 (horas minutos segundos) ? ";
    getline (cin, t1);
    h1 = stoi(t1.substr (0,2));
    m1 = stoi(t1.substr (3,2));
    s1 = stoi(t1.substr (6,2));
    cout << "Tempo 2 (horas minutos segundos) ? ";
    getline (cin, t2);
    h2 = stoi(t2.substr (0,2));
    m2 = stoi(t2.substr (3,2));
    s2 = stoi(t2.substr (6,2));
    
    // Total of seconds, remainder...
    total = (h1+h2)*(60*60) + (m1+m2)*(60) + (s1+s2);
    cout << total << endl;
    d = total / (24*60*60);
    total = total % (24*60*60);
    h1 = total / (60*60);
    total = total % (60*60);
    m1 = total / 60;
    s1 = total % 60;
    cout << "Soma dos tempos: " << d << " dia, " << h1 << 
    " horas, " << m1 << " minutos e " << s1 << " segundos" << endl;
    return 0;
}