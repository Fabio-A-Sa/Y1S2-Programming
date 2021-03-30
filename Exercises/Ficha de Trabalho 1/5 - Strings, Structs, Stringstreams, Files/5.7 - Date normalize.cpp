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
    cout << "Enter a date using format YYYY/MM/DD : " << endl;
    cin >> d->year >> character >> d->month >> character >> d->day ;
}

void writeDate(Date *d) {

    cout << setfill('0') << setw(4) << d->year << "/" << setw(2) << d->month << "/" << setw(2) << d->day << endl;
    cout << endl;
}

int compareDates(const Date *d1, const Date *d2) {

    if (d1->year < d2->year) {
        return 1;
    }
    else if (d1->year > d2->year) {
        return -1;
    }
    else if (d1->month < d2->month) {
        return 1;
    }
    else if (d1->month > d2->month) {
        return -1;
    }
    else if (d1->day < d2->day) {
        return 1;
    }
    else if (d1->day > d2->day) {
        return -1;
    }
    return 0;
}

void sortDates(Date *d1, Date *d2) {
    
    int sort = compareDates(d1, d2);
    if (sort) {
        if (sort < 0) {
            writeDate(d2);
            cout << " ";
            writeDate(d1);
            cout << endl;
        }
        else {
            writeDate(d1);
            cout << " ";
            writeDate(d2);
            cout << endl;
        }
    }
    else {
        cout << "Dates are equal: ";
        writeDate(d1);
    }
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
    sortDates(data1, data2);

    return 0;
}