// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <ctime>
#include <iostream>
using namespace std;

int main ()
{
    srand(time(NULL));
    int a, b, result, input;
    double tempo_inicial, tempo_final, tempo;

    a = rand() % 10 + 2;
    b = rand() % 10 + 2;
    cout << a << " x " << b << " = ";
    tempo_inicial = time(NULL);
    cin >> input;
    tempo_final = time(NULL);
    result = a*b;
    tempo = tempo_final - tempo_inicial;

    if (result != input) { 
        cout << "Resultado incorrecto!" << endl ;
    }
    else {
            if (tempo < 5) { cout << "Bom" << endl ; }
            else if (tempo >= 5 && tempo <= 10) { cout << "Suficiente" << endl ; }
            else { cout << "Insuficiente" << endl ; }
    }
    return 0;
}