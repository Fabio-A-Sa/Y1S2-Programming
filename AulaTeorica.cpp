#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void sum () 
{
    int n1, n2, n3;
    cout << "Number1, Number2, Number3 ?" << endl;
    cin >> n1 >> n2 >> n3;
    cout << "Sum is: " << n1+n2+n3 << endl;
    cout << "Double division of " << n1 << " and " << n2 << " is " << (double) n1/n2 << endl;
}

int main()
{
    const unsigned int RESULT_PRECISION = 3;
    double operand1, operand2;
    char operation;
    double result;
    bool validOperation = false;

    cout << "x op y ? ";
    cin >> operand1 >> operation >> operand2;

    if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {

        validOperation = true;

        if (operation == '+')
        result = operand1 + operand2;
        else if (operation == '-')
        result = operand1 - operand2;
        else if (operation == '*')
        result = operand1 * operand2;
        else if (operation == '/')
        result = operand1 / operand2;

    }

    if (validOperation) {
        cout << operand1 << ' ' << operation << ' ' << operand2 << " = ";
        cout << fixed << setprecision(RESULT_PRECISION) << result << endl;
    }
    else {
    cerr << "Invalid operation !" << endl;
    }
    return 0;
}