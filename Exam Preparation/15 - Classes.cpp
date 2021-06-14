// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 178 of Lectures Material

#include <iostream>
#include <string>
using namespace std;

class Person {
    
    public:
        Person();
        Person(int age, char gender, string faculty, string name);
        void setAge(int age);
        void setGender(char gender);
        void setFaculty(string faculty);
        void setName(string name);
        int getAge();
        char getGender();
        string getFaculty();
        string getName();

    private:
        int age;
        char gender;
        string faculty;
        string name;
};

Person::Person() {
    age = 0;
    gender = ' ';
    faculty = "";
    name = "";
}

Person::Person(int age, char gender, string faculty, string name) {
    this -> age = age;
    this -> gender = gender;
    this -> faculty = faculty;
    this -> name = name;
}

void Person::setAge(int age) { this -> age = age ; }
void Person::setGender(char gender) { this -> gender = gender ; }
void Person::setFaculty(string faculty) { this -> faculty = faculty ; }
void Person::setName(string name) { this -> name = name ; }

int Person::getAge() { return age; }
char Person::getGender() { return gender; }
string Person::getFaculty() { return faculty; }
string Person::getName() { return name; }

int main ()
{   
    Person P = Person(18, 'M', "FEUP", "Fabio");
    cout << P.getName();
    return 0;
}