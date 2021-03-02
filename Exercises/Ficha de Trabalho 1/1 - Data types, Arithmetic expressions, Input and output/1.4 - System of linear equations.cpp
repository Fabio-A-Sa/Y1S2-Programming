// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f, x, y;
    cout << "The linear system is:" << endl;
    cout << "{ ax + by = c\n{ dx + ey = f" << endl;
    cout << "Please enter values for each icognit (a, b, c, d, e, f):" << endl;
    cin >> a >> b >> c >> d >> e >> f;

    x = (c*e - b*f)/(a*e - b*d);
    y = (a*f - c*d)/(a*e - b*d);
    cout << "Solutions: x = " << x << " and y = " << y << endl;
    
    return 0;
}