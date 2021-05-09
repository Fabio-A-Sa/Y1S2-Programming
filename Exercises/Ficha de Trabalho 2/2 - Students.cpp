// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

class Student {
    
    public:

        Student();
        Student(const string &code, const string &name);
        void setAtributes();
        void setGrades(double shortExam, double project, double exam);
        string getCode() const;
        string getName() const;
        int getFinalGrade() const;
        bool isApproved() const;
        void readStudentData(vector<Student> all_students);

    private:

        string code;
        string name;
        static int weightShortExam, weightProject, weightExam;
        double shortExam, project, exam;
        int finalGrade;

} ;

Student::Student(const string &code, const string &name) {

    this -> code = code;
    this -> name = name;
}

void Student::setAtributes() {

    this -> weightExam = 50;
    this -> weightProject = 30;
    this -> weightShortExam = 20;
}

void Student::setGrades(double shortExam, double project, double exam) {

    this -> shortExam = shortExam;
    this -> project = project;
    this -> exam = exam;
}

string Student::getCode() const {
    return code;
}

string Student::getName() const {
    return name;
}

int Student::getFinalGrade(double shortExam, double project, double exam) {

    int result = floor( ( weightExam * exam + project * weightProject + shortExam * weightShortExam ) / 100);
    finalGrade = result;
    return result;
}

void Student::readStudentData(vector<Student> &all_students) {

    Student student;
    string scode, sname;
    int segrade, pgrade, egrade;
    cout << "Student code? ";
    cin >> scode;
    cout << "Student name? ";
    getline(cin, sname);
    cout << "Short exam grade? ";
    cin >> segrade;
    cout << "Project grade? ";
    cin >> pgrade;
    cout << "Exam grade? ";
    cin >> egrade;

    student.setAtributes();
    all_students.push_back(student);
}


int main()
{
    vector<Student> all_students;

    return 0;
}