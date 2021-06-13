// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 52 of Lectures Material

#include <iostream>
#include <ctime>
using namespace std;

int main ()
{   
    srand(time(NULL));
    int counter = 0;
    int min = 100, max = 98123;

    while (counter != 10) {
        cout << min + (rand() % (max-min));
    }

    return 0;
}