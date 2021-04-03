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

void input_data (vector<Person> &all_persons) {

    char answer;

    while (tolower(answer) != 'q') {

        Person person;
        cout << "Name: ";
        cin >> person.name;
        cout << "Age: ";
        cin >> person.age;
        cout << "Gender: ";
        cin >> person.gender;
        cout << "Street: ";
        cin >> person.address.street;
        cout << "Door number: ";
        cin >> person.address.door_number;
        cout << "City: ";
        cin >> person.address.city;
        all_persons.push_back(person);

        cout << "Press 'Q' to quit or another letter to continue.";
        cin >> answer;
    }
}

int main ()
{   
    vector<Person> all_persons;
    vector<Person> same_city;
    input_data (all_persons);
    
    string city;
    cout << "City to search: ";
    cin >> city;

    for (Person person : all_persons) {
        if (person.address.city == city) {
            same_city.push_back(person);
        };
    }

    for (Person person : all_persons) {
        
    }
    return 0;
}