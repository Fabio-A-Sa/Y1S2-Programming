// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

class Date
{
    public:

        Date(unsigned int year, unsigned int month,unsigned int day);
        Date(string yearMonthDay); // yearMonthDay must be in format "yyyy/mm/dd"
        void setYear(unsigned int year) ;
        void setMonth(unsigned int month) ;
        void setDay(unsigned int day) ;
        void setDate(unsigned int year, unsigned int month, unsigned int day) ;
        unsigned int getYear() const;
        unsigned int getMonth() const;
        unsigned int getDay() const;
        string getDate() const; // returns the date in format "yyyy/mm/dd"
        void show() const; // shows the date on the screen in format "yyyy/mm/dd"

    private:

        unsigned int year;
        unsigned int month;
        unsigned int day;
}; 

Date::Date(unsigned int y, unsigned int m,unsigned int d) {
    year = y;
    month = m;
    day = d;
}

Date::Date(string yearMonthDay) {
    int d, m, y;
    char x;
    istringstream str(yearMonthDay);
    str >> year >> x >> month >> x >> day;
    day = d;
    month = m;
    year = y;
}

void Date::setYear(unsigned int y) {
    year = y;
}

void Date::setMonth(unsigned int m) {
    month = m;
}

void Date::setDay(unsigned int d) {
    day = d;
}

void Date::setDate(unsigned int y, unsigned int m, unsigned int d) {
    year = y;
    month = m;
    day = d;
}

unsigned int Date::getYear() const {
    return year;
}

unsigned int Date::getMonth() const {
    return month;
}

unsigned int Date::getDay() const {
    return day;
}

string Date::getDate() const {
    string all;
    string d = to_string(day); while (d.size() < 2) { d = "0" + d ; } ;
    string m = to_string(month); while (m.size() < 2) { m = "0" + m ; } ;
    string y = to_string(year); while (y.size() < 4) {y = "0" + y ; } ;
    all = y + "/" + m + "/" + d;
    return all;
}

void Date::show() const {
    string result = getDate();
    cout << result << endl;
}

void test() {

    Date d1 = Date (2021, 4, 29);
    d1.show();
    cout << "Day: " << d1.getDay() << endl;
    cout << "Month: " << d1.getMonth() << endl;
    cout << "Year: " << d1.getYear() << endl;
    string total = d1.getDate();
    cout << "Total date: " << total << endl;
    d1.setDay(d1.getDay() + 1);
    cout << "Next day: " << d1.getDay() << endl;
    d1.show();
}

int main ()
{
    test();
    return 0;
}