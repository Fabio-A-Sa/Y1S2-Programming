// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

bool isLeapYear (int year) {

    bool flag = true;
    flag = flag && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ;
    return flag;
}

int numberDays (int month, int year) {
    
    int days;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days = 31;
        break;
    
        case 4: case 6: case 9: case 11:
        days = 30;
        break;

        case 2:
            if (isLeapYear(year)) {
                days = 29;
            }
            else {
                days = 28;
            }
            break;
    }
    return days;
}

int numberOfBeginning (int month, int year) {

    int ds, a, c, d, s;
    a = year % 100;
    c = month;
    d = 1;
    s = year / 100;
    int aux = floor((5*a)/c);
    ds = (aux + c + d - 2*(s%4) + 7) % 7 ;
    return ds;
}

void printMonth (int month, int year) {

    string header_1, header_2;
    int beginning_day, counter = 0;

    vector<string> monthsName = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    beginning_day = numberOfBeginning(month, year) == 1 ? 6 : numberOfBeginning(month, year) + 2;
    header_1 = monthsName[month-1] + "/";
    header_2 = "Sun\tMon\tTue\tWed\tThu\tFri\tSat\n";

    cout << header_1 << year << "\n" << header_2;

    while (counter != beginning_day) {
        cout << " " << "\t";
        counter ++;
    }

    int pointer = 1;
    while (pointer <= numberDays(month, year)) {
        cout << pointer << "\t";
        counter = counter + 1;
        if (counter >= 7) {
            counter = 0;
            cout << endl;
        }
        pointer = pointer + 1;
    }
}

int main ()
{
    int month, year;
    cout << "\nEnter a year: ";
    cin >> year;

    for (int month = 1; month < 13; month++) {
        printMonth(month, year);
        cout << "  " << endl;
    }
    return 0;
}