// Created on April 29, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 16, pages 177 --> ???

#include <iostream>
#include <array>
#include <string>
#include <iomanip>
using namespace std;

class Date {

    public:
        Date(); 
        Date(unsigned int y, unsigned int m, unsigned int d);
        Date(string yearMonthDay);
        void setYear (unsigned int y) ;
        void setMonth (unsigned int m) ;
        void setDay (unsigned int d) ;
        void setDate (unsigned int y, unsigned int m, unsigned int d) ;
        unsigned int getYear() ;
        unsigned int getMonth() ;
        unsigned int getDay() ;
        string getStr() ;
        void show() ;
        
    private:
        unsigned int year;
        unsigned int month;
        unsigned int day;

};

Date::Date() {
    day = 0;
    year = 0;
    month = 0;
}

void Date::setYear (unsigned int y) {
    year = y;
}

void Date::setMonth (unsigned int m) {
    month = m;
}

void Date::setDay (unsigned int d) {
    day = d;
}

void Date::show() {
    cout << day << "-" << month << "-" << year << endl;
}

void using_classes() {

    Date d1;
    unsigned int d, m, y;
    cout << "Day: ";
    cin >> d;
    cout << "Month: ";
    cin >> m;
    cout << "Year: ";
    cin >> y;
    d1.setYear(y) ;
    d1.setMonth(m) ;
    d1.setDay(d) ;
    d1.show();
}

int main ()
{
    using_classes();
    return 0;
}