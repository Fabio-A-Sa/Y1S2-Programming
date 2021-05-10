// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Client {

    public:
        Client();
        Client(string name, string adress);
        string getAdress();
        string getName();

    private:
        string name;
        string adress;

};

Client::Client(string name, string adress) {
    this -> name = name;
    this -> adress = adress;
}

string Client::getName() { return name; }
string Client:: getAdress() { return adress; }

int main ()
{
    return 0;
}