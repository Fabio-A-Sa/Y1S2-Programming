// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include <ctime>
#include <set>
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

    // Fill using lucky_stars vector (a)
    for (int j = 0 ; j < 2 ; j++ ) {
        stars.push_back(lucky_stars[j]);
    }
    for (int i = 0 ; i < 5 ; i++ ) {
        main.push_back(main_numbers[i]);
    }

    //Fill using STL set (b)
    set<int> numbers;
    while (numbers.size() < 5) {
        int next_attemp = rand() % 51;
        numbers.insert(next_attemp);
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