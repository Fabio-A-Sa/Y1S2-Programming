// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct Date {
    unsigned int year, month, day;
};

void readDate (Date *d) {

    char character;
    cout << "Enter a date using format YYYY/MM/DD :";
    cin >> d->year >> character >> d->month >> character >> d->day ;
}

int main () 
{   
    srand(time(NULL));
    Date *data;
    readDate(data);
    return 0;
}