// Created on April, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctime>
#include <iomanip>
using namespace std;

void create_random_phone_list (string name, int value) {

    ofstream new_file;
    new_file.open(name);
    ifstream names_file;
    names_file.open("Files\\random_names.txt");

    vector<string> all_names;
    string current_name;
    while (!names_file.eof()) {
        names_file >> current_name;
        all_names.push_back(current_name);
    }

    int counter = 0;
    while (counter != value) {

        string number = "";
        number += '9';
        while (number.size() < 9) {
            int digit = rand() % 10;
            number += to_string(digit);
        }
        string first_name = all_names[rand() % all_names.size()];
        string last_name = all_names[rand() % all_names.size()];
        if (counter + 1 == value)
            new_file <<setfill(' ') << setw(4) << counter + 1 << ":  " << number << "  " << first_name << " " << last_name;
        else
            new_file <<setfill(' ') << setw(4) << counter + 1 << ":  " << number << "  " << first_name << " " << last_name << endl;
        counter ++;
    }
    
    new_file.close();
}

int main ()
{       
    srand(time(NULL));
    int value;
    string file_name = "random_phone_list.txt";
    cout << "How many numbers? ";
    cin >> value;

    create_random_phone_list(file_name, value);

    return 0;
}