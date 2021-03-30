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

bool isInside (vector<unsigned> vector, unsigned int attemp) {

    bool flag = true;
    for (unsigned int number : vector)
        flag = flag && (number != attemp);
    return flag;
}

void generate_random(EuroMillionsBet key) {

    // Numbers (5)
    int counter = 0;
    while (counter != 5) {
        unsigned int guess = rand() % 51;
        if (!isInside(key.mainNumbers, guess)) {
            key.mainNumbers.push_back(guess);
            counter++;
        }
    }
    // Lucky Stars (2)
    counter = 0;
    while (counter != 2) {
        unsigned int guess = rand() % 13;
        if (!isInside(key.luckStars, guess)) {
            key.luckStars.push_back(guess);
            counter++;
        }
    }
}

int main ()
{
    // Input users key:
    EuroMillionsBet user_key;
    int counter = 0;
    while (counter != 5) {
        
    }

    // Generate randoms key:
    srand(time(NULL));
    EuroMillionsBet random_key;
    random_key.luckStars = {};
    random_key.mainNumbers = {};
    generate_random(random_key);
    return 0;
}

