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
#include <cmath>
using namespace std;

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

#include <iostream>
using namespace std;

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
    cout << text.erase(text.length() - 1); // Delete last letter
    cout << text.pop_back(); // Delete last letter too
    cout << text.insert(5, " something "); // Append "something" in 5th index
    cout << text.erase(3); // Delete letter in 3rd index
}
