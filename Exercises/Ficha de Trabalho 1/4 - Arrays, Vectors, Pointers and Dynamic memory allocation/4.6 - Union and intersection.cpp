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

void vectorUnion(const vector<int> &v1, const vector<int> &v2, vector<int> &v3) {

    for (int number: v1) {
        v3.push_back(number);
    }
    for (int number: v2) {
        v3.push_back(number);
    }
    removeDuplicates(v3);

}

void vectorIntersection(const vector<int> &v1, const vector<int> &v2, vector<int> &v3) {

    for (int number1: v1) {
        for (int number2: v2) {
            if (number1 == number2 && notInside(v3, number2)) {
                v3.push_back(number1);
            }
        }
    }
}

int main () 
{   
    vector<int> numbers1 = {0, 2, 2, 8, 2, 9, 5, 2, 0, 0, 20, 15, 8, 5, 3, 2, 4, 1, 1, 0} ;
    vector<int> numbers2 = {4, 2, 8, 15, 7, 8, 8, 0, 1, 2, 9, 3, 1, 0, 0, 1, 5, 8, 15, 2, 35, -9} ;
    vector<int> union_vector ;
    vector<int> intersection_vector ;

    // Remove duplicates and sort by ascending order
    removeDuplicates(numbers1);
    removeDuplicates(numbers2);
    bubbleSort(numbers1);
    bubbleSort(numbers2); 

    // Show vectors
    cout << "Vector 1: ";
    for (int number: numbers1) {
        cout << number << " ";
    }

    cout << "\nVector 2: ";
    for (int number: numbers2) {
        cout << number << " ";
    }   

    // Union vector
    vectorUnion(numbers1, numbers2, union_vector);
    cout << "\nUnion: ";
    for (int number: union_vector) {
        cout << number << " ";
    }

    // Intersection vector
    vectorIntersection(numbers1, numbers2, intersection_vector);
    cout << "\nIntersection: ";
    for (int number: intersection_vector) {
        cout << number << " ";
    }

    return 0;
}