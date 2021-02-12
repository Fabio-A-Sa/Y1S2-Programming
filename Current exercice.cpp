// Exercices from first collection, available on: 
// https://github.com/MIEIC-FEUP/Recursos/blob/master/1%C2%BA%20ano/2%C2%BA%20semestre/PROG%20-%20Programa%C3%A7%C3%A3o/Pr%C3%A1ticas/Folha%20%20de%20exerc%C3%ADcios%201.pdf

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;


vector<int> primes_until (int number)
{
    vector<int> primes;
    bool flag = true;

    for (int n = 2; n <= number; n++) {
        flag = true;
        for (int denom = 2; denom <= sqrt(n) ; denom++) {
            flag = flag && ( n % denom != 0 );
            }
        if (flag) {
            primes.push_back(n);
        }
        else { continue; }
    }
    return primes;
}

int main () 
{
    int number;
    do  {
        cout << "Please enter a integer number: ";
        cin >> number;
        if (number < 2) {
            cout << "Input error. Please try again!" << endl;
        }
        } while (number < 2);
    int aux = number;

    vector<int> factors;
    for (int n: primes_until(number)) {
        while ( aux % n  == 0 ) {
            aux = aux / n;
            factors.push_back(n);
        }
    }

    string answer = "O numero " + to_string(number) + " pode ser fatorizado em ";
    for (int fact : factors) {
        answer = answer + to_string(fact) + " x ";
    }

    int index = 0;
    while (index != (answer.size()-3)) {
        cout << answer[index];
        index++;
    }
    return 0;
}