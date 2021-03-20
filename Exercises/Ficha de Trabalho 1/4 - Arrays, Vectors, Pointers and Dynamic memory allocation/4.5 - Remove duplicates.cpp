// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
using namespace std;

void removeDuplicates(vector<int> &v) {


}

int main ()
{   
    vector<int> example = {0, 9, 0, -5, 2, 9, 8, 0, 0, 8, 5, 2, 4, 15, 2} ;
    removeDuplicates(example);

    for (int number: example) {
        cout << number << " ";
    }

    return 0;
}