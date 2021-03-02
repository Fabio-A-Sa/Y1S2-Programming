// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
using namespace std;

int main () 
{
    double a, b, c, binomio, sol1, sol2, complex;
    string answer;

    cout << "A formula da equacao quadratica e dada por:\n{ ax^2 + bx + c\nInsira os valores dos coeficientes:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    binomio = pow(b, 2) - 4*a*c;

    if (binomio > 0)
    {
        answer = "A equacao tem duas raizes reais diferentes: ";
        sol1 = ((-1*b) + sqrt(binomio))/(2*a);
        sol2 = ((-1*b) - sqrt(binomio))/(2*a);
        cout << answer << sol1 << " e " << sol2 << endl;
    }
    else if (binomio == 0)
    {
        answer = "A equacao tem duas raizes reais iguais: ";
        sol1 = (-1*b)/(2*a);
        cout << answer << sol1 << endl;
    }
    else
    {
        answer = "A equacao tem 2 raizes complexas conjugadas: ";
        complex = sqrt(binomio*-1)/(2*a);
        sol1 = (-b)/(2*a);
        cout << answer << sol1 << "+" << complex << "i " << " e " 
        << sol1 << "-" << complex << "i" << endl;
    }
    return 0;
}