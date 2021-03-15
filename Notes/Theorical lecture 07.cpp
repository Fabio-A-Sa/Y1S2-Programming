// Created on March 15, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 7, pages 52 --> ??

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

// Function that generates a random number between min-number and max-number
int random_numbers (int min, int max) {

    int number = min + rand() % (max - min + 1);
    return number;
}


// Static qualified
int static_options () {

    static int ticketNumber = 0; // Beginnig
    ticketNumber ++;
    return ticketNumber;

}

int main ()
{   
    // Include seed using time --> PseudoRandom
    srand(time(NULL));
    cout << random_numbers(5, 10) << endl;
    for (int i = 0; i < 10; i++) {
        cout << static_options();
    }
    return 0;
}