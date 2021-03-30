// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
using namespace std;

struct Address {
    string street;
    int door_number;
    string city;
};

int main ()
{
    Address FEUP;
    FEUP.street = "Rua Dr Roberto Frias";
    FEUP.door_number = 145;
    FEUP.city = "Porto";
    return 0;
}