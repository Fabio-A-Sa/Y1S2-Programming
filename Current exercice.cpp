// Exercices from first collection, available on: 
// https://github.com/MIEIC-FEUP/Recursos/blob/master/1%C2%BA%20ano/2%C2%BA%20semestre/PROG%20-%20Programa%C3%A7%C3%A3o/Pr%C3%A1ticas/Folha%20%20de%20exerc%C3%ADcios%201.pdf

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main () // Alarm Clock
{
    int hour, minutes, wakeup_hour, wakeup_minute, new_hour, new_minute, new_day;
    string aday;

    do  {
        cout << "What time is it?\nHour: ";
        cin >> hour;
        cout << "Minutes: ";
        cin >> minutes;
        if (hour > 23 || minutes > 59) {
            cout << "Your input is not valid. Please try again." << endl;
        }
        } while (hour > 23 || minutes > 59);

    do {
        cout << "How many hours and minutes you want sleep?\nHour: ";
        cin >> wakeup_hour;
        cout << "Minutes: ";
        cin >> wakeup_minute;
        if (hour > 23 || minutes > 59) {
            cout << "Your input is not valid. Please try again." << endl;
        }
        } while (hour > 23 || minutes > 59);

    if (wakeup_hour < 8) {
        cout << "This is harmfull. You have to sleep at least 8 hours per day!" << endl;
    }

    new_minute = (minutes + wakeup_minute) % 60;
    new_hour = (minutes + wakeup_minute) / 60 + (hour + wakeup_hour);
    new_day = new_hour / 24;
    aday = new_day == 0 ? "today" : "tomorrow";

    if (new_hour < 10) {
        if (new_minute < 10) {
            cout << "Your alarm clock will ring " << aday << " at 0" << new_hour << ":0" << new_minute << "!" << endl;
        }
        else {
            cout << "Your alarm clock will ring " << aday << " at 0" << new_hour << ":" << new_minute << "!" << endl;
        }
    }
    else {
        if (new_minute < 10) {
            cout << "Your alarm clock will ring " << aday << " at " << new_hour << ":0" << new_minute << "!" << endl;
        }
        else {
            cout << "Your alarm clock will ring " << aday << " at " << new_hour << ":" << new_minute << "!" << endl;
        }
    }
    return 0;
}
