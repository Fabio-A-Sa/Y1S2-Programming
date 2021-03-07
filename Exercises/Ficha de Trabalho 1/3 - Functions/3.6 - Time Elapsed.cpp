// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <ctime>
using namespace std;

void timeElapsed(int time) {
    cout << time << endl;
}

int main () {

    int time_t = 0, current_ti, current_tf, diff;
    srand(time(NULL));
    string answer;

    do {
        current_tf = 0;
        current_ti = 0;
        current_ti = time(NULL);
        cout << "Call function?\nY --> Yes\nN --> No : ";
        cin >> answer;
        if (answer == "Y") {
            current_tf = time(NULL);
            diff = current_tf -current_ti;
            time_t = time_t + diff;
            timeElapsed(time_t);
        }
    } while (answer != "N") ;

    return 0;
}