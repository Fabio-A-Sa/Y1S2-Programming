// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <array>
using namespace std;

template<typename T>

class Vector {
    public:

        Vector();
        Vector(unsigned int size);
        Vector(unsigned int size, const T &initial);
        Vector(const Vector<T> &v);
        ~Vector();

        int size() const;
        void push_back(const T &value);
        void pop_back();
        void clear();

    private:

        T * buffer;
        int bufferSize;
        int size;
};

Vector::Vector() {
    size = 0;
    bufferSize = 0;
}

Vector::Vector(unsigned int size) {
    this -> size = size;

}

Vector::Vector(unsigned int size, const T &initial) {
    this -> size = size;
    this -> buffer = initial;
}

Vector::Vector(const Vector<T> &v) {
    this -> buffer = v;
}

int main ()
{
    Vector v = Vector(10);
    v.push_back(5);
    v.clear();
    return 0;
}