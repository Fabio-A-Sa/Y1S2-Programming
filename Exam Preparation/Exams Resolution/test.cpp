#include <iostream>
#include <string>
using namespace std;

class Date {
    public:
        Date(int i, int j, int k);
    private:
        int i, j, k;
};

Date::Date(int i, int j, int k) {
    this->i = i;
    this->k = k;
    this->j = j;
}

class Novo {
    public:
        Novo(int i= 3, int j= 8, int k= 9);
    private:
        int i, j, k ;
};

Novo::Novo(int i, int j, int k) {
    this->i = i;
    this->k = k;
    this->j = j;
}

int main ()
{
    Date d;
    return 0;
}