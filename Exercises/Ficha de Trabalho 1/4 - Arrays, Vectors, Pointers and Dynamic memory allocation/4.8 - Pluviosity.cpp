// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <ctime>
#include <iomanip>
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

vector<vector<int>> maximum_pluviosity (vector<vector<int>> pluviosity) {

    // Search for highest value
    int max_value = -100;
    for (int month = 0 ; month < 12 ; month ++ ) {
        for (int day = 0 ; day < pluviosity[month].size() ; day ++ ) {
            max_value = max_value < pluviosity[month][day] ? pluviosity[month][day] : max_value;
        }
    }

    // Search all days which pluviosity == max_value
    vector<vector<int>> solution;
    vector<int> month_day;
    for (int month = 0 ; month < 12 ; month ++ ) {
        for (int day = 0 ; day < pluviosity[month].size() ; day ++ ) {
            if (pluviosity[month][day] == max_value) {
                month_day.push_back(month);
                month_day.push_back(day);
                solution.push_back(month_day);
                month_day.clear();
            }
        }
    }
    return solution;
}

int main ()
{   
    srand(time(NULL));
    int year;
    
    cout << "\nEnter a year: ";
    cin >> year;

    vector<string> monthsName = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    vector<vector<int>> pluviosity = random_pluviosity (year);
    vector<double> average;
    vector<vector<int>> pairs;

    // Print all data
    cout << "\nRandom pluviosity (in milimeters) by month. Year " << year << ":\n" << endl;
    cout << setfill(' ') << setw(15) << "Days:" << "  ";
    for (int day = 1 ; day <= 31 ; day ++ ) {
        cout << setfill(' ') << setw(3) << day << " ";
    }
    cout << " \n" << endl;
    for (int month = 0 ; month < 12 ; month ++) {
        cout << setfill(' ') << setw(15) << monthsName[month] << ": ";
        for (int day = 0 ; day < pluviosity[month].size() ; day ++ ) {
            cout << setfill(' ') << setw(3) << pluviosity[month][day] << " ";
        }
        cout << " " << endl;
    }

    // Average by month
    average = averages(pluviosity);
    cout << "\nAverage pluviosity (in milimeters) by month:\n" << endl;
    for (int index = 0 ; index < 12 ; index ++ ){
        cout << monthsName[index] << ": " << average[index] << endl;
    }
    cout << endl;

    // Main average
    cout << "Average pluviosity by day of year " << year << ": " << average[12] << endl;

    // Maximum value
    pairs = maximum_pluviosity(pluviosity);
    int max_value = pluviosity[pairs[0][0]][pairs[0][1]];
    cout << "\nDaily maximum pluviosity in " << year << ": " << max_value << endl;

    // Maximum days
    cout << "\nDays of maximum pluviosity:\n" << endl;
    for (vector<int> pair : pairs) {
        cout << "Day " << pair[1]+1 << " of " << monthsName[pair[0]] << endl;
    }
    cout << " \n " << endl;
 
    return 0;
}