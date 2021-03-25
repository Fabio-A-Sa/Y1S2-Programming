// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool ascending (string x, string y) {
    bool answer = x > y ? false : true;
    return answer;
}

bool descending (string x, string y) {
    bool answer = x < y ? false : true;
    return answer;
}

void bubbleSort(vector<string> &v, char answer) {

    int size_of_vector;
    size_of_vector = v.size();

    if (size_of_vector > 2) {

        for (int index = 0 ; index < size_of_vector ; index ++) {

            string aux;
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
    vector<string> chars ;
    char answer;
    string input;

    // Input char, or string, or Person's name
    while (input != "0") {
        cout << "To skip press 0. Another string: ";
        getline(cin, input);
        chars.push_back(input);
    } ;
    chars.pop_back();               // Ignore back input (letter == input "0")
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

    bubbleSort(chars, answer);
    
    for (string i: chars) {
        cout << i << " " ;
    }
    return 0;
}