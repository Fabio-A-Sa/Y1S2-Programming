// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 339 of Lectures Material

#include <iostream>
#include <string>
using namespace std;

class FEUPerson {
    
    public:
        FEUPerson();
        FEUPerson(string, int);
        void setName(string name) { this -> name = name ; }
        void setUP(int UP) { this -> UP = UP ; };
        string getName() { return name ; };

    protected:
        string name;
        int UP;
};

int main ()
{
    return 0;
}