// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 370 of Lectures Material

#include <iostream>
using namespace std;

int main ()
{   
    int numerator = 10;
    int denominator = 0;

    try { 

        if (!denominator) {
            throw 99;
        }
        else {
            int result = numerator / denominator ; 
            cout << "The result is : " << endl ; 
        }
    }
    catch (int x) { 
        cout << "Divide by zero error! Error number " << x << "!" << endl; 
    }
    
    return 0;
}