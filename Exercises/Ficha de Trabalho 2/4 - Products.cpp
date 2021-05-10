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

class Product {

    public:
        Product();
        Product(double price, string description);
        string getDescription();
        double getPrice();

    private:
        string description;
        double price;
};

Product::Product(double price, string description) {
    this -> price = price;
    this -> description = description;
}

string Product::getDescription() { return description; }
double Product::getPrice() { return price; }

class Item {

    public:
        Item();
        Item(Product product, int quantity);
        int getQuantity();

    private:
        Product product;
        int quantity;
};

Item::Item(Product product, int quantity) {
    this -> product = product;
    this -> quantity = quantity;
} 

int Item::getQuantity() { return quantity; }

void test() {

}

int main ()
{
    test();
    return 0;
}