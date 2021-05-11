// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
typedef unsigned long IdentNum;

class Book {

    public:
        Book();
        Book(string bookName);
        void setId (IdentNum num);
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

Library::Library() {
    books.clear();
}

void Library::addBook(Book b) {
    books.push_back(b);
}

void Library::showBooks() const {
    for (int i = 0 ; i < books.size() ; i++ ) {
        cout << books[i].getId() << " - " << books[i].getName() << endl;
    }
}

void test() {

    Library lib;
    Book b1;
    Book b2("My first book");

    lib.addBook(b1);
    lib.addBook(b2);

    Book b3;

    string book_name;
    cout << "Book name? ";
    getline(cin, book_name);
    b3.setName(book_name);
    lib.addBook(b3);

    lib.showBooks();
}

int main() 
{   
    test();
    return 0;
}