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
    cout << "Enter a date using format YYYY/MM/DD : ";
    cin >> d->year >> character >> d->month >> character >> d->day ;
}

void writeDate(const Date *d) {

    cout << d->year << "/" << d->month << "/" << d->day << endl;
}

int main () 
{   
    srand(time(NULL));
    Date *data1;
    readDate(data1);

    Date *data2;
    data2->day = rand() % 32;
    data2->month = rand() % 13;
    data2->year = rand() % 2022;

    return 0;
}