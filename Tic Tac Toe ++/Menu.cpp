// Created on April, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <limits>

using namespace std;

void show_menu () {

    cout << "MENU:\n" << endl;
    cout << "(1) --> 2 Players" << endl;
    cout << "(2) --> 1 Player + Computer in peacefull mode" << endl;
    cout << "(3) --> 1 Player + Computer in hard mode" << endl;
    cout << "(Q) --> Quit game" << endl;
}

int menu () {

    show_menu();
    int number = 1;
    return number;
}