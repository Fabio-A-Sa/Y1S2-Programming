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

Date::Date(unsigned int year, unsigned int month,unsigned int day) {
    this -> year = 0;
    this -> month = 0;
    this -> day = 0;
}

Date::Date(string yearMonthDay) {
    int d, m, y;
    char x;
    istringstream str(yearMonthDay);
    str >> year >> x >> month >> x >> day;
    this -> day = d;
    this -> month = m;
    this -> year = y;
}

void Date::setYear(unsigned int year) {
    this -> year = year;
}

void Date::setMonth(unsigned int month) {
    this -> month = month;
}

void Date::setDay(unsigned int day) {
    this -> day = day;
}

void Date::setDate(unsigned int year, unsigned int month, unsigned int day) {
    this -> year = year;
    this -> month = month;
    this -> day = day;
}

unsigned int Date::getYear() const {
    this -> year;
    return year;
}

unsigned int Date::getMonth() const {
    this -> month;
    return month;
}

unsigned int Date::getDay() const {
    this -> day;
    return day;
}

string Date::getDate() const {
    string all;
    string d = to_string(day); while (d.size() < 2) { d = "0" + d ; } ;
    string m = to_string(month); while (m.size() < 2) { m = "0" + m ; } ;
    string y = to_string(year); while (y.size() < 2) {y = "0" + y ; } ;
    all = y + "/" + m + "/" + d;
    return all;
}

void Date::show() const {
    string result = getDate();
    cout << result << endl;
}

void test() {

}

int main ()
{
    test();
    return 0;
}