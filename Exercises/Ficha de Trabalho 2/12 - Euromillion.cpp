// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include <ctime>
using namespace std;

vector<int> main_numbers, lucky_stars;

void initialize() {
    
    for (int number = 1 ; number < 51 ; number ++) {
        main_numbers.push_back(number);
    }
    for (int number = 1 ; number < 13 ; number ++) {
        lucky_stars.push_back(number);
    }
}

class Bet
{
    public:

        Bet();
        void fill_numbers();
        void show_numbers();
    
    private:

        vector<int> main;
        vector<int> stars;
};

Bet::Bet() {
    main = {};
    stars = {};
    fill_numbers();
}

void Bet::fill_numbers() {
    
    random_shuffle(main_numbers.begin(), main_numbers.end());
    random_shuffle(lucky_stars.begin(), lucky_stars.end());
    
    for (int i = 0 ; i < 5 ; i++ ) {
        main.push_back(main_numbers[i]);
    }

    // Using lucky_stars vector
    for (int j = 0 ; j < 2 ; j++ ) {
        stars.push_back(lucky_stars[j]);
    }
}   

void Bet::show_numbers() {
    
    cout << "Main numbers: ";
    for (int number : main) {
        cout << number << " ";
    }
    cout << endl << "Lucky numbers: ";
    for (int number : stars) {
        cout << number << " ";
    }
}

int main ()
{   
    srand(time(NULL));
    initialize();

    Bet b1;
    b1.show_numbers();

    return 0;
}