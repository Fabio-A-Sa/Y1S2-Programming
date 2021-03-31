#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Robot {

    int x;
    int y;
    char symbol;
    string name;
    bool died;
};

struct Player {

    int x;
    int y;
    char symbol = 'H';
    bool died = false;
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


    // Robots in maze --> First we have to count how many "R"s are in maze array
    int number_of_robots = 10;
    vector<Robot> all_robots = create_robots(number_of_robots);

    while (all_robots.size()) {

        int counter = 0;
        for (Robot r : all_robots) {

            if (counter == 0) 
            {
                cout << "Name of robot: " << r.name << endl;
                cout << "X-robot: " << r.x << endl;
                cout << "Y-robot: " << r.y << endl;
                cout << "Is dead? " << r.died << endl;
                cout << " " << endl;
            }  
            else 
            {
                cout << r.name << " está morto. Retirado do array em 3, 2, 1..." << endl;
                all_robots.erase(all_robots.begin() + counter);
            }
            counter++;
        }
        if (counter) {
            break;
        }
    }
    cout << all_robots.size() << endl;
    return 0;
}