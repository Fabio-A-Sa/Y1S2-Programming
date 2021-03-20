// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
using namespace std;

bool ascending (int x, int y) {
    bool answer = x > y ? true : false;
    return answer;
}

bool descending (int x, int y) {
    bool answer = x < y ? true : false;
    return answer;
}

void bubbleSort(vector<int> &v, char answer) {

    int size_of_vector;
    size_of_vector = v.size();

    if (size_of_vector > 2) {

        for (int index = 0 ; index < size_of_vector ; index ++) {

            int aux;
            int counter = 0;
            bool flag = true;

            while (counter + 1 < size_of_vector) {
                
                if (answer == 'a') {

                    if (descending(v[counter], v[counter + 1])) {
                        aux = v[counter+1];
                        v[counter+1] = v[counter];
                        v[counter] = aux;
                        flag = flag && false;
                    }
                    counter++ ;

                }

                else if (answer == 'd') {

                    if (ascending(v[counter], v[counter + 1])) {
                        aux = v[counter+1];
                        v[counter+1] = v[counter];
                        v[counter] = aux;
                        flag = flag && false;
                    }
                    counter++ ;

                }
            }

            if (flag) {
                break;
            } 

        }

    }
}

int main () 
{   
    vector<int> numbers ;
    char answer;
    int number;

    // Input numbers
    while (!cin.fail()) {
        cout << "To skip press a random letter. Another number: ";
        cin >> number;
        numbers.push_back(number);
    } ;
    numbers.pop_back();             // Ignore back input (letter == input "0")
    cin.clear();                    // Clean error flag                 
    cin.ignore(100000, '\n');       // Clean error characters

    // Ascending or descending order
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