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
        Product(int quantity, string description);
        int getId();
        int getQuantity();
        string getDescription();

    private:

        static int identify;
        int id;
        int quantity;
        string description;
};

int Product::identify = 1;

Product::Product() {
    identify++;
    id = identify;
    quantity = 0;
    string description = "UNKNOWN";
}

Product::Product(int quantity, string description) {
    identify++;
    id = identify;
    this -> quantity = quantity;
    this -> description = description;
}

int Product::getId() { return id; }
int Product::getQuantity() { return quantity; }
string Product::getDescription() { return description; }

class Inventory
{
    public:

        Inventory();
        vector<Product> getInventory();
        void includeProduct(Product product);
        void showInventory();

    private:

        vector<Product> products;

};

Inventory::Inventory() {
    products = {};
}

vector<Product> Inventory::getInventory() {
    return products;
}

void Inventory::includeProduct(Product product) {
    products.push_back(product);
}

void Inventory::showInventory() {
    for (auto product : products) {
        cout << "Product: " << product.getDescription() << " and quantity: " << product.getQuantity() << endl;
    }
}

void test()
{
    
}

int main()
{
    test();
    return 0;
}