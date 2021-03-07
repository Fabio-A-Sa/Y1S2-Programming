// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
using namespace std;

bool isPrime (int number) 
{
    bool flag = true;
    for (int i = 2; i < number; i++) {
        flag = flag && ( number % i != 0);
    }
    return flag;
}

void a ()
{
    int number;
    cout << "Number? ";
    cin >> number;

    if (isPrime(number)) { cout << "This number is prime!" << endl ; }
    else { cout << "This number isn't prime!" << endl; }
}

void b ()
{
    int number = 2, counter = 0;

    do  {
        if (isPrime(number)) { cout << number << " "; counter++; number++; }
        else { counter++; number++; }
        } while (counter < 1000);
}

void c ()
{
    int number = 2, counter = 0;

    do  {
        if (isPrime(number)) { cout << number << " "; counter++; number++; }
        else { number++; }
        } while (counter != 100);
}

void d ()
{
    const unsigned int max_value = ULONG_MAX;
    bool flag = false;
    unsigned int cobaia = max_value;

    while (!isPrime(cobaia)) {
        cobaia = cobaia - 1;
    }
    cout << cobaia << endl;
}

int main () 
{
    a () ;
    b () ;
    c () ;
    d () ;
    return 0;
}