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
        IdentNum getId();
        string getName();
        void show();

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

Book::Book(string bookName) {
    numBooks++;
    id = numBooks;
    name = bookName;
}

IdentNum Book::getId() {
    return id;
}

void Book::setName(string bookName) {
    name = bookName;
}

string Book::getName(){
    return name;
}

class Library {

    public:
        Library();
        void addBook(Book book);
        void showBooks();
    
    private:
        vector<Book> books;
};

Library::Library() {
    books = {};
}

void Library::addBook(Book b) {
    books.push_back(b);
}

void Library::showBooks() {
    for (int i = 0 ; i < books.size() ; i++ ) {
        cout << books[i].getId() << " - " << books[i].getName() << endl;
    }
}

void test() {

    Library lib = Library();
    Book b1 = Book("Os 3 Porquinhos");
    Book b2 = Book("O patinho Feio");

    lib.addBook(b1);
    lib.addBook(b2);

    Book b3 = Book();

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