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

void test() {

    Student me = Student("202007658", "Fábio Araujo de Sá");

}

int main()
{
    test();
    return 0;
}