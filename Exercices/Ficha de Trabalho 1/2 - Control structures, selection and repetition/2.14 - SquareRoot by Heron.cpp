// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
using namespace std;

void rounded (double number, double exponent)
{
    double n;
    n = floor (number * pow(10, exponent) + 0.5) / pow(10, exponent);
    cout << n;
}

void srqt_heron_a ()
{
    double n, rq, rqn, delta, dif;
    int nMaxIter, exponent = 0;

    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a precision of result: ";
    cin >> delta;
    cout << "Max iteration: ";
    cin >> nMaxIter;

    int counter = 0;
    rq = 1;
    do  {
        rqn = (rq + n / rq) / 2;
        dif = n - pow(rqn, 2);
        rq = rqn;
        counter++;
        } while (abs(dif) > delta && counter != nMaxIter);

    cout << rq << endl;
}

void heron_with_precision ()
{
    double n, rq, rqn, delta, dif;
    int nMaxIter, exponent = -6;

    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a precision of result: ";
    cin >> delta;

    for (char number: to_string(1 / delta)) {
        if (number == '0') {
            exponent++;
        }
    }

    rq = 1;
    do  {
        rqn = (rq + n / rq) / 2;
        dif = n - pow(rqn, 2);
        rq = rqn;
        } while (abs(dif) > delta);

    rounded (rqn, exponent);
}

int main ()
{
    srqt_heron_a () ;
    heron_with_precision () ;
    return 0;
}