// Created on April, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

struct Address {
    string street;
    int door_number;
    string city;
};

struct Person {
    string name;
    // int age;
    // char gender;
    // struct Address address;
};

int main ()
{   
    ifstream file;
    file.open("C:\\Users\\farau\\Desktop\\Repositórios\\Y1S2-Programming\\Exercises\\Ficha de Trabalho 1\\5 - Strings, Structs, Stringstreams, Files\\Files\\Persons.txt");
    vector<Person> all_persons;

    while (file) {
        Person person;
        getline(cin, person.name);
        all_persons.push_back(person);
    }
    file.close();

    for (Person p : all_persons) {
        cout << p.name << endl;
    }

    return 0;
}