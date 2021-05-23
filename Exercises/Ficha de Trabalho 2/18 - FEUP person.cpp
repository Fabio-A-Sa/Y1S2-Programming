// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

class FEUP_person {

    public:

        FEUP_person();
        FEUP_person(string name, int upCode);
        int getUpCode();
        string getName();

    private:

        string name;
        int upCode;
};

FEUP_person::FEUP_person() {
    name = "";
    upCode = 0;
}

FEUP_person::FEUP_person(string name, int upCode) {
    this -> name = name;
    this -> upCode = upCode;
}

string FEUP_person::getName() { return name; }
int FEUP_person::getUpCode() { return upCode; }

int main ()
{
    return 0;
}