// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 339 of Lectures Material

#include <iostream>
#include <string>
using namespace std;

class FEUPerson { // Parent Class
    
    public:

        FEUPerson() { this-> name = "UNKNOWN" ; this -> UP = 0 ; }
        FEUPerson(string name, int UP) { this -> name = name ; this -> UP = UP ; }
        void setName(string name) { this -> name = name ; }
        void setUP(int UP) { this -> UP = UP ; }
        string getName() { return name ; }
        int getUP() { return UP ; }

    protected:

        string name;
        int UP;
};

class Student : public FEUPerson { // Child Class

    public:

        Student() { this -> name = "UNKNOWN" ; this -> UP = 0 ; this -> average = 0 ; }
        Student(string name, int UP, double average) { this -> name = name ; this -> UP = UP ; this -> average = average ; }
        double getAverage () { return average ; }
        void setAverage(double average) { this -> average = average ; }
    
    private:

        double average;

};

class Teacher : public FEUPerson { // Child Class

    public:

        Teacher() { this -> name = "UNKNOWN" ; this -> UP = 0 ; this -> course = "UNKNOWN" ; }
        Teacher(string name, int UP, string couse) { this -> name = name ; this -> UP = UP ; this -> course = course ; }
        string getCourse() { return course ; }
        void setCourse(string course) { this -> course = course ; }

    private:

        string course;
};

int main ()
{   
    Student Me = Student("Fabio", 202007658, 15.45);
    cout << Me.getUP();
    Teacher Prof = Teacher("Jorge Silva", 1950, "Programming");
    cout << Prof.getCourse();
    return 0;
}