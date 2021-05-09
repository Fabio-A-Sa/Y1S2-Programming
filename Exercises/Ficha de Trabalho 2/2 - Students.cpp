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
        void setFinalGrade(int result);
        bool isApproved() const;

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

void Student::setFinalGrade(int number) {
    finalGrade = number;
}

int Student::getFinalGrade() const{

    int result = floor( ( weightExam * exam + project * weightProject + shortExam * weightShortExam ) / 100);
    return result;
}

bool Student::isApproved() const {
    
    bool answer = finalGrade < 10 ? false : true;
    return answer;
}

void readStudentsData (vector<Student> &all_students) {

    string scode, sname;
    int segrade, pgrade, egrade;
    cout << "Student code? ";
    cin >> scode;
    cout << "Student name? ";
    getline(cin, sname);
    Student student = Student(scode, sname);
    cout << "Short exam grade? ";
    cin >> segrade;
    cout << "Project grade? ";
    cin >> pgrade;
    cout << "Exam grade? ";
    cin >> egrade;
    student.setAtributes();
    student.setGrades(segrade, pgrade, egrade);
    student.setFinalGrade(student.getFinalGrade());

    string answer = student.isApproved() ? "You are approved" : "You are not approved";
    cout << answer << endl;
    all_students.push_back(student);
}

void show_data(vector<Student> all) {

    cout << "All data: " << endl;
    for (Student student : all) {
        cout << student.getName() << " " << student.isApproved() << endl;
    }
}

int main()
{
    vector<Student> all_students;
    char answer;
    do  {   

        readStudentsData(all_students);
        cout << "Continue ? Y/N: ";
        cin >> answer;

        } while (tolower(answer) != 'n');
    
    show_data(all_students);
    return 0;
}