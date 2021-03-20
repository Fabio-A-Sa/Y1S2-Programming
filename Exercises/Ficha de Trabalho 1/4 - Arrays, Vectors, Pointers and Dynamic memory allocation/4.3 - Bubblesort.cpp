// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &v, char answer) {

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

int main () 
{   
    vector<int> numbers = {1, -1, 9, 4, 5, -15, 2, 0} ;
    char answer;

    do  {

        cout << "Ascending or descending order? a/d ";
        cin >> answer;
        if (answer != 'a' && answer != 'd') {
            cout << "Invalid input. Please try again." << endl ;
        }

        } while (answer != 'a' && answer != 'd') ;

    bubbleSort(numbers, answer);
    
    for (int number: numbers) {
        cout << number << " " ;
    }
    return 0;
}