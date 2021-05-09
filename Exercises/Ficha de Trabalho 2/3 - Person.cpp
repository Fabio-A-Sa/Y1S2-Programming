// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Date {

    public: 
        Date();
        Date(int day, int month, int year);
        int getDay();
        int getYear();
        int getMonth();
        void showDate();

    private:
        int day;
        int month;
        int year;
};

Date::Date(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

int Date::getDay() { return day; }
int Date::getMonth() { return  month; }
int Date::getYear() { return year; }

void Date::showDate() {
    cout << year << "/" << month << "/" << day;
}

class Person {

    public:    
        Person();
        Person(string name, char gender, Date birthday);
        string getName();
        char getGender();
        string getBirth();

    private:
        string name;
        char gender;
        Date birthday;

};

int main ()
{
    return 0;
}