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
    return 0;
}

void printMonth (int month, int year) {

    string header_1, header_2;
    int beginning_day;

    vector<string> monthsName = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    beginning_day = numberOfBeginning(month, year);
    header_1 = monthsName[month-1] + "/" + to_string(year); 
    header_2 = ""
    cout << endl;
}

int main ()
{
    int month, year;
    cout << "Enter a month/year ";
    cin >> month >> year;
    printMonth(month, year);
    return 0;
}

