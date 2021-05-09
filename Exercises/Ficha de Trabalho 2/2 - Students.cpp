// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <cmath>
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
        void readStudentData();

    private:

        string code;
        string name;
        static int weightShortExam, weightProject, weightExam;
        double shortExam, project, exam;
        int finalGrade;

} ;

void Student::setAtributes() {
    this -> weightExam = 50;
    this -> weightProject = 30;
    this -> weightShortExam = 20;
}

void Student::setGrades(double shortExam, double project, double exam) {

    int result = floor( ( weightExam * exam + project * weightProject + shortExam * weightShortExam ) / 100);
    finalGrade = result;
}

void Student::readStudentData() {

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

}


int main()
{
    return 0;
}