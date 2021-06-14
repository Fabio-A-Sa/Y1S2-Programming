// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 142 of Lectures Material

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

typedef unsigned long long int IdNum;

struct FEUP {

    int students;
    double price;
};

int main ()
{   
    // Normal
    FEUP faculty;
    faculty.students = 4300;
    faculty.price = 697.00;
    cout << faculty.price << " " << faculty.students << endl;

    // Using pointers
    FEUP * f;
    f = (FEUP *) malloc (sizeof(FEUP));
    f->students = 3287;
    f->price = 700.02;
    cout << (*f).price << " " << f->students << endl; // Note: *p.location make an error!
    free(f);

    // using typedef
    IdNum number = 516516516;
    cout << "Typedef number: " << number << endl;

    // Using struct + typedef
    typedef struct {
        char gender;
        int number;
    } Person;

    Person Fabio = {'M', 18};
    cout << Fabio.gender << " " << Fabio.number << endl;

    return 0;
}