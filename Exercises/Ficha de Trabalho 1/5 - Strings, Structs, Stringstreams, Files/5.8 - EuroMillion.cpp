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


}

int main ()
{
    // Generate randoms key:
    srand(time(NULL));
    EuroMillionsBet random_key;
    random_key.luckStars = {};
    random_key.mainNumbers = {};
    generate_random(random_key);

    // Input users key:


    return 0;
}

