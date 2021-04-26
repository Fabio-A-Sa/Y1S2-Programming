// Created on April 26, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 15, pages 170 --> ???

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void normalization() {

    string input = "      March    25      , 2014      ";
    string month, comma;
    int day, year;

    istringstream istr(input);
    istr >> month >> day >> comma >> year;
    cout << month << " " << day << comma << " " << year << endl;
}

int main ()
{
    normalization();
    return 0;
}



