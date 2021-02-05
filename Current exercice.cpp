// Exercices from course https://www.youtube.com/watch?v=_bYFu9mBnr4

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int factorial (int number)
{
    int fact = 1;
    for ( number = number ; number > 1; number--)
    {
        fact = fact * number ;
    }
    return fact;
}

int main()
{
    int number;
    cout << "Give me a number: " << endl;
    cin >> number;
    cout << "The factorial of the number " << number << " is " << factorial(number) << endl;
}