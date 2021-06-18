#include <iostream>
#include <string>
using namespace std;

class Date {
    public:
        Date(int i, int j, int k);
    private:
        int i, j, k;
};

class Novo {
    public:
        Novo(int i= 3, int j= 8, int k= 9);
    private:
        int i, j, k ;
};

int main ()
{
    Novo n;
    return 0;
}