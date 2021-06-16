// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 339 of Lectures Material

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class FEUPerson { // Parent Class
    
    public:

        FEUPerson() { this-> name = "UNKNOWN" ; this -> UP = 0 ; }
        FEUPerson(string name, int UP) { this -> name = name ; this -> UP = UP ; }
        void setName(string name) { this -> name = name ; }
        void setUP(int UP) { this -> UP = UP ; }
        string getName() { return name ; }
        int getUP() { return UP ; }
        virtual void showData() { cout << name << " " << UP << " " << endl ; }

    protected:

        string name;
        int UP;
};

class Student : public FEUPerson { // Child Class

    public:

        Student() : FEUPerson() { this -> average = 0 ; }
        Student(string name, int UP, double average) : FEUPerson (name, UP) { this -> average = average ; }
        double getAverage () { return average ; }
        void setAverage(double average) { this -> average = average ; }
        void showData() { cout << name << " " << UP << " " << average << endl ; }

    private:

        double average;
};

class Teacher : public FEUPerson { // Child Class

    public:

        Teacher() : FEUPerson() { this -> course = "UNKNOWN" ; }
        Teacher(string name, int UP, string course) : FEUPerson (name, UP) { this -> course = course ; }
        string getCourse() { return course ; }
        void setCourse(string course) { this -> course = course ; }
        void showData() { cout << name << " " << UP << " " << course << endl ; }

    private:

        string course;
};

int main ()
{   
    Student *Me = new Student("Fabio", 202007658, 15.45);
    cout << (*Me).getAverage() << endl;
    Teacher *Prof = new Teacher("Jorge Silva", 1913, "Programming");
    cout << (*Prof).getCourse() << endl;

    vector<FEUPerson * > persons(2);
    persons[0] = Me;
    persons[1] = Prof;

    for (auto person : persons) { person -> showData() ; }
    cout << endl;

    // How to determinate which object is in FEUPersons pointer vector? Page 356
    for (auto person: persons) {

        cout << person->getName();
        Teacher *T = dynamic_cast<Teacher *> (person);
        string answer = T == NULL ? " is a Student" : " is a Teacher";
        cout << answer << endl;
    }  

    return 0;
}