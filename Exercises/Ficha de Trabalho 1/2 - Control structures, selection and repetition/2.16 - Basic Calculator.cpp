// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    double a, b, resultado, memory = 0;
    string conta, key;

    do  {
        cout << "Number operator number: " << endl;
        cin >> a >> conta >> b;

        if (conta == "+") {
            resultado = a+b ;
            cout << a << " " << conta << " " << b << " = " << resultado << endl;
        }
        else if (conta == "-") {
            resultado = a-b ;
            cout << a << " " << conta << " " << b << " = " << resultado << endl;
        }
        else if (conta == "x") {
            resultado = a*b ;
            cout << a << " " << conta << " " << b << " = " << resultado << endl;
        }
        else if (conta == "/" || conta == ":") {
            resultado = a/b ;
            cout << a << " " << conta << " " << b << " = " << resultado << endl;
        }

        cout << "\nQ   --> Quit\nC   --> Clean contents\nM   --> Save current value\nMC  --> Clean all items in memory\n"
        << "M+  --> Add current value in memory\nM-  --> Subtract current value in memory\nMR  --> Show contents of memory" << endl;
        cin >> key;

        if (key == "Q") { cout << "Finish process" << endl; }
        else if (key == "C") { cout << "\x1B[2J\x1B[H" << endl; }
        else if (key == "MC") { memory = 0; }
        else if (key == "M+") { memory = memory + resultado; }
        else if (key == "M-") { memory = memory - resultado; }
        else if (key == "MR") {
            cout << "Result = " << resultado << endl;
            cout << "Memory = " << memory << endl;
            cout << "Value A = " << a << endl;
            cout << "Value B = " << b << endl;
        }

        } while (key != "Q");

    return 0;
}