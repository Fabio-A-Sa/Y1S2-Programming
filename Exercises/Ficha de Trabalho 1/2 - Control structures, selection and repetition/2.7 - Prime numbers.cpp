// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <cmath>
using namespace std;

void isPrime_a ()
{
    bool flag = true;
    int number;
    string answer;

    cout << "Please enter a number: ";
    cin >> number;

    for (int i = 2; i < sqrt(number); i++) {
        flag = flag && ((number % i) != 0); }
        
    answer = flag == true ? "Its prime" : "Isn't prime";
    cout << answer;
}

void until1000_b ()
{
    bool flag;
    int cobaia = 0;

    for (int cobaia = 2; cobaia < 1000; cobaia++)
    {   
        flag = true;

        for (int i = 2; i < sqrt(cobaia); i++) 
        {
            flag = flag && ((cobaia % i) != 0); 
        }
            
        if (flag == true)
        {
            cout << cobaia << " ";
        }
    }
    return 0;
}

void prime100_c () 
{
    bool flag;
    int cobaia = 0, contador = 0;

    for (int cobaia = 2; contador < 100; cobaia++)
    {   
        flag = true;

        for (int i = 2; i < sqrt(cobaia); i++) 
        {
            flag = flag && ((cobaia % i) != 0); 
        }
            
        if (flag == true)
        {
            cout << cobaia << " ";
            contador++;
        }
    }
}

void d ()
{
    int const max_value = 4294967295;
    bool flag = false;
    int cobaia = max_value;

    while (flag != true) {
        flag = true;
        for (int denominador = 2; denominador <= cobaia; denominador++) {
            flag = flag && (cobaia % denominador != 0);
        }
        if (!flag) {
            cout << cobaia << "por aqui" << endl;
            cobaia = cobaia - 1;
        }
        else {
            cout << cobaia << endl;
        }
    }
    return 0;
}

void divisors_e ()
{
    int number;

    cout << "Please enter a number: ";
    cin >> number;
    cout << "Divisors of " << number << ": ";

    for (int divisor = 2; divisor <= number; divisor++)
    {
        if (number % divisor == 0)
        {
            cout << divisor << " ";
        }
    }
}

void isPerfect_f ()
{
    int number, total = 0;
    string answer;

    cout << "Please enter a number: ";
    cin >> number;
    cout << "Divisors of " << number << ": ";

    for (int divisor = 1; divisor < number; divisor++)
    {
        if (number % divisor == 0)
        {
            cout << divisor << " ";
            total = total + divisor;
        }
    }

    cout << endl;
    answer = number == total ? "Its perfect!" : "Isn't perfect!";
    cout << answer << endl;
}


int main () 
{
    isPrime_a ()
    until1000_b ()
    prime100_c ()
    until_overflow_d () 
    divisors_e ()
    isPerfect_f ()
    return 0;
}