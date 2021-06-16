// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 224/300 of Lectures Material

#include <iostream>
#include <array>
#include <string>
using namespace std;

// T e S admitem ser um valor genérico (int, long, float, double...)
template<typename T>
T sum (T a, T b) { return a + b ; }

template<typename S>
void printArray (const S a[], size_t n) {
    for (size_t i = 0 ; i < n ; i++ ) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void template_function() {

    int number1 = 10;
    int number2 = 5;
    cout << sum (number1, number2) << endl;
    double number3 = 7.5;
    double number4 = 9.32;
    cout << sum (number3, number4) << endl;
    int arr[] = {56, 5415, 546, 541, 321, 3215, 6541, 5, 0, 65416};
    printArray(arr, sizeof(arr) / sizeof(arr[0]));
}

class Person {

    friend Person operator + (Person, Person);

    public:

        Person();
        Person(string name, int age);
        string getName();
        int getAge();
        void setName(string name);
        void setAge(int age);
    
    private:

        int age;
        string name;
};

Person::Person() {
    this -> age = 0;
    this -> name = "UNKNOWN";
}

Person::Person(string name, int age) {
    this -> name = name;
    this -> age = age;
}

string Person::getName () { return name; }
int Person::getAge() { return age; }

void Person::setName(string name) { this -> name = name ; }
void Person::setAge(int age) { this -> age = age ; }



void overloading() {

    Person p1 = Person("Fabio", 15);
    Person p2;
    p2.setName("Araujo");
    p2.setAge(3);

}

int main ()
{
    //template_function();
    overloading();
    return 0;
}