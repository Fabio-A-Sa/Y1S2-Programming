// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <ctime>
#include <iostream>
#include <iomanip>
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
        cout << "Incorrect result!" << endl ;
    }
    else {
            if (tempo < 5) { 
                cout << "Very Good" << endl ; 
            }
            else if (tempo >= 5 && tempo <= 10) { 
                cout << "Good" << endl ; 
            }
            else { 
                cout << "Insufficient" << endl ; 
            }
    }
    return 0;
}