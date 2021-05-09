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
        void showData();

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

int Date::getDay() {
    return day;
}

class Person {

    public:    



    private:

};

int main ()
{
    return 0;
}