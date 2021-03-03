// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const double pi = 3.14159265;

double rad (double degree)
{
    double rads;
    rads = (pi*degree)/180.0;
    return rads;
}

void angle_table_a ()
{
    double angulos[] = {0, 15, 30, 45, 60, 75, 90};
    string template_f = "ang\tsen\tcos\ttan";

    cout << template_f << endl;
    cout << setprecision(6) << fixed;

    for (double degree : angulos) {

        cout << (int) degree << "\t";
        degree = rad(degree);        
        double a = sin(degree);
        double b = cos(degree);

        cout << a << "\t" << b << "\t";

        if (degree == rad(90)) {
            cout << "infinite" << endl;
        }
        else {
            cout << tan(degree) << endl;
        }
    }
}

void angles_input_b () 
{
    double lower, upper, increment;
    string template_b = "ang\tsen\tcos\ttan";

    cout << "Enter a lower number in degrees: ";
    cin >> lower;
    cout << "Enter a upper number in degrees: ";
    cin >> upper;
    cout << "Enter a increment number: ";
    cin >> increment;

    cout << template_b << endl;
    cout << setprecision(6) << fixed;

    for (int i = lower ; i <= upper; i+=increment) {

        cout << i << "\t";
        double degree = rad(i);        
        double a = sin(degree);
        double b = cos(degree);

        cout << a << "\t" << b << "\t";

        if (i == 90 || i == 180) {
            cout << "infinite" << endl;
        }
        else {
            cout << tan(degree) << endl;
        }
    }
}


int main () 
{
    angle_table_a () ;
    angles_input_b () ;
    return 0;
}