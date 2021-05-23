// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
using namespace std;

class Vector {
    public:

        Vector();
        Vector(unsigned int size);

        int size();
        void push_back(int value);
        void pop_back();
        void clear();

    private:

        int bufferSize;
};

Vector::Vector() {
    bufferSize = 0;
}

Vector::Vector(unsigned int size) {
    this -> bufferSize = size;

}

void Vector::clear() {
    bufferSize = 0;
}

int Vector::size() {
    return bufferSize;
}

int main ()
{
    Vector v = Vector(10);
    v.clear();
    return 0;
}