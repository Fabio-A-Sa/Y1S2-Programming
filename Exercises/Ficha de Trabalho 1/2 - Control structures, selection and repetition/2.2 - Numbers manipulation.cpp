// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
using namespace std;

void largest_and_smallest_a ()
{
    int a, b, c, maior, menor;
    cout << "Three numbers:" << endl;
    cout << "First number: ";
    cin >> a;
    maior = a;
    menor = a;
    cout << "Second number: ";
    cin >> b;
    maior = b > maior ? b : maior;
    menor = b < menor ? b : menor;
    cout << "Third number: ";
    cin >> c;
    maior = c > maior ? c : maior;
    menor = c < menor ? c : menor;

    cout << "Larger number is " << maior << " and lower number is " << menor << endl;
}

void descending_order_b ()
{
    int a, b, c, maior, menor, medio;
    cout << "Three numbers:" << endl;
    cout << "First number: ";
    cin >> a;
    maior = a;
    menor = a;
    cout << "Second number: ";
    cin >> b;
    maior = b > maior ? b : maior;
    menor = b < menor ? b : menor;
    cout << "Third number: ";
    cin >> c;
    maior = c > maior ? c : maior;
    menor = c < menor ? c : menor;
    medio = (a + b + c) - (maior + menor);
    cout << "Descending order: " << maior << ", " << medio << ", " << menor << endl;
}

void triangle_enabled_c ()
{
    int a, b, c, maior, menor, medio;
    cout << "Three numbers:" << endl;
    cout << "First number: ";
    cin >> a;
    maior = a;
    menor = a;
    cout << "Second number: ";
    cin >> b;
    maior = b > maior ? b : maior;
    menor = b < menor ? b : menor;
    cout << "Third number: ";
    cin >> c;
    maior = c > maior ? c : maior;
    menor = c < menor ? c : menor;
    medio = (a + b + c) - (maior + menor);

    if ((maior >= (medio + menor)) || !(a>0 && b>0 && c>0)) {
        cout << "It is impossible to build a triangle based on these three numbers" << endl;
    }
    else {
        cout << "This numbers can represent the length of the 3 sides of a triangle" << endl;
    }
}

int main () 
{
    largest_and_smallest_a ();
    descending_order_b ();
    triangle_enabled_c ();
    return 0;
}

