// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
using namespace std;

struct EuroMillionsBet {
    vector<unsigned> mainNumbers;
    vector<unsigned> luckStars;
};

void generate_random(EuroMillionsBet key) {


}

int main ()
{
    // Generate randoms key:
    EuroMillionsBet random_key;
    random_key.luckStars = {};
    random_key.mainNumbers = {};
    generate_random(random_key);

    // Input users key:

    
    return 0;
}

