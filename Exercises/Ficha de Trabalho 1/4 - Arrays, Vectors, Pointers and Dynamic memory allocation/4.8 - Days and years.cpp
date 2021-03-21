// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
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


int main ()
{   
    // Input values
    int year;
    double pluv_day;
    vector<string> monthsName = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    vector<vector<double>> pluviosity_year;
    vector<double> pluviosity_month;
    cout << "Enter a year: ";
    cin >> year;
    for (int month = 0 ; month < 12 ; month++ ) {
        for (int day = 1 ; day <= numberDays(month, year) ; day ++ ) {
            cout << "Day " << day << " of " << monthsName[month] << ". Pluviosity: ";
            cin >> pluv_day;
            pluviosity_month.push_back(pluv_day);
        }
        pluviosity_year.push_back(pluviosity_month);
        pluviosity_month.clear();
    }

    // Print all data
    for (vector<double> month : pluviosity_year) {
        for (int day : month) {
            cout << day << ", ";
        }
        cout << endl;
    }   

    // Example --> Year 2021
    vector<vector<double>> year_2021 = {} ;
    return 0;
}