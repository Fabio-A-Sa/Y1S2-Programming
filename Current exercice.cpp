// Exercices from first collection, available on: 
// https://github.com/MIEIC-FEUP/Recursos/blob/master/1%C2%BA%20ano/2%C2%BA%20semestre/PROG%20-%20Programa%C3%A7%C3%A3o/Pr%C3%A1ticas/Folha%20%20de%20exerc%C3%ADcios%201.pdf

#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

double rounded (double number, double exponent)
{
    double n;
    n = floor (number * pow(10, exponent) + 0.5) / pow(10, exponent);
    return n;
}

int expn (double delta)
{   
    int exponent = -6;
    for (char number: to_string(1 / delta)) {
        if (number == '0') {
            exponent++;
        }
    }
    return exponent;
} 

double squareRoot (double n, double precision, int max_iteration)
{
    int counter = 0;
    double dif, rqn, rq = 1;
    do  {
        rqn = (rq + n / rq) / 2;
        dif = n - pow(rqn, 2);
        rq = rqn;
        counter++;
        } while ( (abs(dif) > precision) && (counter != max_iteration) );

    double result = rounded (rqn, expn(precision));
    return result;
}

string compare (int number, double result, double delta)
{
    // Test function
    bool flag = rounded(sqrt(number), expn(delta)) == result ? true : false ;
    if (flag) { return "Resultado aprovado!" ; }
    else { return "Resultado reprovado!" ; } 
}

int main () // Exercício 3.3 --> SquareRot de Heron with precision function
{
    double n, rq, rqn, delta, dif;
    int nMaxIter;

    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a precision of result: ";
    cin >> delta;
    cout << "Max number of iterations: ";
    cin >> nMaxIter;

    cout << "The square root of number " << n << " is " << squareRoot (n, delta, nMaxIter) << endl;
    cout << compare(n, squareRoot (n, delta, nMaxIter), delta);
    
    return 0;
}