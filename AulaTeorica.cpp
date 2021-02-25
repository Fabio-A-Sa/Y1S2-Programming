#include <iostream>
#include <cmath>
using namespace std;

int main () 
{
    int n1, n2, n3;
    cout << "Number1, Number2, Number3 ?" << endl;
    cin >> n1 >> n2 >> n3;
    cout << "Sum is: " << n1+n2+n3 << endl;
    cout << "Double division of " << n1 << " and " << n2 << " is " << (double) n1/n2 << endl;
    return 0;
}