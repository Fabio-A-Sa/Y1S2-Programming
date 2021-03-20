// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
using namespace std;

bool notInside(vector<int> &v, int value) {

    bool flag = true;
    for (int index = 0 ; index < v.size() ; index++ ) {
        flag = flag && (v[index] != value) ;
    }
    return flag;
}

void removeDuplicates(vector<int> &v) {

    vector<int> result;
    for (int number: v) {
        if (notInside(result, number)) {
            result.push_back(number);
        }
    }
    v = result;
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