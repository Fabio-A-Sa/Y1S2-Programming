// Created on April, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Person {

    string name;
    int age;
    char gender;
    struct Address  {

        string street;
        int door_number;
        string city;
    };
    Address address;
};

bool notInVector (vector<string> vec , string attemp) {
    
    for (string item : vec) {
        if (item == attemp) {
            return false;
        }
    }
    return true;
}

void remove_duplicates(vector<string> &streets) {

    vector<string> without_duplicates;
    for (string street : streets) {
        if (notInVector(without_duplicates, street)) {
            without_duplicates.push_back(street);
        }
    }
    streets = without_duplicates;
}

void input_data (vector<Person> &all_persons) {

    char answer;
    struct Person Address;

    while (answer != 'q' || answer != 'Q') {

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
    vector<string> all_streets;
    input_data (all_persons);
    
    string city;
    cout << "City to search: ";
    cin >> city;

    for (Person person : all_persons) {
        if (person.address.city == city) {
            same_city.push_back(person);
            all_streets.push_back(person.address.street);
        };
    }
    
    remove_duplicates(all_streets);

    cout << "City: " << city << endl;
    for (string street : all_streets) {
        cout << "Street: " << street << endl;
        for (Person person : same_city) {
            if (person.address.street == street) {
                cout << "- " << person.name << endl;        
            }
        }
    }

    return 0;
}