// Created on April, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctime>
#include <iomanip>
using namespace std;

struct Person {
    string number;
    string name;
};

void create_random_phone_list (string name, int value) {

    ofstream new_file;
    new_file.open(name);
    ifstream names_file;
    names_file.open("Files\\random_names.txt");

    // Store all names into a vector
    vector<string> all_names;
    string current_name;
    while (!names_file.eof()) {
        names_file >> current_name;
        all_names.push_back(current_name);
    }

    // Create random number and random names
    while (value) {

        string number = "";
        number += '9';
        while (number.size() < 9) {
            int digit = rand() % 10;
            number += to_string(digit);
        }
        string first_name = all_names[rand() % all_names.size()];
        string last_name = all_names[rand() % all_names.size()];
        if (value == 1)
            new_file << number << " " << first_name << " " << last_name;
        else
            new_file << number << " " << first_name << " " << last_name << endl;
        value--;
    }
    
    new_file.close();
}

void menu (vector<Person> &persons) {
    
    char answer;
    while (tolower(answer) != 'q') {

        cout << "Menu:" << endl;
        cout << "1 - Add a new person" << endl;
        cout << "2 - Remove a record of a existing person" << endl;
        cout << "3 - Modify the phone number associater with an existing person" << endl;
        cout << "4 - Search for number of a given person" << endl;
        cout << "Q - Quit" << endl;
        cin >> answer;

        while (tolower(answer) != '1' && ) {

        }

        if (tolower(answer) != 'q')
    }
}

int main ()
{       
    srand(time(NULL));
    int value;
    string file_name = "random_phone_list.txt";
    cout << "How many numbers? ";
    cin >> value;

    create_random_phone_list(file_name, value);

    vector<Person> all_persons;
    ifstream phone_list;
    string current_line;
    phone_list.open("random_phone_list.txt");
    while (!phone_list.eof()) {
        getline(phone_list, current_line);
        string number = current_line.substr(0, 9);
        string name = current_line.substr(10, current_line.size()-10);

        Person person;
        person.name = name;
        person.number = number;
        all_persons.push_back(person);
    }
    phone_list.close();
    	
    menu(all_persons);

    ofstream new_file;
    new_file.open("random_phone_list.txt");
    for (Person person : all_persons)

    return 0;
}