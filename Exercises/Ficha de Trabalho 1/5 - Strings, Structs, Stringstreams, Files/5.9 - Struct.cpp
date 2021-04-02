// Created on April, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Address {
    string street;
    int door_number;
    string city;
};

struct Person {
    string name;
    int age;
    char gender;
    struct Address address;
};

int main ()
{   
    Person me;
    me.name = "Fabio Sa";
    me.age = 18;
    me.gender = 'M';
    me.address.street = "Rua Dr. Roberto Frias";
    me.address.door_number = 9;
    me.address.city = "Porto";

    return 0;
}