// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

class Date
{   
    friend bool operator < (Date date1, Date date2);
    friend bool operator > (Date date1, Date date2);
    friend bool operator != (Date date1, Date date2);
    friend bool operator <= (Date date1, Date date2);
    friend bool operator >= (Date date1, Date date2);
    friend bool operator == (Date date1, Date date2);
    friend void operator << (Date &date1, Date &date2);
    friend void operator >> (Date &date1, Date &date2);

    public:
        Date();
        Date(unsigned int year, unsigned int month,unsigned int day);
        Date(string yearMonthDay);
        void setYear(unsigned int year) ;
        void setMonth(unsigned int month) ;
        void setDay(unsigned int day) ;
        void setDate(unsigned int year, unsigned int month, unsigned int day) ;
        unsigned int getYear() const;
        unsigned int getMonth() const;
        unsigned int getDay() const;
        string getDate() const;
        void show() const;

        bool isValid();
        bool isEqualTo(const Date &date);
        bool isNotEqualTo(const Date &date);
        bool isAfter(const Date &date);
        bool isBefore(const Date &date);

    private:

        unsigned int year;
        unsigned int month;
        unsigned int day;

        unsigned int how_many_days(unsigned year, unsigned month);
        bool isLeapYear (unsigned int year);
}; 

Date::Date()
{
    year = 0;
    month = 0;
    day = 0;
}

bool Date::isEqualTo(const Date &date) {
    return (day == date.getDay() && month == date.getMonth() && year == date.getYear());
}

bool Date::isNotEqualTo(const Date &date) {
    return !isEqualTo(date);
}

bool Date::isAfter(const Date &date) {

    bool flag = true;

    if (year > date.getYear()) {
        flag = false;
    }
    else {
        if (month > date.getMonth()) {
            flag = false;
        }
        else {
            if (day > date.getDay()) {
                flag = false;
            }
            else {
                if (isEqualTo(date)) {
                    flag = false;
                }
            }
        }
    }
    return !flag;
}   

bool Date::isBefore(const Date &date) {
    return ! (isAfter(date) || isEqualTo(date));
}

bool Date::isValid() {

    bool answer;
    answer = ( day > 0 && day <= how_many_days(year, month) && month < 13 && month > 0 && year >= 0 && year < 2022 );
    return answer;
}

Date::Date(unsigned int y, unsigned int m, unsigned int d) {
    year = y;
    month = m;
    day = d;
}

Date::Date(string yearMonthDay) {
    int y, m, d;
    char x;
    istringstream str(yearMonthDay);
    str >> y >> x >> m >> x >> d;
    day = d;
    month = m;
    year = y;
}

unsigned int Date::how_many_days(unsigned year, unsigned month) {

    unsigned int days = 0;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days = 31;
        break;
    
        case 4: case 6: case 9: case 11:
        days = 30;
        break;

        case 2:
            if (Date::isLeapYear(year)) {
                days = 29;
            }
            else {
                days = 28;
            }
            break;
    }
    return days;
}

bool Date::isLeapYear (unsigned int year) {

    bool flag = true;
    flag = flag && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ;
    return flag;
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

bool operator < (Date date1, Date date2) {

    if (date1.getYear() != date2.getYear())  {
        return date1.getYear() < date2.getYear();
    }
    else {
        if (date1.getMonth() != date2.getMonth()) {
            return date1.getMonth() < date2.getMonth();
        }
        else {
            if (date1.getDay() != date2.getDay()) {
                return date1.getDay() < date2.getDay();
            }
            else {
                return false;
            }
        }
    }
}

bool operator > (Date date1, Date date2) {
    
    if (date1.getYear() != date2.getYear())  {
        return date1.getYear() > date2.getYear();
    }
    else {
        if (date1.getMonth() != date2.getMonth()) {
            return date1.getMonth() > date2.getMonth();
        }
        else {
            if (date1.getDay() != date2.getDay()) {
                return date1.getDay() > date2.getDay();
            }
            else {
                return false;
            }
        }
    }
}

bool operator != (Date date1, Date date2) {
    return date1.getDate() != date2.getDate();
}

bool operator <= (Date date1, Date date2) {
    return date1 < date2 || date1 == date2;
}

bool operator >= (Date date1, Date date2) {
    return date1 > date2 || date1 == date2;
}

bool operator == (Date date1, Date date2) {
    return date1.getDate() == date2.getDate();
}

void operator << (Date &date1, Date &date2) {
    date1.setDate(date2.getDay(), date2.getMonth(), date2.getYear());
}

void operator >> (Date &date1, Date &date2) {
    date2.setDate(date1.getDay(), date1.getMonth(), date1.getYear());
}


int main ()
{
    Date d1 = Date(23, 0, 2021);
    Date d2 = Date(10, 7, 2002);
    d1 >> d2;
    bool answer = d1 != d2;
    cout << answer;
    return 0;
}