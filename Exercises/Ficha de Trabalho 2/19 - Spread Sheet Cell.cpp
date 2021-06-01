
#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

int main ()
{
    Point p;
    p.x = 4;
    p.y = 10;
    Point *q = &p;
    cout << (*q).x;
    return 0;
}