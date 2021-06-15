// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 178 of Lectures Material

#include <iostream>
#include <string>
using namespace std;

typedef unsigned int ID;

class Person {
    
    public:
        Person();
        ~Person();
        Person(int age, char gender, string faculty, string name);
        void setAge(int age);
        void setGender(char gender);
        void setFaculty(string faculty);
        void setName(string name);
        int getAge();
        char getGender();
        string getFaculty();
        string getName();
        ID getID();

    private:
        int age;
        char gender;
        string faculty;
        string name;
        static ID numID;
        ID id;
};

ID Person::numID = 0;

Person::Person() {
    age = 0;
    gender = ' ';
    faculty = "";
    name = "UNKNOWN";
    numID++;
    id = numID;
}

Person::Person(int age, char gender, string faculty, string name) {
    this -> age = age;
    this -> gender = gender;
    this -> faculty = faculty;
    this -> name = name;
    numID++;
    id = numID;
}

Person::~Person() { cout << "Desctructor called for " << name << " object!" << endl; }

void Person::setAge(int age) { this -> age = age ; }
void Person::setGender(char gender) { this -> gender = gender ; }
void Person::setFaculty(string faculty) { this -> faculty = faculty ; }
void Person::setName(string name) { this -> name = name ; }

int Person::getAge() { return age; }
char Person::getGender() { return gender; }
string Person::getFaculty() { return faculty; }
string Person::getName() { return name; }
ID Person::getID() { return id; }

int main ()
{   
    Person P = Person(18, 'M', "FEUP", "Fabio");
    cout << P.getName() << endl;
    Person F;
    F.setFaculty("ISEP");
    cout << F.getFaculty() << " " << F.getID() << endl;
    return 0;
}