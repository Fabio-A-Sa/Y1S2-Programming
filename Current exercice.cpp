// Exercices from first collection, available on: 
// https://github.com/MIEIC-FEUP/Recursos/blob/master/1%C2%BA%20ano/2%C2%BA%20semestre/PROG%20-%20Programa%C3%A7%C3%A3o/Pr%C3%A1ticas/Folha%20%20de%20exerc%C3%ADcios%201.pdf

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main () // Grading FPRO
{
    double LE, PE, TE, RE;
    double result;

    cout << "Welcom to FPRO. Enter yours grades in percentage:\nLE: ";
    cin >> LE;
    cout << "RE: ";
    cin >> RE;
    cout << "PE: ";
    cin >> PE;
    cout << "TE: ";
    cin >> TE;

    bool flag = false;
    double grades[4] = {PE, TE, LE, RE};
    for (int g : grades) {
        flag = flag || (g < 0 || g > 100);
    }

    if (flag) {
        cout << "Input error";
    }
    else if (PE < 40 or TE < 40) {
        cout << "RFC";
    }
    else {
        result = (LE + RE + 5 * PE + 3 * TE) / 50;
        cout << "Your grade is " << result << " values!" << endl;
    }
    return 0;
}

