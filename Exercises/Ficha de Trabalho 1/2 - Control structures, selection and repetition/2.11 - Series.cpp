// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <cmath>
using namespace std;

int factorial (int number) 
{
    if (number <= 1) { return 1 ; }
    else { return number * factorial(number - 1) ; }
}

void serie_a () 
{
    int n;
    double result = 0; 

    cout << "Enter a integer number: ";
    cin >> n;

    for (int i = 1; i <= n ; i++) {

        double denominador = 2*i-1;
        if ( i%2 == 1) {
            // Sum
            result = result + 4/denominador;
        }
        else {
            // Subtract
            result = result - 4/denominador;
        }
    }
    cout << "Value of pi: " << result << endl;
}

void serie_b ()
{
    int n;
    double result = 0; 

    cout << "Enter a integer number: ";
    cin >> n;

    for (int i = 1; i < n ; i++) {

        double denominador = factorial(i-1);
        result = result + 1/denominador;

    }
    cout << "Euler number: " << result << endl;
}

void serie_c ()
{
    int n, x;
    double result = 1; 

    cout << "Number of parts: ";
    cin >> n;
    cout << "X value: ";
    cin >> x;

    for (int i = 1; i < n ; i++) {

        double denominador = factorial(i);
        if ( i%2 == 1) {
            result = result - pow(x, i)/denominador;
        }
        else {
            result = result + pow(x, i)/denominador;
        }
    }
    cout << "e^x = " << result << endl;
}

int main () 
{   
    serie_a () ;
    serie_b () ;
    serie_c () ;
    return 0;
}