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
        string getName() const;
        void show() const;

    private:
        static IdentNum numBooks;
        IdentNum id;
        string name;
};

int main() 
{
    return 0;
}