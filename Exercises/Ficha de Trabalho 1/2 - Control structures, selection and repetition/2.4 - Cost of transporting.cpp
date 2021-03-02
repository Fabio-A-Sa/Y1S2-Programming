// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
using namespace std;

int main ()
{
    double peso, resultado;

    cout << "Weight of merchandise in grams: ";
    cin >> peso;

    if (peso < 500) {
        resultado = 5;
    }
    else if (peso >= 500 && peso <= 1000) {
        resultado = 5 + (1.5 * ((peso - 500)/100));
    }
    else {
        resultado = 12.5 + (5 * ((peso - 1000)/250));
    }
    cout << "Total: " << resultado << " euros." << endl;
    return 0;
}