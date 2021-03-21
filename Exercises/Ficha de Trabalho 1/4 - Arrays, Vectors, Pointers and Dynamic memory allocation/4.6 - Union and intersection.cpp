// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &v) {

    int size_of_vector;
    size_of_vector = v.size();

    if (size_of_vector > 2) {

        for (int index = 0 ; index < size_of_vector ; index ++) {

            int aux;
            int counter = 0;
            bool flag = true;

            while (counter + 1 < size_of_vector) {
                
                if (v[counter] > v[counter + 1]) {
                        aux = v[counter+1];
                        v[counter+1] = v[counter];
                        v[counter] = aux;
                        flag = flag && false;
                    }
                    counter++ ;
            }

            if (flag) {
                break;
            } 

        }

    }
}

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
    return 0;
}