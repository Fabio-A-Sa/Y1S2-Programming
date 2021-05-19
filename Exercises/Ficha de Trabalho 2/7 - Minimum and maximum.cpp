// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
using namespace std;

template<class T>

void max_and_min(T v) {

    int max = -100000;
    int min = 100000;

    for (int i : v) {
        if (i > max) {
            max = i;
        }
        if (i < min) {
            min = i;
        }
    }
    cout << "Min: " << min << " and Max: " << max << endl;
}

int main()
{   
    vector<int> v = {-101, 2, 356, 0, 7, 567, -96};
    max_and_min(v);
    return 0;
}