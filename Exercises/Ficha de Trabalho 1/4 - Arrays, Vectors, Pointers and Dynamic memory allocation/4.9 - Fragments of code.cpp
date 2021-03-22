// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
using namespace std;

void fragment_1 () {

    int x = 1, y = 2;
    int &ref_x = x, &ref_y = y;
    ref_x = ref_y;
    cout << "x = " << x << "; y = " << y << endl;
    cout << "ref_x = " << ref_x << "; ref_y = " << ref_y << endl;
}

void fragment_2 () {

    int x = 1, y = 2;
    int *ptr_x = &x, *ptr_y = &y;
    ptr_x = ptr_y;
    cout << "x = " << x << "; y = " << y << endl;
    cout << "ptr_x = " << ptr_x << "; ptr_y = " << ptr_y << endl;
    cout << "*ptr_x = " << *ptr_x << "; *ptr_y = " << *ptr_y << endl;
}

int main ()
{
    fragment_1 ();

    // Output:
    // x = 2 and y = 2
    // ref_x = 2 and ref_y = 2

    fragment_2 ();

    // Output:
    // x = 1 and y = 2
    // ptr_x = "memory adress of x" and ptr_y = "memory adress of y"
    // *ptr_x = 2 and *ptr_y = 2

    return 0;
}

