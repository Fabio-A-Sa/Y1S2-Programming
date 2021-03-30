// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

struct Date {
    unsigned int year, month, day;
};

void readDate (Date *d) {

    char character;
    cout << "Enter a date using format YYYY/MM/DD : ";
    cin >> d->year >> character >> d->month >> character >> d->day ;
}

void writeDate(Date *d) {

    cout << setfill('0') << setw(4) << d->year << "/" << setw(2) << d->month << "/" << setw(2) << d->day << endl;
}

int main () 
{   
    srand(time(NULL));
    Date *data1, d1;
    data1 = &d1;
    readDate(data1);

    Date *data2, d2;
    data2 = &d2;
    (*data2).day = rand() % 32;
    (*data2).month = rand() % 13;
    (*data2).year = rand() % 2022;

    writeDate(data2);

    return 0;
}