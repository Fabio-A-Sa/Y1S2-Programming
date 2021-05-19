// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
using namespace std;

template <class T>

class Vector
{
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

int main ()
{
    return 0;
}