// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 370 of Lectures Material

#include <iostream>
#include <vector>
using namespace std;

int main ()
{   
    vector<int> numbers = {1,2,3,4,5,6,7,8,9,10};
    while (numbers.size()) {
        numbers.pop_back();
    }
    return 0;
}