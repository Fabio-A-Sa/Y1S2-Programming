// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <limits>
#include <fstream>
#include <algorithm>

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
        int weightShortExam = 20, weightProject = 30, weightExam = 50;
        double shortExam, project, exam;
        int finalGrade;

} ;

Student::Student()
{
    code = "";
    name = "";
    shortExam = 0;
    project = 0;
    exam = 0;
    finalGrade = 0;
}

Student::Student(const string &code, const string &name) {

    this -> code = code;
    this -> name = name;
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
    getline(cin, scode);
    cout << "Student name? ";
    getline(cin, sname);
    Student student = Student(scode, sname);
    cout << "Short exam grade? ";
    cin >> segrade;
    cout << "Project grade? ";
    cin >> pgrade;
    cout << "Exam grade? ";
    cin >> egrade;
    student.setGrades(segrade, pgrade, egrade);
    int number = student.getFinalGrade();
    student.setFinalGrade(number);

    string answer = student.isApproved() ? "You are approved" : "You are not approved";
    cout << answer << endl;
    all_students.push_back(student);
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void show_data(vector<Student> all_students) {

    cout << "\nAll data: " << endl;
    cout << "Show data using STL sort() ascending grade algorithm: " << endl;
    sort(all_students.begin(), all_students.end(), [](Student const & a, Student const & b) -> bool { return a.getFinalGrade() < b.getFinalGrade(); } );
    for (Student student : all_students) {
        cout << student.getName() << " --> Final grade: " << student.getFinalGrade() ;
        string answer = student.isApproved() ? " --> Passed" : " --> Not passed";
        cout << answer << endl;
    }
    cout << endl << "\nAll data: " << endl;
    cout << "Show data using STL sort() ascending name algorithm: " << endl;
    sort(all_students.begin(), all_students.end(), [](Student const & a, Student const & b) -> bool { return a.getName() < b.getName(); } );
    for (Student student : all_students) {
        cout << student.getName() << " --> Final grade: " << student.getFinalGrade() ;
        string answer = student.isApproved() ? " --> Passed" : " --> Not passed";
        cout << answer << endl;
    }
}

void showAboveAverageStudents(vector<Student> all) {
    
    int total = 0;
    for (Student student : all) {
        total = total + student.getFinalGrade();
    }
    int average = floor(total / all.size());
    cout << "Grades Average: " << average << endl;
}

void manual() {

    vector<Student> all_students;
    char answer;
    do  {   

        readStudentsData(all_students);
        cout << "Continue ? Y/N: ";
        cin >> answer;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        } while (tolower(answer) != 'n');
    
    show_data(all_students);
}

void using_files() {

    ifstream file;
    string current_line;
    vector<Student> all_students;

    file.open("Files\\Students.txt");
    while (!file.eof()) {
        
        vector<string> things;
        getline(file, current_line);
        int i = 0;
        string current_thing;
        while (i != current_line.size()) {

            if (current_line[i] != ';') {
                current_thing += current_line[i];
            }
            else {
                things.push_back(current_thing);
                current_thing = "";
            }
            i++;
        }

        things.push_back(current_thing);
        
        string code = things[0];
        string name = things[1];
        Student student = Student(code, name);
        int seg = stod(things[2]);
        int pg = stod(things[3]);
        int eg = stod(things[4]);
        student.setGrades(seg, pg, eg);

        all_students.push_back(student);

    }

    show_data(all_students);

    file.close();
}

int main()
{
    manual(); 
    using_files();
    return 0;
}