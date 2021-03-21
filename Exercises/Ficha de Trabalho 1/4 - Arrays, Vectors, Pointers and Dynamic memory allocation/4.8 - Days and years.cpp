// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <ctime>
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

vector<vector<int>> random_pluviosity (int year) {

    double pluv_day;
    vector<vector<int>> pluviosity_year;
    vector<int> pluviosity_month;

    for (int month = 1 ; month <= 12 ; month++ ) {
        for (int day = 1 ; day <= numberDays(month, year) ; day ++ ) {
            pluv_day = (rand() % rand() % rand() ) % 100;
            pluviosity_month.push_back(pluv_day);
        }
        pluviosity_year.push_back(pluviosity_month);
        pluviosity_month.clear();
    }

    return pluviosity_year;
}

vector<double> averages (vector<vector<int>> plu ) {

    int counter = 0;
    int sum = 0;
    int total_sum = 0;
    double basic_average, main_average;
    vector<double> solution;

    for (int month = 0 ; month < 12 ; month ++ ) {
        for (int day = 0 ; day < plu[month].size() ; day ++ ) {
            sum = sum + plu[month][day] ;
            counter ++;
        }
        total_sum = total_sum + sum;
        basic_average = (double) sum / plu[month].size();
        solution.push_back(basic_average);
        sum = 0;
    }
    main_average = (double) total_sum / counter;
    solution.push_back(main_average);
    return solution;
}

int main ()
{   
    srand(time(NULL));
    int year;
    cout << "Enter a year: ";
    cin >> year;
    vector<string> monthsName = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    vector<vector<int>> pluviosity = random_pluviosity (year);

    // Print all data
    cout << "\nRandom pluviosity (in milimeters) by month. Year " << year << ":\n" << endl;
    for (int month = 0 ; month <= 12 ; month ++) {
        cout << monthsName[month] << ": ";
        for (int day = 0 ; day < pluviosity[month].size() ; day ++ ) {
            cout << pluviosity[month][day] << ", ";
        }
        cout << endl;
    }

    // Statistics
    vector<double> average = averages(pluviosity);
    cout << "Average pluviosity (in milimeters) by month:\n";
    for ()
} 
