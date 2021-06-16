// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 339 of Lectures Material

#include <iostream>
#include <string>
using namespace std;

class FEUPerson {
    
    public:

        FEUPerson() { this-> name = "UNKNOWN" ; this -> UP = 0 ; }
        FEUPerson(string name, int UP) { this -> name = name ; this -> UP = UP ; }
        void setName(string name) { this -> name = name ; }
        void setUP(int UP) { this -> UP = UP ; }
        string getName() { return name ; }
        int getUP() { return UP ; }

    protected:

        string name;
        int UP;
};

int main ()
{
    return 0;
}