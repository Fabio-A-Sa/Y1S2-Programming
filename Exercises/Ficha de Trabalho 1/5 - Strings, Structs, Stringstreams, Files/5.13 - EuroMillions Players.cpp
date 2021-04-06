// Created on April, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

struct User {

    vector<unsigned> numbers;
    string name;
};

bool notInside(vector<unsigned> v, unsigned int value) {

    bool flag = true;
    for (unsigned int index = 0 ; index < v.size() ; index++ ) {
        flag = flag && (v[index] != value) ;
    }
    return flag;
}

void generate_random(vector<unsigned> &key) {

    int counter = 0;
    while (counter != 5) {
        unsigned int guess = rand() % 51;
        if (notInside(key, guess)) {
            key.push_back(guess);
            counter++;
        }
    }

    counter = 0;
    while (counter != 2) {
        unsigned int guess = rand() % 13;
        if (notInside(key, guess)) {
            (key).push_back(guess);
            counter++;
        }
    }
}

int main ()
{
    string file_name = "euromillions_bet.txt";
    string new_file_name = "euromillions_bet_results.txt";
    vector<User> all_users;
    vector<unsigned> key;
    generate_random(key);
    
    ifstream bet;
    string current_line;
    bet.open(file_name);

    while (!bet.eof()) {

        User current_user;
        getline(bet, current_line);
        current_user.name = current_line;
        getline(bet, current_line);
        
        istringstream new_line (current_line);
        int numbers = 7;
        while (numbers) {

            int number;
            new_line >> number;
            current_user.numbers.push_back(number);
            numbers--;
        }

        all_users.push_back(current_user);
    }

    for (User user : all_users) {
        cout << user.name << endl;
        for (int number : user.numbers) {
            cout << number << endl;
        }
    }
    return 0;
}