// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
using namespace std;

int main()
{
    double a, b, c, d, e, f, x, y;
    cout << "The linear system is:" << endl;
    cout << "{ ax + by = c\n{ dx + ey = f" << endl;
    cout << "Please enter values for each icognit (a, b, c, d, e): " << endl;
    cin >> a >> b >> c >> d >> e >> f ;

    if (a == d && b == e) {
        // Multiples solutions --> Inconsistent system
        cout << "Inconsistent system" << endl;
    }
    else if ((a*e - b*d) == 0) {
        // We can't divide by 0 --> Impossible system
        cout << "Impossible system" << endl;
    }
    else {
        // Possible
        x = (c*e - b*f)/(a*e - b*d);
        y = (a*f - c*d)/(a*e - b*d);
        cout << "Solutions: x = " << x << " and y = " << y << endl;
    }
    return 0;
}