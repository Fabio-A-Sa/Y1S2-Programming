// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

struct EuroMillionsBet {

    vector<unsigned> mainNumbers;
    vector<unsigned> luckStars;
};

bool notInside(vector<unsigned> v, unsigned int value) {

    bool flag = true;
    for (unsigned int index = 0 ; index < v.size() ; index++ ) {
        flag = flag && (v[index] != value) ;
    }
    return flag;
}

void generate_random(EuroMillionsBet &key) {

    int counter = 0;
    while (counter != 5) {
        unsigned int guess = rand() % 51;
        if (notInside(key.mainNumbers, guess)) {
            key.mainNumbers.push_back(guess);
            counter++;
        }
    }

    counter = 0;
    while (counter != 2) {
        unsigned int guess = rand() % 13;
        if (notInside(key.luckStars, guess)) {
            (key.luckStars).push_back(guess);
            counter++;
        }
    }
}

int main ()
{
    // Input user keys:
    EuroMillionsBet user_key;
    int counter = 0;
    unsigned int user_guess;
    while (counter != 5) {
        cout << "Enter a main number " << counter + 1 << " : ";
        cin >> user_guess;
        if (notInside(user_key.mainNumbers, user_guess)) {
            user_key.mainNumbers.push_back(user_guess);
            counter++;
        }
    }
    counter = 0;
    while (counter != 2) {
        cout << "Enter a lucky number " << counter + 1 << " : ";
        cin >> user_guess;
        if (notInside(user_key.luckStars, user_guess)) {
            user_key.luckStars.push_back(user_guess);
            counter++;
        }
    }

    // Generate random keys:
    srand(time(NULL));
    EuroMillionsBet random_key;
    generate_random(random_key);

    // Comparation
    cout << "\nCorrect main numbers: ";
    for (unsigned int guess : user_key.mainNumbers) {
        if (!notInside(random_key.mainNumbers, guess)) {
            cout << guess << " " << endl;
        }
    }
    cout << "\nCorrect lucky stars: ";
    for (unsigned int guess : user_key.luckStars) {
        if (!notInside(random_key.luckStars, guess)) {
            cout << guess << " " << endl;
        }
    }
    return 0;
}