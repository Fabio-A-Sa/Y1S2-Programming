// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
using namespace std;

int main()
{
    int slices = 10;
    cout << "You Have " << slices << " of pizza";
}

int main()
{
    int slices;
    cout << "How many slices of pizza you have now? ";
    cin >> slices;
    cout << "You Have " << slices << " of pizza" << endl;
}

#include <iostream>
using namespace std;
// using functions and nested functions

int main()
{
    int base, exponent;
    cout << "What is the base? ";
    cin >> base;
    cout << "What is the exponent? ";
    cin >> exponent;
    double result = pow(base, exponent);
    cout << "The result is " << result;
}

double power (int a, int b)
{
    double result = 1;
    for (int i = 0; i < b; i++)
    {
        result = result * a;
    }
    return result;
}

int main()
{
    int base, exponent;
    cout << "What is the base? ";
    cin >> base;
    cout << "What is the exponent? ";
    cin >> exponent;
    double result = power(base, exponent);
    cout << "The result is " << result;
}

int area_superficie (int comprimento, int largura, int altura)
{
    int area; // Result
    area = 2 * (comprimento * largura + comprimento * altura + largura * altura);
    return area;
}

int volume_total (int comprimento, int largura, int altura)
{
    int volume; // Result
    volume = comprimento * largura * altura;
    return volume;
}

int main()
{
    int l, w, h;
    cout << "Imagin that you have a solid. What big is it?" << endl;
    cout << "Lenght: ";
    cin >> l;
    cout << "Width: ";
    cin >> w;
    cout << "Height: ";
    cin >> h;
    
    int area = area_superficie (l, w, h);
    int volume = volume_total (l, w, h);
    cout << "This solid has " << area << " units of area and " << volume << " units of volume.";
}

double imc (int massa, double altura)
{
    double indice;
    indice = massa / (altura/100 * altura/100);
    return indice;
}

void print (int massa, int altura)
{
    cout << "Your IMC is " << imc(massa, altura);
}

int main()
{
    int w;
    double h;
    cout << "Your weight: ";
    cin >> w;
    cout << "Your height: ";
    cin >> h;
    print(w, h);
}

int main()
{
    char x = 'F';
    cout << (int) x; // View ASCII characters value
}

int main() // Boolean data type
{
    bool pizza_is_good = true;
    cout << pizza_is_good << endl; // Return 1 --> True ; 0 --> False
    if (pizza_is_good) 
    {
        cout << "Its true, of couse!";
    }
}

int main()
{
    const int x = 5; // We cant change the value
    int y = 10; 
    // nan - not a number
    // inf - infinite (i.e. pow(9, 999) with include <cmath>)
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x = 6, y = 4; // integers numbers
    double z = 1.25; // float number

    cout << x % y << endl; // Remainder between integers
    cout << remainder(x, z) << endl; // Remainder between float and (float or integer)
    cout << fmax(x, y) << endl; // Max value
    cout << fmin(x, z) << endl; // Min value
    cout << ceil(z) << endl; // Ceil function (1.25 --> 2)
    cout << floor(z) << endl; // Floor function (1.25 --> 1)
    cout << round(z) << endl; // Round function (same as Python)
    cout << abs(-10.25) << endl; // Absolute value (negative --> positive, positive --> positive)
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    getline(cin, text);
    cout << text << endl; // Return the input
    cout << text.length() << endl; // Return input's lenght
    cout << text.erase(2) << endl; // Delete last letter
    cout << text.insert(5, " something "); // Append "something" in 5th index
    cout << text.erase(3); // Delete letter in 3rd index
}

int main()
{
    string text1, text2;
    cout << "To compare strings:" << endl;
    cin >> text1;
    cin >> text2;

    if (text1 == text2)
    {
         cout << "Equal!" << endl;
    }
    else
    {
        cout << "Different!" << endl;
    }
}

#include <iostream>
#include <string>
using namespace std;

void converter_2 (int number, int base)
{
    switch (base) // with switch statement (available only in integer cases)
    {
    case 1:
        cout << "Number " << number << " is " << dec << number << " in decimal." << endl;
        break;
    case 2:
        cout << "Number " << number << " is " << oct << number << " in octal" << endl;
        break;
    case 3:
        cout << "Number " << number << " is " << hex << number << " in hexadecimal." << endl;
        break;

    default:
        cout << "Your choice is not valid! Try again!" << endl;
        break; }
}

void converter_1 (int number, int base) // with if-else statements (available in all cases)
{
    if (base == 1){
        cout << "Number " << number << " is " << dec << number << " in decimal." << endl; }

    else if (base == 2) {
        cout << "Number " << number << " is " << oct << number << " in octal" << endl; }

    else if (base == 3) {
        cout << "Number " << number << " is " << hex << number << " in hexadecimal." << endl; }

    else {
        cout << "Your choice is not valid! Try again!" << endl; }
}

int main()
{
    int number, base;
    cout << "Welcome to the numerical base converter! Input a decimal number: " << endl;
    cin >> number;
    cout << "Which base do you like to convert?\n1 --> Decimal\n2 --> Octal\n3 --> Hexadecimal" << endl;
    cin >> base;
    converter_2 (number, base);
}

int main() // Loops: I --> Initialize variable ; C --> Condition; U --> Update variable
{
    int x, i = 0;
    while (i < 10) {
        cout << i << endl;
        i++; }
    for (x = 0; x < 10; x++) {
        cout << x << endl; }
}

int factorial_1 (int number)
{
    int fact = 1;
    for ( number = number ; number > 1; number--)
    {
        fact = fact * number ;
    }
    return fact;
}

int factorial_2 (int number)
{
    int i = 1, fact = 1;
    while ( i <= number)
    {
        fact = fact * i;
        i++;
    }
    return fact;
}

int main()
{
    int number;
    cout << "Give me a number: " << endl;
    cin >> number;
    cout << "The factorial of the number " << number << " is " << factorial_2(number) << endl;
}

int main () // With do-while statement
{
    string password = "12345";
    string guess;
    do {
        cout << "Give me a password: " << endl;
        cin >> guess; } while (guess != password);

    cout << "Welcome, Fabio!" << endl;
    return 0;
}

int main ()
{
    string word;
    cout << "Give me a word: ";
    cin >> word;
    cout << "Your word " << word << " in vertical is: " << endl;;

    for (int i = 0; i < word.size(); i++) {
        cout << word[i] << endl; }
}

int main ()
{
    int counter = 0;
    string sentence = "Hello World, this is another example";
    cout << "Your sentence " << sentence << " in vertical is: " << endl;;

    for (int i = 0; i < sentence.size(); i++) {
        cout << sentence[i] << endl; 
        
        if (sentence[i] == ' ') {
            counter = counter + 1;
            continue; } }

    cout << "And I found " << counter << " spaces in this string!" << endl;
    return 0;
} 

#include <iostream>
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

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print_vector (vector<int> something)
{
    for (int i = 0; i < something.size() ; i++) {
        cout << something[i] << " "; }
}

int main () // Using vectors
{
    vector<int> numbers = {1, 2, 3};
    int answer, index, new_value;

    cout << "In the begin, the vector is: ";
    print_vector(numbers);
    cout << endl;

    do
    {
        cout << "Do you like to modify or increment this vector?\n1 --> Modify\n2 --> Increment\n3 --> No" << endl;
        cout << "Your choice: ";
        cin >> answer;
        
        switch (answer)
        {
        case 1:
            cout << "Which index would you like to modify?: ";
            cin >> index;

            if (index < numbers.size()) {
                cout << "New value: ";
                cin >> new_value;
                numbers[index] = new_value;
                cout << " " << endl;
                cout << "The vector is now: ";
                print_vector(numbers); }
            else {
                cout << "Out of the range! Please try again.";
                break; }

            break;

        case 2:
            cout << "Which number do you like to append? ";
            cin >> new_value;
            numbers.push_back(new_value);
            cout << " " << endl;
            cout << "The vector is now: ";
            print_vector(numbers);
            break;
        
        default:
            break;
        }
        
    cout << endl;
    } while (answer != 3);

    cout << "Final version of vector: ";
    print_vector(numbers);
    cout << endl;
    cout << "Done!";
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main() // Using new for-loop template
{
    vector<int> all_numbers;
    string answer;
    int number, resto;

    cout << "Do you like ODD numbers or EVEN numbers? ";
    cin >> answer;
    resto = answer == "ODD" ? 1 : 0; // resto == 1 if answer == "ODD" else 0
    cout << "How many numbers you want? ";
    cin >> number;

    while (all_numbers.size() < number)
    {
        for (int i = 0; i < 2 * number; i++)
        {
            if (i % 2 == resto)
            {
                all_numbers.push_back(i);
            }
        }
    }

    cout << "Your numbers are: ";
    for (int n : all_numbers) // for n in all_numbers: print(n)
    {
        cout << n << " ";
    }
}

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() // Using files to write and read .txt
{
    ofstream file;
    file.open("hello.txt");
    vector<int> numbers;

    // Write numbers until 1000 in .txt file
    for (int n = 0; n <= 1000; n++) {
        numbers.push_back(n); }

    for (int n: numbers) {
        file << n << endl; }

    // Read data of .txt
    int input;
    while (file >> input) {
        numbers.push_back(input); }

    for (int number : numbers) {
        cout << number << endl; }
        
    return 0;
}

#include <iostream>
#include <vector>

int main() // Using static and dinamic matrix (array and vector)
{
    int numbers[][3] = {    {1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9},   };

    for (int row = 0; row < 3; row++) 
    {
        for (int column = 0; column < 3; column++) 
        {
            cout << numbers[row][column] << " "; 
        }
        cout << endl; 
    }

    vector<vector<int>> more_numbers = {    {10, 11, 12},
                                            {13, 14, 15},
                                            {16, 17, 18},    };


    for  (int row = 0; row < more_numbers.size(); row++)
    {
        for (int column = 0; column < more_numbers[row].size(); column++)
        {
            cout << more_numbers[row][column] << " ";
        }
        cout << endl;
    }
    return 0;
}