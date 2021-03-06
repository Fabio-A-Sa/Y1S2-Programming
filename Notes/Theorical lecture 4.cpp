// Created on March 4, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 4, pages 22 --> 30

#include <iostream>
#include <cmath>
#include <iomanip>
#include <climits>
#include <cctype>
using namespace std;

// Manipulation digits with setw and setfill
int digits_manipulation ()
{
    int dd, mm, yyyy;
    char sep1, sep2;

    cout << "Date (dd:mm:yyyy): ";
    cin >> dd >> sep1 >> mm >> sep2 >> yyyy;
    cout << "Date: " << setfill('0') << setw(2) << dd << sep1 << setw(2) << mm << sep2 << setw(4) << yyyy << endl;

    if (sep1 != ':' || sep2 != ':' || cin.peek() != '\n') {
        cout << "Invalid date" << endl;
    }

    return 0;
}

// Upper and lower strings --> Char by char #include <cctype>
int upper_and_lower_strings () 
{
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    int length = sentence.length(); 

    for (int i = 0; i < length; i++) { 

        int c = sentence[i]; 
        if (islower(c))  
            sentence[i] = toupper(c); 
        else if (isupper(c))  
            sentence[i] = tolower(c); 
        else
            continue;
    }

    cout << sentence << endl;
    return 0;
}

// Calculator with cin.ignore() items to confirm input 
int calculator_main ()
{
    const unsigned int NUMBER_PRECISION = 3;
    double operand1, operand2; 
    char operation;
    double result;
    bool validOperation;
    char anotherOperation;

    do  {
        
        bool validOperands;
        anotherOperation = true;
        
        do  {
                cout << endl << "x op y ? ";
                cin >> operand1 >> operation >> operand2;   
                
                if (cin.fail()) {

                    validOperands = false;

                    if (cin.eof()) {
                        anotherOperation = false;
                    }
                    else {
                        cin.clear();
                        cin.ignore(1000, '\n');
                    }
                }      
                else {
                    cin.ignore(1000, '\n');           
                }
            } while (anotherOperation && !validOperands);

        // compute result if operation is valid
        validOperation = true;
        switch (operation) {
            case '+':
                result = operand1 + operand2;
                break;
            case '-':
                result = operand1 - operand2;
                break;
            case '*':
                result = operand1 * operand2;
                break;
            case '/':
                result = operand1 / operand2;
                break;
            default:
                validOperation = false;
        }

        //show result or invalid operator message
        if (validOperation) {
            cout << fixed << setprecision(NUMBER_PRECISION);
            cout << operand1 << ' ' << operation << ' ' << operand2 <<
            " = " << result << endl;
        }
        else {
            cerr << "Invalid operator !\n";
            cout << "Another operation (Y/N) ? ";
            cin >> anotherOperation;
            anotherOperation = toupper(anotherOperation);
        }
        } while (anotherOperation == 'Y');
    return 0;
}
