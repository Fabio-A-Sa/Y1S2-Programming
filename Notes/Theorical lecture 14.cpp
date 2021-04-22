// Created on April 22, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 14, pages 166 --> 170

#include <iostream>
#include <fstream>

const int MAX_NAMELEN = 10;
using namespace std;

typedef struct {
    char name[MAX_NAMELEN];
    unsigned int age;
} Person;

void using_text_files () {

    char c;
    string name = "text.txt";
    fstream file;
    file.open(name);

    // using cin >>
    file.seekg(0, ios::beg); // Pointer to the beginning of file
    cout << "File contents usign cin: " << endl;
    while (file >> c)
    {
        cout << c;
    }
    cout << endl;
    file.clear(); // Clear eof() flag

    //using get();
    file.seekg(0, ios::beg);
    cout << "File contents using get: " << endl;
    while (file.get(c))
    {
        cout << "Next letter: " << c << endl;
    }
    cout << endl;
    file.clear();
    file.close();
}

void using_binary_files () {
    
    int place = 1;
    fstream personFile;
    Person a[MAX_NAMELEN];
    personFile.open("names.dat", ios::out | ios::binary);
    personFile.seekg(place);
    personFile.write((char *) a, 10*sizeof(Person));
}

int main ()
{   
    using_binary_files();
    using_text_files();
    return 0;
}