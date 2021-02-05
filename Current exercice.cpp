// Exercices from course https://www.youtube.com/watch?v=_bYFu9mBnr4

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void print_array (int array[], int size) 
{
    for (int i = 0; i < size; i++) {
        cout << array[i] << " "; }   
}

int main() // Work with arrays
{
    int size, index, new_value;
    string answer;
    cout << "What size is your array? " << endl;
    cin >> size;
    int next_number, numbers[size];

    for (int i = 0; i < size; i++) {
        cout << "What's next number? ";
        cin >> next_number;
        numbers[i] = next_number; }

    cout << "Your array is: ";
    print_array(numbers, size);
    
    do {
        cout << endl;
        cout << "Do you like to modify any value?\nY --> Yes\nN --> No\nYour answer: ";
        cin >> answer;
        if (answer == "Y" || answer == "y")
        {
            cout << "Which index do you like to modify? ";
            cin >> index;

            if (index >= size) {
                cout << "Input not valid! Try again:" << endl;
            }
            
            else {
                cout << "New value: ";
                cin >> new_value;

                numbers[index] = new_value;

                cout << "Your array is now: ";
                print_array(numbers, size);
            }
        }

    } while (answer != "N" && answer != "n");

    cout << "Done!";
    return 0;
}