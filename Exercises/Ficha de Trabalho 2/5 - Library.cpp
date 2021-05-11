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

IdentNum Book::numBooks = 0;

Book::Book() {
    numBooks++;
    id = numBooks;
    name = "Unknown book name";
}

IdentNum Book::getId() const {
    return id;
}

void Book::setName(string bookName) {
    name = bookName;
}

string Book::getName() const {
    return name;
}

class Library {

    public:
        Library();
        void addBook(Book book);
        void showBooks() const;
    
    private:
        vector<Book> books;
};

int main() 
{
    return 0;
}