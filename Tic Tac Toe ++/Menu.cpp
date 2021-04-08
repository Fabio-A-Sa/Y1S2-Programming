// Created on April, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <limits>

using namespace std;

void show_menu () {

    cout << endl;
    cout << "MENU:\n" << endl;
    cout << "(1) --> 2 Players" << endl;
    cout << "(2) --> 1 Player + Computer in peacefull mode" << endl;
    cout << "(3) --> 1 Player + Computer in hard mode" << endl;
    cout << "(Q) --> Quit game" << endl;
    cout << endl;
}

int menu () {

    show_menu();
    char number;
    cout << "Your choice: ";
    cin >> number;

    while (number != '1' && number != '2' && number != '3' && tolower(number) != 'q') {

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please try again: ";
        cin >> number;

    }

    if (tolower(number) == 'q') {
        cout << "Finish" << endl;
        exit(0);
    }
    
    cout << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return number;
}