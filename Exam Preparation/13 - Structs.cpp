// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 142 of Lectures Material

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct FEUP {

    string location;
    int students;
    double price;
};

int main ()
{   
    // Normal
    FEUP faculty;
    faculty.location = "Rua Torcato Gomes";
    faculty.students = 4300;
    faculty.price = 697.00;
    cout << faculty.location << " " << faculty.price << " " << faculty.students << endl;

    // Using pointers
    FEUP * f;
    f = (FEUP *) malloc(sizeof(FEUP));
    f->location = "Rua da Silva";
    f->students = 3287;
    f->price = 700;
    cout << f->price << " " << f->price << " " << f->price << endl; // Note: *p.location make an error!
    free(f);
    return 0;
}