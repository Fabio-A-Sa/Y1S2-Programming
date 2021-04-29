// Created on April 29, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 16, pages 177 --> ???

#include <iostream>
#include <array>
#include <string>
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

int main ()
{
    return 0;
}