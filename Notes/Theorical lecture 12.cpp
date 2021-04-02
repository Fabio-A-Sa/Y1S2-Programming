// Created on April 1, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 12, pages 131 --> ???

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

struct Robot {

    int x;
    int y;
    char symbol;
    string name; 
    bool died;
};

vector<Robot> create_robots(int number) {

    vector<Robot> all_robots;
    int counter = 0;

    while (counter != number)
    {
        Robot robot;
        robot.x = 0;
        robot.y = 0;
        robot.symbol = 'R';
        robot.name = "robot" + to_string(counter+1);
        robot.died = false;
        all_robots.push_back(robot);
        counter++;
    }

    return all_robots;
}

int main () {

    int number_of_robots;
    cout << "Number of robots? ";
    cin >> number_of_robots;

    vector<Robot> all_robots = create_robots(number_of_robots);

    for (Robot r : all_robots) {

        cout << "Name of robot: " << r.name << endl;
        cout << "X-robot: " << r.x << endl;
        cout << "Y-robot: " << r.y << endl;
        cout << "Is dead? " << r.died << endl;
        cout << " " << endl;
        r.died = true;
    }

    for (Robot r : all_robots) {
        
        r.died = true; // Kill all robots
        if (r.died) 
            cout << r.name << " morto. Retirado do vetor em 3, 2, 1..." << endl;
    }

    return 0;
}
