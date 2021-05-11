// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef unsigned long IdentNum;

class Book {

    public:
        Book();
        Book(string bookName);
        void setName(string bookName);
        IdentNum getId() const;

};

int main() 
{
    return 0;
}