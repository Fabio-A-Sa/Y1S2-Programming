// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <vector>
#include <limits>
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

    string all = to_string(year) + '/' + to_string(month) + '/' + to_string(day);
    cout << all << endl;
}

class Person {

    public:    
        Person();
        Person(string name, char gender, Date birthday);
        string getName();
        char getGender();
        void getBirth();

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
void Person::getBirth() { birthday.showDate(); }

void get_data(vector<Person> &all_persons) {

    char answer;
    do  {

        string name;
        char gender, barra;
        int day, year, month;

        cout << "Name: ";
        getline(cin, name);
        cout << "Gender: ";
        cin >> gender;
        cout << "Birthday: day/month/year: ";
        cin >> day >> barra >> month >> barra >> year;

        Date current_date = Date(day, month, year);
        Person current_person = Person(name, gender, current_date);
        all_persons.push_back(current_person);

        cout << "Continue? Y/N: ";
        cin >> answer;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        } while (tolower(answer) != 'n') ;
}

void show_data(vector<Person> all) {

    for (Person person : all) {
        cout << person.getName() << " " << person.getGender() << " ";
        person.getBirth();
        cout << endl;
    }
}

int main ()
{   
    vector<Person> all_persons = {};
    get_data(all_persons);
    show_data(all_persons);
    return 0;
}