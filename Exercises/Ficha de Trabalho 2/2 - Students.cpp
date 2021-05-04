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
        void setGrades(double shortExam, double project, double exam);
        string getCode() const;
        string getName() const;
        int getFinalGrade() const;
        bool isApproved() const;
        static int weightShortExam, weightProject, weightExam;

    private:

        string code;
        string name;
        double shortExam, project, exam;
        int finalGrade;

} ;

void Student::setGrades(double shortExam, double project, double exam) {

    int result = floor(weightExam * exam + project * weightProject + shortExam * weightShortExam);
    finalGrade = result;
    // Static --> Não muda de valor ao longo da implementação do código
}

int main()
{
    return 0;
}