// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
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

int main()
{
    return 0;
}