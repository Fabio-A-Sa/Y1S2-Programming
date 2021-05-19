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

}

class Inventory
{
    public:

    private:
};

int main()
{
    return 0;
}