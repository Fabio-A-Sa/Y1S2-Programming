// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Product
{
    public:

        Product();
        Product(int id, int quantity, string description);
        int getId();
        int getQuantity();
        string getDescription();

    private:

        int id;
        int quantity;
        string description;
};

Product::Product() {
    id = 0;
    quantity = 0;
    string description = "";
}

Product::Product(int id, int quantity, string description) {
    this -> id = id;
    this -> quantity = quantity;
    this -> description = description;
}

int Product::getId() {return id; }
int Product::getQuantity() {return quantity; }
string Product::getDescription() {return description; }

class Inventory
{
    public:

    private:
};

int main()
{
    return 0;
}