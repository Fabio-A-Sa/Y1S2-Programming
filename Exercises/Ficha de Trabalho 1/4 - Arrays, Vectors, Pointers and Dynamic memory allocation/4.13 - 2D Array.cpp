// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <cstddef>
using namespace std;

// Falta adicionar os pointers e a alocação dinâmica de memória --> Ver mais tarde

void fill_grades(vector< vector<int> > &grade, size_t numberStudents, size_t numberQuizzes) {
    
    for (size_t st_num = 0; st_num < numberStudents; st_num++) {
        vector<int> studentGrade;
        for (size_t quiz_num = 0; quiz_num < numberQuizzes; quiz_num++) {
            studentGrade.push_back(10 + rand() % 11);
        }
        grade.push_back(studentGrade);
    }
}

void compute_st_ave(const vector< vector<int> > &grade, vector<double> &st_ave, size_t numberStudents, size_t numberQuizzes) {

    for (size_t st_num = 0; st_num < numberStudents; st_num++) {
        double sum = 0;
        for (size_t quiz_num = 0; quiz_num < numberQuizzes; quiz_num++) {
            sum = sum + grade[st_num][quiz_num];
        }
        st_ave.push_back(sum/numberQuizzes);
    }
}

void compute_quiz_ave(const vector< vector<int> > &grade, vector<double> &quiz_ave, size_t numberStudents, size_t numberQuizzes) {
    
    for (size_t quiz_num = 0; quiz_num < numberQuizzes; quiz_num++) {
        double sum = 0;
        for (size_t st_num = 0; st_num < numberStudents; st_num++) {
            sum = sum + grade[st_num][quiz_num];
        }
        quiz_ave.push_back(sum/numberStudents);
    }
}
    
void display(const vector< vector<int> > &grade, const vector<double> &st_ave, const vector<double> &quiz_ave, size_t numberStudents, size_t numberQuizzes) {

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << setw(10) << "Student" << setw(5) << "Ave" << setw(15) << "Quizzes\n";

    for (size_t st_num = 0; st_num < numberStudents; st_num++) {
        cout << setw(10) << st_num + 1 << setw(5) << st_ave[st_num] << " ";
        for (size_t quiz_num = 0; quiz_num < numberQuizzes; quiz_num++) {
            cout << setw(5) << grade[st_num][quiz_num];
        }
        cout << endl;
    }

    cout << "Quiz averages = ";
    for (size_t quiz_num = 0; quiz_num < numberQuizzes; quiz_num++) {
        cout << setw(5) << quiz_ave[quiz_num];
    }
    cout << endl;
}

int main ()
{
    vector< vector<int> > grade;
    vector<double> st_ave;
    vector<double> quiz_ave;
    size_t numberStudents, numberQuizzes;

    cout << "Number of students ? "; 
    cin >> numberStudents;
    cout << "Number of quizzes ? "; 
    cin >> numberQuizzes;

    fill_grades(grade,numberStudents,numberQuizzes);
    compute_st_ave(grade, st_ave, numberStudents, numberQuizzes);
    compute_quiz_ave(grade, quiz_ave, numberStudents, numberQuizzes);
    display(grade, st_ave, quiz_ave, numberStudents, numberQuizzes);

    return 0;
}