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
        string showDate();

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

string Date::showDate() {

    string all = to_string(year) + '/' + to_string(month) + '/' + to_string(day);
    return all;
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

Person::Person(string name, char gender, Date b) {
    this -> name = name;
    this -> gender = gender;
    this -> birthday = b;
}

string Person::getName() { return name; }
char Person::getGender() { return gender; }
string Person::getBirth() { return birthday.showDate(); }

void get_data(vector<Person> &all) {

    char answer;
    do  {

        string name;
        char gender;
        int day, year, month;

        cout << "Name: ";
        cin >>

        cout << "Continue? Y/N: ";
        cin >> answer;
        cin.clear();
        cin.ignore();

        } while (tolower(answer) != 'n') ;
}

void show_data(vector<Person> all) {

    for (Person person : all) {
        cout << person.getName() << " " << person.getGender() << " " << person.getBirth() << endl;
    }
}

int main ()
{   
    vector<Person> all_persons = {};
    get_data(all_persons);
    show_data(all_persons);
    return 0;
}