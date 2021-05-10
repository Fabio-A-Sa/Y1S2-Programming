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

class Invoice {

    public:
        Invoice();
        Invoice(vector<Item> items, Client client);
        void printInvoice();

    private:
        vector<Item> items;
        Client client;
};

Invoice::Invoice(vector<Item> items, Client client) {
    this -> items = items;
    this -> client = client;
}

void Invoice::printInvoice() {

    cout << client.getName() << endl;
    cout << client.getAdress() << endl << endl;
    cout << "Description --> Price --> QTY --> Total" << endl;
    cout << "---------------------------------------" << endl;
    for (Item item : items) {
        cout << item.getQuantity() << endl;
    }
}

void test() {

    vector<Item> items;
    Client client = Client("DEI  - FEUP", "Rua Roberto Frias");
    
    Product product1 = Product(999, "Computer");
    Product product2 = Product(89, "Printer");
    Product product3 = Product(2, "Bolachas");
    Item item1 = Item(product1, 10); items.push_back(item1);
    Item item2 = Item(product2, 3); items.push_back(item2);
    Item item3 = Item(product3, 90); items.push_back(item3);
    Invoice invoice = Invoice(items, client);
    invoice.printInvoice();
}

int main ()
{
    test();
    return 0;
}