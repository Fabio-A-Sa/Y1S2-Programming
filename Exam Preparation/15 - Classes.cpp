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

Person::Person(int age, char gender,)

int main ()
{   
    Person P = Person(18, 'M', "FEUP", "Fabio");
    cout << p.getName();
    return 0;
}
