// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 370 of Lectures Material

#include <iostream>
using namespace std;

int main ()
{   
    int number = 10;
    int zero = 0;
    try { 
        int result = number / zero ; 
        cout << "The result is : " << result << endl ; 
    }
    catch (...) { 
        cout << "Divide by zero error!" << endl; 
    }
    return 0;
}