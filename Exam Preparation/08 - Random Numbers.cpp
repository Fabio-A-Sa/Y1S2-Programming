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
    int min = 100, max = 102;

    while (counter != 10) {
        cout << min + rand() % (max - min + 1) << endl;
        counter++; 
    }
    cout << "Random: " << rand() << endl;
    cout << "Number of seconds after 1 January 1970: " << time(NULL) << endl;

    return 0;
}