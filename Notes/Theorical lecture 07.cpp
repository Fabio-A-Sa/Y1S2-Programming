// Created on March 15, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 7, pages 52 --> 68

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

// Function that generates a random number between min-number and max-number
int random_numbers (int min, int max) {

    int number = min + rand() % (max - min + 1);
    return number;
}


// Static qualifier --> Start is 0, and then whenever it is called, it is previous value + 1
int static_options () {

    static int ticketNumber = 0; // Beginnig
    ticketNumber ++;
    return ticketNumber;

}

// Recursive function: factorial
int recursive_factorial(int number) {

    if (number <= 1) { 
        return number; 
    }
    else { 
        return number * recursive_factorial (number - 1); 
    }
}

// Recursive funcion: vertical numbers
void vertical_numbers(int number) {

    if (number < 10) { 
        cout << number << endl; 
    }
    else { 
        vertical_numbers(number/10); 
        cout << number % 10 << endl;
    }
}

// Recursive function: fibonacci
int fib_numbers (int number) {

    if (number == 2 || number == 1) {
        return 1;
    }
    else {
        return fib_numbers (number - 1) + fib_numbers (number - 2);
    }
}

int main ()
{   
    // Include seed using time --> PseudoRandom
    srand(time(NULL));
    cout << random_numbers(5, 10) << endl;

    // Static number
    for (int i = 0; i < 10; i++) {
        cout << "Ticket number: " << static_options() << endl;
    }

    // Recursive funcions: vertical numbers, factorial and fibonacii;
    vertical_numbers(12684);
    cout << recursive_factorial(6) << endl;
    cout << fib_numbers(20) << endl;
    return 0;
}