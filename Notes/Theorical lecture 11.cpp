// Created on March 29, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 11, pages 107 --> 131

#include <iostream>
#include <vector>
#include <array>
#include <cstdlib>
#include <string>
using namespace std;

unsigned const int NLIN = 2;
unsigned const int NCOL = 3;

void show_static_Array (int a[][NCOL]) {
    for (int i = 0 ; i < NLIN ; i++) {
        for (int j = 0 ; j < NCOL ; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void static_allocation_2d_array () {
    
    int a[NLIN][NCOL];
    for (int i=0; i<NLIN; i++)
        for (int j=0; j<NCOL; j++)
            a[i][j] = 10*(i+1)+j;
    show_static_Array(a);
}

void show_dinamic_array(int **a, int lines, int cols) {

    for (int i = 0 ; i < lines ; i++) {
        for (int j = 0 ; j < cols ; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void dinamic_allocation_2d_array () {

    int numLines = 3;
    int numCols = 4;
    int ** a = (int **) malloc(numLines * sizeof(int*)) ;
    for (int i = 0; i < numLines; i++)
        a[i] = (int *) malloc(numCols * sizeof(int));

    for (int i = 0 ; i < numLines ; i++)
        for (int j = 0 ; j < numCols ; j++ )
            a[i][j] = 10 * (i + 1) + j ;

    show_dinamic_array(a, numLines, numCols);

    // Free memory
    for (int i = 0 ; i < numLines ; i++ )
        free(a[i]);
    free(a);
}

bool comparation_string (string one, string two) {

    bool flag = true;

    if (one.size() != two.size()) {
        flag = !flag;
    }
    else {
        for (int i = 0 ; i < one.size() ; i++)
            flag = flag && (one[i] == two[i]);
    }
    return flag;
}

void using_strings () {

    string sentence = "Jaime Villate and Tux" ;
    for (char letter : sentence)
        cout << letter << " ";
    cout << endl;
    string input1, input2;
    cout << "Input two words: ";
    cin >> input1 >> input2;
    cout << endl;
    string answer = comparation_string(input1, input2) ? "equal" : "not equal";
    cout << "'" << input1 << "' and '" << input2 << "' are " << answer << endl;
}

void common_error() {

    string name;
    int age;

    cout << "Age: ";
    cin >> age;
    cout << "Name: ";
    getline(cin, name);

    // Output error
    cout << "Name = " << name << endl;
    cout << "Age = " << age << endl;
    
}

int main ()
{   
    //static_allocation_2d_array();
    //dinamic_allocation_2d_array();
    //using_strings();
    common_error();
    return 0;
}