// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <cmath>
using namespace std;

double rad (double degree)
{
    const double pi = 3.14159265;
    double rads;
    rads = (pi*degree)/180.0;
    return rads;
}

void angle_table_a ()
{
    double angulos[] = {0, 15, 30, 45, 60, 75, 90};
    string template_f = "ang     sen        cos         tan";

    cout << template_f << endl;
    for (double degree : angulos)
    {
        cout << degree;
        degree = rad(degree);
        double a = sin(degree);
        double b = cos(degree); 
        double c = tan(degree);

        cout << "   " << a << "   " << b << "   " << c << setprecision(6) << fixed << endl;
    }
}

void angles_input_b () 
{
    double lower, upper, incremento;
    string template_b = "ang    sen     cos     tan";

    cout << "Enter a lower number in degrees: ";
    cin >> lower;
    cout << "Enter a upper number in degrees: ";
    cin >> upper;
    cout << "Enter a increment number: ";
    cin >> incremento;

    cout << endl << template_b;
    for (double x = lower; x <= upper; x = x+incremento) {
        cout << x << "   ";
        cout << sin(rad (x)) << "   " << cos(rad (x)) << "   " << tan(rad (x)) << endl;
    }
}

int main () 
{
    angle_table_a ()
    angles_input_b () 
    return 0;
}