// Created on April, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctime>
#include <limits>
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

bool exists (vector<Person> persons, string name) {

    for (Person person : persons) {
        if (person.name == name)
            return true;
    }
    return false;
}

void option_1 (vector<Person> &persons) {

    cout << "Input a new record in phone numbers" << endl;
    string name, phone_number;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Person name: ";
    getline(cin, name);
    cout << name << "'s phone number: ";
    cin >> phone_number;

    Person new_person;
    new_person.name = name;
    new_person.number = phone_number;
    persons.push_back(new_person);
}

void option_2 (vector<Person> &persons) {

    cout << "Delete the record of an existing person" << endl;
    string name;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Name: ";
    getline(cin, name);

    if ( exists (persons, name) ) {
        vector<Person> clone;
        for (Person person : persons) {
            if (person.name != name) {
                clone.push_back(person);
            }
        }
        persons = clone;
    }       
    else {
        cout << "This name not exists in current phone list" << endl;
    }
}   

void option_3 (vector<Person> &persons) {

    cout << "Modify a phone number associated an existing person" << endl;
    string name;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Name: ";
    getline(cin, name);

    string new_number;
    if ( exists (persons, name) ) {
        for (Person &person : persons) {
            if (person.name == name) {
                cout << "Enter a new phone number: ";
                cin >> new_number;
                person.number = new_number;
                break;
            }
        }
    }       
    else {
        cout << "This name not exists in current phone list" << endl;
    }   
}

void option_4 (vector<Person> &persons) {

    string name;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Search the phone number of person: ";
    getline(cin, name);

    if ( exists (persons, name) ) {
        for (Person person : persons) {
            if (person.name == name) {
                cout << name << "'s number is " << person.number << endl;
                break;
            }
        }
    }       
    else {
        cout << "This name not exists in current phone list" << endl;
    }  
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
        cout << "Your choice: ";
        cin >> answer;

        while (tolower(answer) != '1' && tolower(answer) != '2' && tolower(answer) != '3' && 
                tolower(answer) != '4' && tolower(answer) != 'q' ) {
                
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Input error. Please try again: ";
                cin >> answer;
        }

        if (tolower(answer) == 'q') 
            break;

        else {
            
            switch (answer)
            {
                case '1':
                    option_1 (persons);
                    break;

                case '2':
                    option_2 (persons);
                    break;

                case '3':
                    option_3 (persons);
                    break;

                case '4':
                    option_4 (persons);
                    break;

                default:
                    break;
            }
        }

        cout << "Continue? Q to Quit or another letter to continue: ";
        cin >> answer;
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
    new_file << all_persons[0].number << " " << all_persons[0].name;
    for (int index = 1 ; index < all_persons.size() ; index ++ ) {
        new_file << endl << all_persons[index].number << " " << all_persons[index].name;
    }
    cout << "Stored all modified data in current file radom_phone_list.txt" << endl;

    return 0;
}