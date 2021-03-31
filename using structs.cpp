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

    int counter = 0;
    while (counter < 2*number_of_robots) {

        for (Robot r : all_robots) {

            if (!r.died) 
            {
                cout << "Name of robot: " << r.name << endl;
                cout << "X-robot: " << r.x << endl;
                cout << "Y-robot: " << r.y << endl;
                cout << "Is dead? " << r.died << endl;
                cout << " " << endl;
            }  
            else if (r.died)
            {
                cout << r.name << " morto. Retirado do vetor em 3, 2, 1..." << endl;
                all_robots.erase(all_robots.begin() + counter);
            }
            else
            {
                continue;
            }
            counter++;
            r.died = true;
        }
    }
    cout << all_robots.size() << endl;
    return 0;
}