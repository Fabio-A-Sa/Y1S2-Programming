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
        bool search(Product product);

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

bool Inventory::search(Product p) {
    for (auto product : products) {
        if (p.getDescription() == product.getDescription() && p.getQuantity() <= product.getQuantity()) {
            return true;
        }
    }
    return false;
}

void test()
{   
    // Initial products
    Inventory i = Inventory();
    Product p1 = Product(10, "Iogurtes");
    Product p2 = Product(3, "Bananas");
    Product p3 = Product(1, "Computador");
    i.includeProduct(p1) ; i.includeProduct(p2) ; i.includeProduct(p3);
    i.showInventory();

    // Search:
    char answer = 'y';
    do  {
        
        string name;
        int quantity;
        cout << "Search for a product:\nProduct name: ";
        getline(cin, name);
        cout << "Quantity: ";
        cin >> quantity;
        Product new_product = Product(quantity, name);
        string solution = i.search(new_product) ? "" : "";
        cout << solution << endl << "Continue? (Y/N): ";
        cin >> answer;

        } while (tolower(answer) != 'n');
}

int main()
{
    test();
    return 0;
}