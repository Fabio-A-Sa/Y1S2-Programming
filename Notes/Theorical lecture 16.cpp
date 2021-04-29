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
        void setYear (unsigned int y) ;
        void setMonth (unsigned int m) ;
        void setDay (unsigned int d) ;
        void show() ;
        bool valid() ;
        
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

bool Date::valid() {

    bool answer;
    answer = (day > 0 && day < 32 && year > 0 && month > 0 && month < 13);
    return answer;
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

    if (d1.valid())
        d1.show();
    else {
        cout << "Invalid input. Please try again:" << endl;
        using_classes();
    }
}

int main ()
{
    using_classes();
    return 0;
}