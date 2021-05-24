// Created on May 24, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 23, pages 285 --> ???

#include <iostream>
#include <vector>
#include <string>
#include <random>

using namespace std;

namespace test {
    void cout(int number);
    void getRandomNumber();
}

void test::cout(int number) {
    std::cout << "Int number: " << number << std::endl;
}

void test::getRandomNumber() {
    std::cout << "Random Number: " << rand() % 100 << endl;
}

int main ()
{
    srand(time(NULL));
    test::getRandomNumber();
    return 0;
}