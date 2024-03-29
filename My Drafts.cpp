// Created on February, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <array>
#include <algoritm>
#include <string>
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
    while ( file >> input) {
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

void swap(int a , int b)
{
    int temporario;
    temporario = b;
    b = a;
    a = temporario;
    cout << "Value a: " << a << " and value b: " << b << "." << endl;
}

int main() // Swap two numbers
{
    int a, b;
    cout << "Input two numbers" << endl;
    cout << "Value a: ";
    cin >> a;
    cout << "Value b: ";
    cin >> b;
    swap(a, b); 
    return 0;
}

#include <iostream>
using namespace std;

int main() // Exercício 1.1 (char --> ascii code)
{
    char letter;
    cout << "Please enter a letter: ";
    cin >> letter;
    cout << "ASCII code of '" << letter << "' : " << (int) letter << endl;
}

int main() // Exercício 1.2 (soma, média, diferença)
{
    double A, B, C, media, diferenca;
    cout << "Please enter three numbers:" << endl;
    cout << "A ? ";
    cin >> A;
    cout << "B ? ";
    cin >> B;
    cout << "C ? ";
    cin >> C;

    cout.precision(4); // Round at 3 decimal places

    media = (A + B + C) / 3;
    cout << "media = " << media << endl;
    diferenca = A - media;
    cout << "A-media = " << diferenca << endl;
    diferenca = B - media;
    cout << "B-media = " << diferenca << endl;
    diferenca = C - media;
    cout << "C-media = " << diferenca << endl;

    return 0;
}

int main() // Exercício 1.3 (massa de uma esfera)
{
    const int pi = 3.14;
    double densidade, raio, massa;

    cout << "Valor da desidade da esfera, em quilogramas por metro cubico (Kg/m^3): ";
    cin >> densidade;
    cout << "Valor do raio da esfera, em metros (m): ";
    cin >> raio;

    massa = 4 / 3 * (densidade*pi*raio*raio*raio);
    cout << "A esfera considerada tem " << massa << " Kg de massa aproximadamente." << endl;
    return 0;
}

int main() // Exercício 1.4 (solver linear equations with 2 icognits)
{
    double a, b, c, d, e, f, x, y;
    cout << "The linear system is:" << endl;
    cout << "{ ax + by = c\n{ dx + ey = f" << endl;
    cout << "Please enter values for each icognit:" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    cout << "d: ";
    cin >> d;
    cout << "e: ";
    cin >> e;
    cout << "f: ";
    cin >> f;

    x = (c*e - b*f)/(a*e - b*d);
    y = (a*f - c*d)/(a*e - b*d);

    cout << "Solutions: x = " << x << " and y = " << y << endl;
    return 0;
}

int main() // Exercício 1.5 (dias, horas, minutos, segundos)
{
    string t1, t2;
    int d, h1, h2, m1, m2, s1, s2, total, resto;

    // Inputs and Strings --> Integers
    cout << "Tempo 1 (horas minutos segundos) ? ";
    getline (cin, t1);
    t1 = "10 25 89";
    h1 = stoi(t1.substr (0,2));
    m1 = stoi(t1.substr (3,2));
    s1 = stoi(t1.substr (6,2));
    cout << "Tempo 2 (horas minutos segundos) ? ";
    getline (cin, t2);
    h2 = stoi(t2.substr (0,2));
    m2 = stoi(t2.substr (3,2));
    s2 = stoi(t2.substr (6,2));
    
    // Total of seconds, remainder...
    total = (h1+h2)*(60*60) + (m1+m2)*(60) + (s1+s2);
    cout << total << endl;
    d = total / (24*60*60);
    total = total % (24*60*60);
    h1 = total / (60*60);
    total = total % (60*60);
    m1 = total / 60;
    s1 = total % 60;
    cout << "Soma dos tempos: " << d << " dia, " << h1 << 
    " horas, " << m1 << " minutos e " << s1 << " segundos" << endl;
    return 0;
}

// Exercício 1.6 (área do triângulo)
// using #include <cmath> for sqrt

double distance_t (int x1, int x2, int y1, int y2)
{
    double dist;
    dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return dist;
}

double area (int p, int p1, int p2, int p3)
{
    double area;
    area = sqrt(p*(p-p1)*(p-p2)*(p-p3));
    return area;
}

int main()
{
    int ax, ay, bx, by, cx, cy;
    double distance, area_total, l1, l2, l3, l_total;

    // Input
    cout << "Por favor insira as coordenadas dos vertices do triangulo:" << endl;
    cout << "Vertice A --> Abcissa (x):";
    cin >> ax;
    cout << "Vertice A --> Ordenada (y):";
    cin >> ay;
    cout << "Vertice B --> Abcissa (x):";
    cin >> bx;
    cout << "Vertice B --> Ordenada (y):";
    cin >> by;
    cout << "Vertice C --> Abcissa (x):";
    cin >> cx;
    cout << "Vertice C --> Ordenada (y):";
    cin >> cy;

    // Data
    l1 = distance_t (ax, bx, ay, by);
    l2 = distance_t (ax, cx, ay, cy);
    l3 = distance_t (bx, cx, by, cy);
    l_total = l1 + l2 + l3;
    area_total = area (l_total, l1, l2, l3); 
    cout << "O triangulo considerado tem " << area_total << " unidades de area." << endl;
    return 0;
}

int main() // Exercício 2.1 ( 1.4 + impossível + indeterminado + possível e determinado)
{
    double a, b, c, d, e, f, x, y;
    cout << "The linear system is:" << endl;
    cout << "{ ax + by = c\n{ dx + ey = f" << endl;
    cout << "Please enter values for each icognit:" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    cout << "d: ";
    cin >> d;
    cout << "e: ";
    cin >> e;
    cout << "f: ";
    cin >> f;

    if ((a*e - b*d) == 0)
    {
        // Sistema impossível
        cout << "Este sistema é impossível!" << endl;
    }
    else if (a/d != b/e && b/e != c/f)
    {
        // Sistema indeterminado
        cout << "Este sistema é indeterminado!" << endl;
    }
    else
    {
        // Sistema possível e determinado
        x = (c*e - b*f)/(a*e - b*d);
        y = (a*f - c*d)/(a*e - b*d);
        cout << "Solutions: x = " << x << " and y = " << y << endl;
    }
    return 0;
}

int main () // Exercício 2.2.a (maior e menor número de entre três)
{
    int a, b, c, maior, menor;
    cout << "Insira 3 numeros:" << endl;
    cout << "Primeiro numero: ";
    cin >> a;
    maior = a;
    menor = a;
    cout << "Segundo numero: ";
    cin >> b;
    maior = b > maior ? b : maior;
    menor = b < menor ? b : menor;
    cout << "Terceiro numero: ";
    cin >> c;
    maior = c > maior ? c : maior;
    menor = c < menor ? c : menor;

    cout << "O maior numero: " << maior << " e o menor: " << menor << endl;
    return 0;
}

int main () // Exercício 2.2.b (ordem decrescente)
{
    int a, b, c, maior, menor, medio;
    cout << "Insira 3 numeros:" << endl;
    cout << "Primeiro numero: ";
    cin >> a;
    maior = a;
    menor = a;
    cout << "Segundo numero: ";
    cin >> b;
    maior = b > maior ? b : maior;
    menor = b < menor ? b : menor;
    cout << "Terceiro numero: ";
    cin >> c;
    maior = c > maior ? c : maior;
    menor = c < menor ? c : menor;
    medio = (a + b + c) - (maior + menor);
    cout << "Ordem decrescente: " << maior << ", " << medio << ", " << menor << endl;
    return 0;
}

int main () // Exercício 2.2.c (construção de um triângulo com os valores)
{
    int a, b, c, maior, menor, medio;
    cout << "Insira 3 numeros:" << endl;
    cout << "Primeiro numero: ";
    cin >> a;
    maior = a;
    menor = a;
    cout << "Segundo numero: ";
    cin >> b;
    maior = b > maior ? b : maior;
    menor = b < menor ? b : menor;
    cout << "Terceiro numero: ";
    cin >> c;
    maior = c > maior ? c : maior;
    menor = c < menor ? c : menor;
    medio = (a + b + c) - (maior + menor);

    if ((maior >= (medio + menor)) || !(a>0 && b>0 && c>0))
    {
        // Se os vértices não se unirem ou um dos comprimentos for negativo
        cout << "Nao se pode construir um triangulo com estes valores!" << endl;
    }
    else
    {
        cout << "Pode-se construir um triangulo com estes valores!" << endl;
    }
    return 0;
}

int main () // Exercício 2.3 (calculadora)
{
    double a, b, resultado;
    string conta;

    cout << "Insira 2 numeros na calculadora:" << endl;
    cout << "Primeiro numero: ";
    cin >> a;
    cout << "Segundo numero: ";
    cin >> b;
    cout << "Que conta deseja efetuar?\n+ --> a+b\n- --> a-b\nx --> axb\n/ --> a/b\nSua escolha: ";
    cin >> conta;

    if (conta == "+")
    {
        resultado = a+b ;
        cout << "a+b = " << resultado << endl;
    }
    else if (conta == "-")
    {
        resultado = a-b ;
        cout << "a-b = " << resultado << endl;
    }
    else if (conta == "x")
    {
        resultado = a*b ;
        cout << "axb = " << resultado << endl;
    }
    else if (conta == "/")
    {
        resultado = a/b ;
        cout << "a/b = " << resultado << endl;
    }
    else
    {
        cout << "Opcao inexistente na calculadora!" << endl;
    }
    return 0;
}

int main () // Exercício 2.4 (custo do transporte da mercadoria)
{
    double peso, resultado;

    cout << "Insira o peso da mercadoria, em gramas: ";
    cin >> peso;

    if (peso < 500)
    {
        resultado = 5;
    }
    else if (peso >= 500 && peso <= 1000)
    {
        resultado = 5 + (1.5 * ((peso - 500)/100));
    }
    else
    {
        resultado = 12.5 + (5 * ((peso - 1000)/250));
    }
    cout << "O total a pagar e " << resultado << " euros." << endl;
    return 0;
}

int main () // Exercício 2.5 (fórmula resolvente)
{
    double a, b, c, binomio, sol1, sol2, complex;
    string answer;

    cout << "A formula da equacao quadratica e dada por:\n{ ax^2 + bx + c\nInsira os valores dos coeficientes:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    binomio = pow(b, 2) - 4*a*c;

    if (binomio > 0)
    {
        answer = "A equacao tem duas raizes reais diferentes: ";
        sol1 = ((-1*b) + sqrt(binomio))/(2*a);
        sol2 = ((-1*b) - sqrt(binomio))/(2*a);
        cout << answer << sol1 << " e " << sol2 << endl;
    }
    else if (binomio == 0)
    {
        answer = "A equacao tem duas raizes reais iguais: ";
        sol1 = (-1*b)/(2*a);
        cout << answer << sol1 << endl;
    }
    else
    {
        answer = "A equacao tem 2 raizes complexas conjugadas: ";
        complex = sqrt(binomio*-1)/(2*a);
        sol1 = (-b)/(2*a);
        cout << answer << sol1 << "+" << complex << "i " << " e " 
        << sol1 << "-" << complex << "i" << endl;
    }
    return 0;
}

int main () // Exercício 2.6.a (o número é primo ou não)
{
    bool flag = true;
    int number;
    string answer;

    cout << "Please enter a number: ";
    cin >> number;

    for (int i = 2; i < sqrt(number); i++) {
        flag = flag && ((number % i) != 0); }
        
    answer = flag == true ? "Its prime" : "Isn't prime";
    cout << answer;
    return 0;
}

int main () // Exercício 2.6.b (100 primeiros números primos)
{
    bool flag;
    int cobaia = 0, contador = 0;

    for (int cobaia = 2; contador < 100; cobaia++)
    {   
        flag = true;

        for (int i = 2; i < sqrt(cobaia); i++) 
        {
            flag = flag && ((cobaia % i) != 0); 
        }
            
        if (flag == true)
        {
            cout << cobaia << " ";
            contador++;
        }
    }
    return 0;
}

int main () // Exercício 2.6.c (números primos inferiores a 1000)
{
    bool flag;
    int cobaia = 0;

    for (int cobaia = 2; cobaia < 1000; cobaia++)
    {   
        flag = true;

        for (int i = 2; i < sqrt(cobaia); i++) 
        {
            flag = flag && ((cobaia % i) != 0); 
        }
            
        if (flag == true)
        {
            cout << cobaia << " ";
        }
    }
    return 0;
}

int main () // Exercício 2.6.d (divisores de um número)
{
    int number;

    cout << "Please enter a number: ";
    cin >> number;
    cout << "Divisors of " << number << ": ";

    for (int divisor = 2; divisor <= number; divisor++)
    {
        if (number % divisor == 0)
        {
            cout << divisor << " ";
        }
    }
    return 0;
}

int main () // Exercício 2.6.e (ver se um número é perfeito)
{
    int number, total = 0;
    string answer;

    cout << "Please enter a number: ";
    cin >> number;
    cout << "Divisors of " << number << ": ";

    for (int divisor = 1; divisor < number; divisor++)
    {
        if (number % divisor == 0)
        {
            cout << divisor << " ";
            total = total + divisor;
        }
    }

    cout << endl;
    answer = number == total ? "Its perfect!" : "Isn't perfect!";
    cout << answer << endl;

    return 0;
}

double rad (double degree)
{
    const double pi = 3.14159265;
    double rads;
    rads = (pi*degree)/180.0;
    return rads;
}

int main () // Exercício 2.7.a (tabela de ângulos) ---->>>>>>>>>>>>>>>>> Bug Aqui! @19:07h de 07/02/2021
{
    double angulos[] = {0, 15, 30, 45, 60, 75, 90};
    string temp = "ang     sen        cos         tan";

    cout << temp << endl;
    for (double degree : angulos)
    {
        cout << setw(3) << degree;
        degree = rad(degree);
        cout << "   " << sin(degree) << "   " << cos(degree) << "   " << tan(degree) << endl;
    }
}

int main () // FizzBuzz version 1 (a number) 
{
    int number;
    cout << "Please enter a number: ";
    cin >> number;
    if (number % 15 == 0)
    {
        cout << "FizzBuzz";
    }
    else if (number % 3 == 0)
    {
        cout << "Fizz";
    }
    else if (number % 5 == 0)
    {
        cout << "Buzz";
    }
    else
    {
        cout << number;
    }
    return 0;
}

int main () // FizzBuzz version 2 (sequence) 
{
    int number, i;
    cout << "Please enter a number: ";
    cin >> number;
    cout << "The sequence is: ";

    for (int i = 1; i <= number; i++)
    {
        if (i % 15 == 0)
        {
            cout << "FizzBuzz ";
        }
        else if (i % 3 == 0)
        {
            cout << "Fizz ";
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz ";
        }
        else
        {
            cout << i << " ";
        }
    }
}

int main () // Area e perímetro de um círculo
{
    const double pi = 3.14;
    double raio, perimetro, area;

    cout << "Enter a distance: ";
    cin >> raio;

    perimetro = 2*pi*raio;
    area = pi*raio*raio;

    cout << "Perimetro do circulo: " <<perimetro << "\nArea do circulo: " << area << endl;
    return 0;
}

int main () // hipotenusa de um triângulo retângulo
{
    double c1, c2, hipotenusa;

    cout << "Inserir o valor do cateto 1: ";
    cin >> c1;
    cout << "Inserir o valor do cateto 2: ";
    cin >> c2;

    hipotenusa = sqrt(pow(c1, 2) + pow(c2, 2));
    cout << "A hipotenusa mede " << hipotenusa << " unidades de comprimento." << endl;
    return 0; 
}

int main () // Mechanics
{
    double a, b, degree, radius, meters;
    int const velocidade = 18;
    double const pi = 3.14;

    cout << "Degree? ";
    cin >> degree;

    radius = (degree*pi) / 180;
    a = sin(radius);
    b = cos(radius);
    meters = (a*b*velocidade*velocidade)/5;

    cout << "The ball can fly " << meters << " meters." << endl;
}

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

int main () // Trip cost
{
    double distance, many_100, litres;
    double fuel_to_100, price_per_litre, money;

    cout << "How many kilometers you have to drive? ";
    cin >> distance;
    cout << "How many fuel your car spend to travell 100 km? Liters: ";
    cin >> fuel_to_100;
    cout << "What is the price for liter of fuel? ";
    cin >> price_per_litre;

    many_100 = distance / 100;
    litres = many_100 * fuel_to_100;
    money = price_per_litre * litres;

    cout << "You will spend " << money << " euros to travel!" << endl;
}

int main () // Weird sum
{
    int a, b, difference, sum, answer;
    string type;

    cout << "Value of a: ";
    cin >> a;
    cout << "Value of b: ";
    cin >> b;

    sum = a + b;
    difference = a - b;
    type = (difference % 2 != 0) ? "odd" : "even";

    if ( type == "odd" ) {
        answer = sum + a*b;
        cout << "Because the difference between a and b is " << type << " the weird sum is " << answer << endl;
    }
    else {
        answer = sum*2;
        cout << "Because the difference between a and b is " << type << " the weird sum is " << answer << endl;
    }
    return 0;
}

int main () // Easy change
{
    int nota_50, nota_20, nota_10, nota_5;
    int price, received, troco;
    string answer = "The change is composed by ";

    do  {    
        do  {
            cout << "Enter a price of budgeting: ";
            cin >> price;
            if (price % 5 != 0) {
                cout << "Your input is invalid! Price have to be a multiple of 5. Please try again." << endl;
            }
            } while (price % 5 != 0);

        do  {
            cout << "Enter a price received: ";
            cin >> received;
            if (received % 5 != 0) {
                cout << "Your input is invalid! Money received have to be a multiple of 5. Please try again." << endl;
            }
            } while (received % 5 != 0);

        troco = received - price;
        if (troco < 0) {
            cout << "The customer has to give more money to pay! Please try again." << endl;
        }
        } while (troco < 0 || troco % 5 != 0);
    
    if (troco == 0) {
        cout << "You don't need change. It's all paid for." << endl;
    }
    else  {

        nota_50 = troco / 50;
        nota_20 = (troco % 50) / 20;
        nota_10 = ((troco % 50) % 20) / 10;
        nota_5 = (((troco % 50) % 20) % 10) / 5;

        int counter = 0;
        int result[4] = { nota_50, nota_20, nota_10, nota_5 };

        // How many types of notes I will put in answer?
        for (int index = 0; index < 4; index++) {
            if (result[index] != 0) {
                counter++;
            }
        }

        string keys[4] = { " notes of 50 euros", " notes of 20 euros", " notes of 10 euros", " notes of 5 euros"};
        int pointer = counter;
        counter = 0;

        for (int index = 0; index < 4; index++) {
            if (result[index] != 0) {

                counter++;

                if (counter < pointer - 1) {
                    answer = answer + to_string(result[index]) + keys[index] + ", ";
                }
                else if (counter == pointer - 1) {
                    answer = answer + to_string(result[index]) + keys[index] + " and ";
                }
                else {
                    answer = answer + to_string(result[index]) + keys[index] + ".";
                }
            }
            else {
                continue;
            }
        }
    }
    cout << answer << endl;
    return 0;
}

int main () // Multiples of 3 or 5
{
    int number, result;
    cout << "Enter a number: ";
    cin >> number;
    for (int i; i <= number; i++) {
        if ( i % 5 == 0 || i % 3 == 0 ) {
            result = result + i;
        }
        else {
            continue;
        }
    }
    cout << "The result is " << result << endl;
    return 0;
}

int main () // Sum of divisors
{
    int number, result = 0;
    cout << "Enter a number: ";
    cin >> number;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            result = result + i;
        }
        else {
            continue;
        }
    }
    cout << "The sum of divisors of number " << number << " is " << result << endl;
    return 0;
}

int main () // Looping numbers
{
    string substring, looping = "0123456789876543210";
    int number;

    cout << "Enter a integer number: ";
    cin >> number;
    substring = to_string(number);
    
    if (looping.find(substring) != -1) {
        cout << "It is a looping number :)" << endl;
    }
    else {
        cout << "It is not a looping number :(" << endl;
    }
    return 0;
}

double rounded (double number, double exponent)
{
    double n;
    n = round((number * pow(10, exponent)))/pow(10, exponent);
    return n;
}

int main () // SquareRoot
{
    double number, a, b = 0, medio, exponent = -6, precision, zeros;
    cout << "Enter a number: ";
    cin >> number;
    a = number;
    cout << "Enter a precision of result: ";
    cin >> precision;

    for (char number: to_string(1 / precision)) {
        if (number == '0') {
            exponent++;
        }
    }

    while (true) {

        medio = (a + b) / 2;
        if ((pow(medio, 2) == number) || ((a-b) <= precision)) {
            break;
        }
        if (medio*medio > number) {
            a = medio;
        }
        else {
            b = medio;
        }
    }

    cout << "The square root of number " << number << " is " << rounded (medio, exponent) << endl;
    return 0;
}

int factorial (int number)  
{
    if (number <= 1) { return 1 ; }
    else { return number * factorial (number - 1) ; }
}

 int main () // pi by using the Ramanujan formula
 {
    double inverso = 0, pi = 0, acumulador = 0;
    double const coeficiente = (2*sqrt(2))/(9801);

    for (int K = 0; K <= 50; K++) {
        acumulador = ( (factorial(4*K)) * (1103 + 26390*K) ) / ( (pow((factorial(K)), 4)) * (pow(396, 4*K)) );
        inverso = inverso + acumulador;
    }

    inverso = acumulador * coeficiente;
    pi = 1 / inverso;
    cout << "O valor de Pi é " << pi << endl;

    return 0;
 }

int factorial (int number)  
{
    if (number <= 1) { return 1 ; }
    else { return number * factorial (number - 1) ; }
}

int main () // combinations using FPRO formula
{
    int objects, selected;
    double result;

    cout << "Number of objects: ";
    cin >> objects;
    cout << "Number of objects selected: ";
    cin >> selected;
    
    result = floor((factorial(objects))/(factorial(selected)*factorial(objects-selected)));
    cout << "Number of combinations: " << result;
    return 0;
 }

int main () // Primes between lower and upper numbers
{
    int lower, upper;
    vector<int> prime_numbers;
    bool flag = true;

    do  {
        cout << "Lower number: ";
        cin >> lower;
        cout << "Upper number: ";
        cin >> upper;
        if (lower >= upper) {
            cout << "Out of range! Please try again!" << endl;
        }
        else if (upper <= 0) {
            cout << "There isn't prime numbers under 0! Please try again!" << endl;
        }
        } while (upper <= lower || upper <= 0 );

    for ( int number = lower; number <= upper; number++ ) {
        flag = true;
        for ( int denominador = 2; denominador < number ; denominador++ ) {
            flag = flag && (number % denominador != 0);
        }
        if (flag) {
            prime_numbers.push_back(number);
        }
        else {
            continue;
        }
    }
    cout << "Prime numbers between " << lower << " and " << upper << " are: ";
    for (int n : prime_numbers) {
        cout << n << " ";
    }
    return 0;
}

int main () // Reverse integers
{
    int number, inverse_number = 0, aux, last_digit;

    cout << "Enter a number: ";
    cin >> number;
    aux = number;

    while (aux > 0) {
        last_digit = aux % 10;
        inverse_number = 10*inverse_number + last_digit;
        aux = aux / 10;
    }

    cout << "The inverse integer of number " << number << " is " << inverse_number << "!" << endl;
    return 0;
}

int main () // Split function with c++
{
    vector<string> words;
    string sentence, current_word;

    cout << "Input a sentence: ";
    getline(cin, sentence);
    sentence = sentence + " ";

    for (char letter : sentence) {
        if (letter != ' ') {
            current_word = current_word + letter;
        }
        else {
            words.push_back(current_word);
            current_word = "";
        }
    }
    for (string word : words) {
        cout << word << endl;
    }
    return 0;
}

void ang (int angulo)
{
    cout << (double) angulo ;
}

double rad (double degree)
{
    const double pi = 3.14159265;
    double rads;
    rads = (pi*degree)/180.0;
    return rads;
}

int main () // Exercício 2.7.a (tabela de ângulos)
{
    double angulos[] = {0, 15, 30, 45, 60, 75, 90};
    string template_f = "ang     sen        cos         tan";

    cout << template_f << endl;
    for (double degree : angulos)
    {
        cout << degree;
        degree = rad(degree);
        double a = sin(degree);
        double b = cos(degree); 
        double c = tan(degree);

        cout << "   " << a << "   " << b << "   " << c << setprecision(6) << fixed << endl;
    }
}

double rad (double degree)
{
    const double pi = 3.14159265;
    double rads;
    rads = (pi*degree)/180.0;
    return rads;
}

int main () // Exercício 2.7.b (tabela de ângulos por input)
{
    double lower, upper, incremento;
    string template_b = "ang    sen     cos     tan";

    cout << "Enter a lower number in degrees: ";
    cin >> lower;
    cout << "Enter a upper number in degrees: ";
    cin >> upper;
    cout << "Enter a increment number: ";
    cin >> incremento;

    cout << endl << template_b;
    for (double x = lower; x <= upper; x = x+incremento) {
        cout << x << "   ";
        cout << sin(rad (x)) << "   " << cos(rad (x)) << "   " << tan(rad (x)) << endl;
    }
    return 0;
}

int main () // Exercício 2.8 Juros compostos
{
    double n, q, j, result;

    cout << "Quantos anos? ";
    cin >> n;
    cout << "Quantia inicial: ";
    cin >> q;
    cout << "Taxa de juros anuais, em percentagem: ";
    cin >> j;

    result = q*pow((1+j), n);

    cout << "No final de " << n << " anos deveria ter " << result << " euros no banco!" << endl;
    return 0;
}

int main () // Exercício 2.9.a (somador, media, maior, menor com 0)
{
    int soma = 0, maior = -100000, menor = 100000, input;
    double media, contador;

    do  {
        cout << "Numero: ";
        cin >> input;
        maior = input > maior ? input : maior;
        menor = input < menor ? input : menor;
        soma = soma + input;
        contador = contador + 1;
        } while (input != 0);

    media = soma / contador;
    cout << "Dados obtidos\nSoma: " << soma << endl;
    cout << "Media: " << media << endl;
    cout << "Maior numero colocado: " << maior << endl;
    cout << "Menor numero colocado: " << menor << endl;
    return 0;
}

int main () // Exercício 2.9.b (somador, media, maior, com comprimento)
{
    int soma = 0, maior = -100000, menor = 100000, input, comprimento;
    double media, contador = 0;

    cout << "Qual e o comprimento da sequencia? ";
    cin >> comprimento;

    do  {
        cout << "Numero: ";
        cin >> input;
        maior = input > maior ? input : maior;
        menor = input < menor ? input : menor;
        soma = soma + input;
        contador = contador + 1;
        } while (contador != comprimento);

    media = soma / contador;
    cout << "Dados obtidos\nSoma: " << soma << endl;
    cout << "Media: " << media << endl;
    cout << "Maior numero colocado: " << maior << endl;
    cout << "Menor numero colocado: " << menor << endl;
    return 0;
}

int main () // Exercício 2.9.c (somador, media, maior, com tecla end of input)
{
    int soma = 0, maior = -100000, menor = 100000, input;
    double media, contador = 0;

    do  {
        cout << "Numero: ";
        cin >> input;
        maior = input > maior ? input : maior;
        menor = input < menor ? input : menor;
        soma = soma + input;
        contador = contador + 1;
        } while (!(cin.eof()));

    media = soma / contador;
    cout << "Dados obtidos\nSoma: " << soma << endl;
    cout << "Media: " << media << endl;
    cout << "Maior numero colocado: " << maior << endl;
    cout << "Menor numero colocado: " << menor << endl;
    return 0;
}

int main () // Exercício 2.10.a (capicua com números de 3 dígitos)
{
    int number;
    string comparation;

    cout << "Numero inteiro com 3 digitos: ";
    cin >> number;
    comparation = to_string(number);

    if ( comparation[0] == comparation[2] ) {
        cout << "O numero " << number << " e uma capicua!";
    }
    else {
        cout << "O numero " << number << " nao e uma capicua!";
    }
    return 0;
}

int main () // Exercício 2.10.b (capicua total)
{
    int number, last_digit, aux, comparation = 0;

    cout << "Enter a integer number: ";
    cin >> number;
    aux = number;
    
    while (aux > 0) {
        last_digit = aux % 10;
        comparation = comparation*10 + last_digit;
        aux = aux / 10;
    }

    if ( number == comparation ) {
        cout << "O numero " << number << " e uma capicua!";
    }
    else {
        cout << "O numero " << number << " nao e uma capicua!";
    }
    return 0;
}

int main () // Exercício 2.11.a - Constante matemática pi
{
    int n;
    double result = 0; 

    cout << "Quantas parcelas devo somar? ";
    cin >> n;

    for (int i = 1; i <= n ; i++) {

        double denominador = 2*i-1;
        if ( i%2 == 1) {
            // Somar
            result = result + 4/denominador;
        }
        else {
            // Subtrair
            result = result - 4/denominador;
        }
    }
    cout << "O valor de pi: " << result << endl;
    return 0;
}

int factorial (int number) 
{
    if (number <= 1) { return 1 ; }
    else { return number * factorial(number - 1) ; }
}

int main () // Exercício 2.11.b - Constante matemática e
{
    int n;
    double result = 0; 

    cout << "Quantas parcelas devo somar? ";
    cin >> n;

    for (int i = 1; i < n ; i++) {

        double denominador = factorial(i-1);
        result = result + 1/denominador;

    }
    cout << "O valor de e: " << result << endl;
    return 0;
}

int factorial (int number) 
{
    if (number <= 1) { return 1 ; }
    else { return number * factorial(number - 1) ; }
}

int main () // Exercício 2.11.c -> e elevado a -x
{
    int n, x;
    double result = 1; 

    cout << "Quantas parcelas devo somar? ";
    cin >> n;
    cout << "Qual o valor de x? ";
    cin >> x;

    for (int i = 1; i < n ; i++) {

        double denominador = factorial(i);
        if ( i%2 == 1) {
            result = result - pow(x, i)/denominador;
        }
        else {
            result = result + pow(x, i)/denominador;
        }
    }
    cout << "O valor de e elevado a menos x: " << result << endl;
    return 0;
}

int main () // Exercício 2.12.a - Pi com precisão
{
    int i = 1;
    double result = 0, precision; 
    double const pi = 3.14159265359;

    cout << "Precisao pretendida? ";
    cin >> precision;

    do {
        double denominador = 2*i-1;
        if ( i%2 == 1) {
            // Somar
            result = result + 4/denominador;
        }
        else {
            // Subtrair
            result = result - 4/denominador;
        }
        i++;

        } while (abs(result-pi) > precision);

    cout << "O valor de pi: " << result << endl;
    return 0;
}

int factorial (int number) 
{
    if (number <= 1) { return 1 ; }
    else { return number * factorial(number - 1) ; }
}

int main () // Exercício 2.12.b - e com precisão
{
    double result = 0, precision; 
    int i = 1;
    double const e = 2.71828;

    cout << "Precisao pretendida? ";
    cin >> precision;

    do {
        double denominador = factorial(i-1);
        result = result + 1/denominador;
        i++;
        } while (abs(result - e) > precision) ;

    cout << "O valor de e: " << result << endl;
    return 0;
}

int factorial (int number) 
{
    if (number <= 1) { return 1 ; }
    else { return number * factorial(number - 1) ; }
}

int main () // Exercício 2.11.c -> e elevado a -x com precisão
{
    int x, i = 1;
    double result = 1, precision;
    const double e = 2.71828; 

    cout << "Qual o valor de x? ";
    cin >> x;
    cout << "Qual a precisao pretendida? ";
    cin >> precision;
    double compare = pow(e, (-1)*x);

    do  {
        double denominador = factorial(i);
        if ( i%2 == 1) {
            result = result - pow(x, i)/denominador;
        }
        else {
            result = result + pow(x, i)/denominador;
        }
        i++;
        } while ( abs(result - compare) > precision );

    cout << "O valor de e elevado a menos x: " << result << endl;
    return 0;
}

vector<int> primes_until (int number)
{
    vector<int> primes;
    bool flag = true;

    for (int n = 2; n <= number; n++) {
        flag = true;
        for (int denom = 2; denom <= sqrt(n) ; denom++) {
            flag = flag && ( n % denom != 0 );
            }
        if (flag) {
            primes.push_back(n);
        }
        else { continue; }
    }
    return primes;
}

int main () // Exercício 2.13 - Fatorização
{
    int number;
    do  {
        cout << "Please enter a integer number: ";
        cin >> number;
        if (number < 2) {
            cout << "Input error. Please try again!" << endl;
        }
        } while (number < 2);
    int aux = number;

    vector<int> factors;
    for (int n: primes_until(number)) {
        while ( aux % n  == 0 ) {
            aux = aux / n;
            factors.push_back(n);
        }
    }

    string answer = "O numero " + to_string(number) + " pode ser fatorizado em ";
    for (int fact : factors) {
        answer = answer + to_string(fact) + " x ";
    }

    int index = 0;
    while (index != (answer.size()-3)) {
        cout << answer[index];
        index++;
    }
    return 0;
}

int main () // Exercício 2.14.a -> SquareRot de Heron
{
    double n, rq, rqn, delta, dif;
    int nMaxIter, exponent = 0;

    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a precision of result: ";
    cin >> delta;
    cout << "Max iteration: ";
    cin >> nMaxIter;

    int counter = 0;
    rq = 1;
    do  {
        rqn = (rq + n / rq) / 2;
        dif = n - pow(rqn, 2);
        rq = rqn;
        counter++;
        } while (abs(dif) > delta && counter != nMaxIter);

    cout << rq << endl;
    return 0;
}

void rounded (double number, double exponent)
{
    double n;
    n = floor (number * pow(10, exponent) + 0.5) / pow(10, exponent);
    cout << n;
}

int main () // Exercício 2.14.b -> SquareRot de Heron with precision
{
    double n, rq, rqn, delta, dif;
    int nMaxIter, exponent = -6;

    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a precision of result: ";
    cin >> delta;

    for (char number: to_string(1 / delta)) {
        if (number == '0') {
            exponent++;
        }
    }

    rq = 1;
    do  {
        rqn = (rq + n / rq) / 2;
        dif = n - pow(rqn, 2);
        rq = rqn;
        } while (abs(dif) > delta);

    rounded (rqn, exponent);
    return 0;
}

#include <ctime>
int main () // Exercício 2.15 --> Tabuada de tempos
{
    srand(time(NULL));
    int a, b, result, input;
    double tempo_inicial, tempo_final, tempo;

    a = rand() % 10 + 2;
    b = rand() % 10 + 2;
    cout << a << " x " << b << " = ";
    tempo_inicial = time(NULL);
    cin >> input;
    tempo_final = time(NULL);
    result = a*b;
    tempo = tempo_final - tempo_inicial;

    if (result != input) { 
        cout << "Resultado incorrecto!" << endl ;
    }
    else {
            if (tempo < 5) { cout << "Bom" << endl ; }
            else if (tempo >= 5 && tempo <= 10) { cout << "Suficiente" << endl ; }
            else { cout << "Insuficiente" << endl ; }
    }
    return 0;
}

double distance (double x1, double x2, double y1, double y2) 
{
    double dist;
    dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return dist;
}

double area (double p, double p1, double p2, double p3)
{
    double area;
    area = sqrt(p*(p-p1)*(p-p2)*(p-p3));
    return area;
}

int main() // Exercício 3.1 --> Areas e distancias com funções
{
    double ax, ay, bx, by, cx, cy;
    double distance, area_total, l1, l2, l3, l_total;

    // Input
    cout << "Insira as coordenadas dos vertices do triangulo:" << endl;
    cout << "Vertice A --> Abcissa (x):";
    cin >> ax;
    cout << "Vertice A --> Ordenada (y):";
    cin >> ay;
    cout << "Vertice B --> Abcissa (x):";
    cin >> bx;
    cout << "Vertice B --> Ordenada (y):";
    cin >> by;
    cout << "Vertice C --> Abcissa (x):";
    cin >> cx;
    cout << "Vertice C --> Ordenada (y):";
    cin >> cy;

    // Data
    l1 = distance (ax, bx, ay, by);
    l2 = distance (ax, cx, ay, cy);
    l3 = distance (bx, cx, by, cy);
    l_total = l1 + l2 + l3;
    area_total = area (l_total, l1, l2, l3); 
    cout << "O triangulo considerado tem " << area_total << " unidades de area." << endl;
    return 0;
}

bool isPrime (int number) 
{
    bool flag = true;
    for (int i = 2; i < number; i++) {
        flag = flag && ( number % i != 0);
    }
    return flag;
}

int main () // Exercício 3.2.a -> Ver se um número é primo
{
    int number;
    cout << "Number? ";
    cin >> number;

    if (isPrime(number)) { cout << "This number is prime!" << endl ; }
    else { cout << "This number isn't prime!" << endl; }
    return 0;
}

int main () // Exercício 3.2.b -> 100 primeiros números primos
{
    int number = 2, counter = 0;

    do  {
        if (isPrime(number)) { cout << number << " "; counter++; number++; }
        else { number++; }
        } while (counter != 100);

    return 0;
}

int main () // Exercício 3.2.c -> Primos até 1000
{
    int number = 2, counter = 0;

    do  {
        if (isPrime(number)) { cout << number << " "; counter++; number++; }
        else { counter++; number++; }
        } while (counter < 1000);

    return 0;
}

double rounded (double number, double exponent)
{
    double n;
    n = floor (number * pow(10, exponent) + 0.5) / pow(10, exponent);
    return n;
}

int expn (double delta)
{   
    int exponent = -6;
    for (char number: to_string(1 / delta)) {
        if (number == '0') {
            exponent++;
        }
    }
    return exponent;
} 

double squareRoot (double n, double precision, int max_iteration)
{
    int counter = 0;
    double dif, rqn, rq = 1;
    do  {
        rqn = (rq + n / rq) / 2;
        dif = n - pow(rqn, 2);
        rq = rqn;
        counter++;
        } while ( (abs(dif) > precision) && (counter != max_iteration) );

    double result = rounded (rqn, expn(precision));
    return result;
}

string compare (int number, double result, double delta)
{
    // Test function
    bool flag = rounded(sqrt(number), expn(delta)) == result ? true : false ;
    if (flag) { return "Resultado aprovado!" ; }
    else { return "Resultado reprovado!" ; } 
}

int main () // Exercício 3.3 --> SquareRot de Heron with precision function
{
    double n, rq, rqn, delta, dif;
    int nMaxIter;

    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a precision of result: ";
    cin >> delta;
    cout << "Max number of iterations: ";
    cin >> nMaxIter;

    cout << "The square root of number " << n << " is " << squareRoot (n, delta, nMaxIter) << endl;
    cout << compare(n, squareRoot (n, delta, nMaxIter), delta);
    
    return 0;
}

double round (double x, unsigned n) 
{   
    double rounded = floor(x * (pow(10, n)) + 0.5) / pow(10, n) ;
    return rounded;
}

int main () // Exercício 3.4 -> Round
{   
    double number;
    int decimal_places;

    cout << "Enter a floar number: ";
    cin >> number;
    cout << "Number of decimal places to round: ";
    cin >> decimal_places;
    cout << round (number, decimal_places);
    
    return 0;
}

bool readFracc(int &numerator, int &denominator) 
{
    char operador;
    cin >> numerator >> operador >> denominator;
    bool flag = (operador != '/' || denominator == 0 || numerator == 0);

    if (flag) {
        // Fração não válida
        numerator = 0;
        denominator = 0;
        return !flag;
    }
    else {
        return !flag;
    }
}

int main () // Test function
{
    cout << readFracc(numerator)
}

#include <iostream>
using namespace std;

int main ()
{
    int A, B, sum;

    cout << "Enter a number: ";
    cin >> A;
    cout << "Another number: ";
    cin >> B;
    sum = A+B;

    if (sum < -2147483648) {
        cout << "sum underflow" << endl;
    }
    else if (sum > 2147483647) {
        cout << "sum overflow" << endl;
    }
    else {
        cout << "The sum is: " << sum << endl;
    }
    return 0;
}

void until_overflow_d ()
{
    int const max_value = 4294967295;
    bool flag = false;
    int cobaia = max_value;

    while (flag != true) {
        flag = true
        for (int denominador; int <= sqrt(cobaia); denominador++) {
            flag = flag and (cobaia % denominador != 0);
        }
        if (!(flag)) {
            cobaia = cobaia - 1;
            continue;
        }
    }
    cout << cobaia << endl;
} 

#include <iostream>
#include <cmath>
using namespace std;

int greatest_common_divisor (int a, int b) {

    if (a == b && a != 0 ) {
        return a;
    }
    else if ( a*b == 0 ) {
        int answer = a == 0 ? b : a;
        return answer;
    }
    else {
        while ( a != b ) {
            if ( a > b ) {
                a = a - b;
            }
            else if ( b > a ) {
                b = b - a;
            }
            else {
                return a;
            }
        }
    }
}

int main ()
{   
    int input1, input2;
    cout << "Enter a number: ";
    cin >> input1;
    cout << "Enter another number: ";
    cin >> input2;

    int answer = greatest_common_divisor(input1, input2);
    cout << "The greatest common divisor of numbers " << input1 << " and " << input2 << " is " << answer << endl;
    return 0;
}

void sum () 
{
    int n1, n2, n3;
    cout << "Number1, Number2, Number3 ?" << endl;
    cin >> n1 >> n2 >> n3;
    cout << "Sum is: " << n1+n2+n3 << endl;
    cout << "Double division of " << n1 << " and " << n2 << " is " << (double) n1/n2 << endl;
}

int main()
{
    const unsigned int RESULT_PRECISION = 3;
    double operand1, operand2;
    char operation;
    double result;
    bool validOperation = false;

    cout << "x op y ? ";
    cin >> operand1 >> operation >> operand2;

    if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {

        validOperation = true;

        if (operation == '+')
        result = operand1 + operand2;
        else if (operation == '-')
        result = operand1 - operand2;
        else if (operation == '*')
        result = operand1 * operand2;
        else if (operation == '/')
        result = operand1 / operand2;

    }

    if (validOperation) {
        cout << operand1 << ' ' << operation << ' ' << operand2 << " = ";
        cout << fixed << setprecision(RESULT_PRECISION) << result << endl;
    }
    else {
    cerr << "Invalid operation !" << endl;
    }
    return 0;
}

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

bool readInt(string x)
{
    bool flag = true;
    for (char c : x) {
        flag = flag && ( c == '0' || c == '1' ||c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' );
    }
    return flag;
}

int main () {

    string input, answer;
    cout << "Enter a integer number: ";
    getline(cin, input);
    answer = readInt(input) ? "True" : "False";
    cout << answer << endl;
    return 0;
}

// Declaration and simple operations with integers and float numbers
int declarations_and_simple_operations ()
{
        int operand1, operand2, sum, difference, product;
        double quotient;

        cout << "operand1 operand2 ? ";
        cin >> operand1 >> operand2;
        sum = operand1 + operand2;
        difference = operand1 - operand2;
        product = operand1 * operand2;
        quotient = (double) operand1 / operand2;

        cout << "sum = " << sum << endl;
        cout << "difference = " << difference << endl;
        cout << "product = " << product << endl;
        cout << "quotient = " << quotient << endl;
        return 0;
}

// Literals ans constants
int literals_and_constants () 
{
    cout << "Integer and decimal number: " << 1032 << endl;
    cout << "Integer and octal number: " << 012 << endl;
    cout << "Integer and hexadecimal number: " << 0x54 << endl;
    cout << "Real number with exponent: " << 2E-2 << endl;
    cout << "Character: " << 'A' << endl;
    cout << "String: " << "A simple string" << endl;
    cout << "String with quotes: " << "A 'name' simple thing" << endl;
    return 0;
}

// Else and If statements
int if_and_else_statements ()
{
    int number;
    cout << "Integer number? ";
    cin >> number;

    if (number == 0) { 
        cout << "Zero";
    }
    else if (number < 0) {
        cout << "Negative number";
    }
    else {
        cout << "Positive number";
    }
    return 0;
}

// Switch - case statements
int switch_and_case ()
{
    int number, option, result;
    cout << "Integer number: ";
    cin >> number;
    cout << "Chose an option:\n1 -- > Add 5\n2 -- > Multiply by 5" << endl;
    cin >> option;
    switch (option) {
    case 1:
        result = number + 5;
        cout << "The result is " << result << endl;
        break;
    case 2:
        result = 5 * number;
        cout << "The result is " << result << endl;
        break;
    default:
        cout << "Option is not valid" << endl;
    }
    return 0;
}

// Precision of output with include <iomanip>
int result_with_precision ()
{
    int first, second, precision;
    double quotient;
    cout << "Enter two numbers: ";
    cin >> first >> second;
    cout << "Precision? ";
    cin >> precision;
    quotient = (double) first / second;
    cout << "The result with precision is " << fixed << setprecision(precision) << quotient << endl;
    return 0;
}

// Lecture summary
int calculator ()
{
    const unsigned int RESULT_PRECISION = 3;
    double operand1, operand2;
    char operation;
    double result;
    bool validOperation = false;

    cout << "x op y ? ";
    cin >> operand1 >> operation >> operand2;

    if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {

        validOperation = true;

        if (operation == '+')
            result = operand1 + operand2;
        else if (operation == '-')
            result = operand1 - operand2;
        else if (operation == '*')
            result = operand1 * operand2;
        else if (operation == '/')
            result = operand1 / operand2;

    }

    if (validOperation) {
        cout << operand1 << ' ' << operation << ' ' << operand2 << " = ";
        cout << fixed << setprecision(5) << result << endl;
    }
    else {
    cerr << "Invalid operation !" << endl;
    }
    return 0;
}

// More switch statements with numbers. We can combine cases.
int combine_cases ()
{
    int month, year, numDays;
    cout << "Please enter a month (respective integer number): ";
    cin >> month;
    cout << "Please enter a year (respective integer number): ";
    cin >> year;

    switch (month) {
        case 1: case 3: case 5:  case 7: case 8: case 10: case 12: 
            numDays = 31;
            break;
        case 4: case 6: case 9: case 11:
            numDays = 30;
            break;
        case 2:
            if ( year%4 == 0 ) {
                numDays = 29;
            }
            else {
                numDays = 28;
            }
            break;
    }
    cout << "This month has " << numDays << " days.";
    return 0; 
}

// While statement
int while_statement ()
{   
    int number = -1;
    while ( number < 0 ) {
        cout << "Enter a positive number: ";
        cin >> number;
        if (number < 0) {
            cout << "Input error" << endl;
        }
    }
    cout << "Your positive number is " << number << endl;
    return 0;
}

// Do.. while statement:
int do_while_statement ()
{   
    int number, sum = 0;
    do  {
        cout << "Enter a positive number: ";
        cin >> number;
        if (number <= 0) {
            continue;
        }
        else {
            sum = sum + number;
        }
        } while ( number > 0 );
    cout << "Your sum is " << sum << endl;
    return 0;
}

// For statement:
int for_statement () 
{
    int value;
    cout << "Enter a integer number in range (0, 10): ";
    cin >> value;
    for (int i = 0; i <= value; i++) {
        cout << "Number: " << i << endl;
    }
    return 0;
}

// Invalids outputs
int main () 
{
    int number;
    cout << "Please enter a integer number: ";
    cin >> number;
    if ( !cin.fail() )  {
        cout << "Number * 2 = " << number*2 << endl;
    }
    else {
        cin.clear();                                            // Limpa a flag de erro
        cin.ignore(100000, '\n');                               // Limpa caracteres do buffer
        cin.ignore(numeric_limits<streamsize>::max(),'\n');     // Limpa caracteres do buffer outra opção, com #include <ios> e # include <limits>
        cout << "Input error" << endl;
    }
    return 0;
}

// Manipulation digits with setw and setfill
int digits_manipulation ()
{
    int dd, mm, yyyy;
    char sep1, sep2;

    cout << "Date (dd:mm:yyyy): ";
    cin >> dd >> sep1 >> mm >> sep2 >> yyyy;
    cout << "Date: " << setfill('0') << setw(2) << dd << sep1 << setw(2) << mm << sep2 << setw(4) << yyyy << endl;

    if (sep1 != ':' || sep2 != ':' || cin.peek() != '\n') {
        cout << "Invalid date" << endl;
    }

    return 0;
}

// Upper and lower strings --> Char by char #include <cctype>
int upper_and_lower_strings () 
{
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    int length = sentence.length(); 

    for (int i = 0; i < length; i++) { 

        int c = sentence[i]; 
        if (islower(c))  
            sentence[i] = toupper(c); 
        else if (isupper(c))  
            sentence[i] = tolower(c); 
        else
            continue;
    }

    cout << sentence << endl;
    return 0;
}

// Calculator with cin.ignore() items to confirm input 
int calculator_main ()
{
    const unsigned int NUMBER_PRECISION = 3;
    double operand1, operand2; 
    char operation;
    double result;
    bool validOperation;
    char anotherOperation;

    do  {
        
        bool validOperands;
        anotherOperation = true;
        
        do  {
                cout << endl << "x op y ? ";
                cin >> operand1 >> operation >> operand2;   
                
                if (cin.fail()) {

                    validOperands = false;

                    if (cin.eof()) {
                        anotherOperation = false;
                    }
                    else {
                        cin.clear();
                        cin.ignore(1000, '\n');
                    }
                }      
                else {
                    cin.ignore(1000, '\n');           
                }
            } while (anotherOperation && !validOperands);

        // compute result if operation is valid
        validOperation = true;
        switch (operation) {
            case '+':
                result = operand1 + operand2;
                break;
            case '-':
                result = operand1 - operand2;
                break;
            case '*':
                result = operand1 * operand2;
                break;
            case '/':
                result = operand1 / operand2;
                break;
            default:
                validOperation = false;
        }

        //show result or invalid operator message
        if (validOperation) {
            cout << fixed << setprecision(NUMBER_PRECISION);
            cout << operand1 << ' ' << operation << ' ' << operand2 <<
            " = " << result << endl;
        }
        else {
            cerr << "Invalid operator !\n";
            cout << "Another operation (Y/N) ? ";
            cin >> anotherOperation;
            anotherOperation = toupper(anotherOperation);
        }
        } while (anotherOperation == 'Y');
    return 0;
}

bool readFraction(int &numerator, char option, int &denominator) {

    bool flag = true;
    flag = flag && (option == '/' && denominator != 0);
    return flag;
}

int greatest_common_divisor (int a, int b) {

    if (a == b && a != 0 ) {
        return a;
    }
    else if ( a*b == 0 ) {
        int answer = a == 0 ? b : a;
        return answer;
    }
    else {
        while ( a != b ) {
            if ( a > b ) {
                a = a - b;
            }
            else if ( b > a ) {
                b = b - a;
            }
            else {
                return a;
            }
        }
    }
}

void reduceFraction(int &numerator, int &denominator) {

    int gcd;
    gcd = greatest_common_divisor(numerator, denominator);
    numerator = numerator / gcd;
    denominator = denominator / gcd;
}

int main ()
{
    int a, b;
    string answer, key;
    char op;

    do  {

        cout << "Enter a statement with a operator b with integer numbers: ";
        cin >> a >> op >> b;
        
        if (!cin.fail()) {

            switch (op) {

                case '+':
                    cout << a << " " << op << " " << b << " = " << a+b << endl;
                    break;

                case '-':
                    cout << a << " " << op << " " << b << " = " << a-b << endl;
                    break;

                case 'x': case '*':
                    cout << a << " " << op << " " << b << " = " << a*b << endl;
                    break;          
                
                default:

                    answer = readFraction(a, op, b) ? "Valid function" : "Invalid function";
                    cout << answer << endl;
                    if (readFraction(a, op, b)) {
                        cout << a << op << b << " = ";
                        reduceFraction(a, b);
                        if (b == 1) {
                            cout << a << endl;
                        }
                        else {
                            cout << a << op << b << endl;
                        }
                    }
                    break;
                
                }
        }
        else {
            cin.clear();
            cin.ignore('\n', 10000);
            cout << "Invalid input. Please try again!" << endl;
        }

        cout << "More? Y/N ";
        cin >> key;

        } while (key != "N");

    return 0;
}

bool isLeapYear (int year) {

    bool flag = true;
    flag = flag && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ;
    return flag;
}

int numberDays (int month, int year) {
    
    int days;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days = 31;
        break;
    
        case 4: case 6: case 9: case 11:
        days = 30;
        break;

        case 2:
            if (isLeapYear(year)) {
                days = 29;
            }
            else {
                days = 28;
            }
            break;
    }
    return days;
}

int numberOfBeginning (int month, int year) {

    int ds, a, c, d, s;
    a = year % 100;
    c = month;
    d = 1;
    s = year / 100;
    int aux = floor((5*a)/c);
    ds = (aux + c + d - 2*(s%4) + 7) % 7 ;
    return ds;
}

void printMonth (int month, int year) {

    string header_1, header_2;
    int beginning_day, counter = 0;

    vector<string> monthsName = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    beginning_day = numberOfBeginning(month, year) == 1 ? 6 : numberOfBeginning(month, year) + 2;
    header_1 = monthsName[month-1] + "/";
    header_2 = "Sun\tMon\tTue\tWed\tThu\tFri\tSat\n";

    cout << header_1 << year << "\n" << header_2;

    while (counter != beginning_day) {
        cout << " " << "\t";
        counter ++;
    }

    int pointer = 1;
    while (pointer <= numberDays(month, year)) {
        cout << pointer << "\t";
        counter = counter + 1;
        if (counter >= 7) {
            counter = 0;
            cout << endl;
        }
        pointer = pointer + 1;
    }
}

int main ()
{
    int month, year;
    cout << "\nEnter a year: ";
    cin >> year;

    for (int month = 1; month < 13; month++) {
        printMonth(month, year);
        cout << "  " << endl;
    }
    return 0;
}

int factorial_ite(unsigned int n) {

    unsigned long long total = 1;
    while (n > 1) {
        total = total * n;
        n = n - 1;
    }
    return total;
}

int factorial_rec(unsigned int n) {

    if (n == 1) {
        return n;
    }
    else {
        return n * factorial_rec(n-1);
    }
}

int main ()
{   
    unsigned int number; 

    cout << "Number: ";
    cin >> number;
    unsigned long long result = factorial_ite(number);
    cout << "The factorial of number " << number << " is " << result << endl;

    unsigned int n = 1;
    result = 1;
    while (true) {
        result = factorial_rec(n);
        if (result > ULLONG_MAX || result == 0) {
            break;
        }
        n = n + 1;
    }
    cout << "Max n for ULLONG integer is " << n-1 << endl;
    return 0;
}

int gcd (int m, int n) {
    
    if (m % n == 0) {
        return n;
    }
    else {
        int remainder = m % n;
        return gcd (n, remainder);
    }
}

int main ()
{
    int a, b;
    cout << "Please enter two integer numbers: ";
    cin >> a >> b;
    cout << "Greatest common divisor of numbers " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}

// Global variable
const double PI = 3.1415;

double distance_t (double x1, double x2, double y1, double y2) {

    double dist;
    dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return dist;
}

double area (double p, double p1, double p2, double p3) {

    double area;
    area = sqrt(p*(p-p1)*(p-p2)*(p-p3));
    return area;
}

void circle () {

    double radius, total;
    cout << "Enter a radius distance: ";
    cin >> radius;
    total = PI*pow(radius, 2);
    cout << "Area of circle is " << total << endl;
}

void triangle () {

    double ax, ay, bx, by, cx, cy;
    double distance, area_total, l1, l2, l3, l_total;

    cout << "Vertice A (x and y):";
    cin >> ax >> ay;
    cout << "Vertice B (x and y):";
    cin >> bx >> by;
    cout << "Vertice C (x and y):";
    cin >> cx >> cy;

    l1 = distance_t(ax, bx, ay, by);
    l2 = distance_t (ax, cx, ay, cy);
    l3 = distance_t (bx, cx, by, cy);
    l_total = l1 + l2 + l3;
    area_total = area (l_total, l1, l2, l3); 
    cout << "Area of triangle is " << area_total << endl;
}

void retangle () {

    double x1, x2, y1, y2, area;
    cout << "Vertice 1 (x and y):";
    cin >> x1 >> y1;
    cout << "Vertice 2 (x and y):";
    cin >> x2 >> y2;
    area = abs(x2-x1)*abs(y1-y2);
    cout << "Area of rectangle is " << area << endl;
}

int main () 
{
    int op;
    do  {

        cout << "Area of... \n1 --> Circle\n2 --> Triangle\n3 --> Retangle\nYour choice: ";
        cin >> op;

        switch (op) {
            case 1:
                circle();
                break;
            case 2:
                triangle();
                break;
            case 3:
                retangle();
                break;
            default:
                cout << "Input error. Please try again.";
            }

        } while (op != 1 && op != 2 && op != 3);
    return 0;
}

int rollDie(int low = 1, int high = 6)
{
    assert(high >= low);
    return (rand() % (high - low + 1)) + low;
}

int main ()
{
    rollDie();
    return 0;
}

double g (double x) {
	return pow (x, 2);
}

double h (double x) {
	return sqrt(4-pow(x, 2));
}

double integrateTR(double f(double), double a, double b, int n) {

	double h = (b - a) / n;
	double sum = 0;

	for (int i = 1; i <= n; i++) {
		sum += h / 2 * (f(a + (i - 1)*h) + f(a + i*h));
	}
	return sum;
}

int main() {

	cout << integrateTR(g, 0, 10, 100) << endl;
	cout << integrateTR(h, -2, 2, 100) << endl;
	return 0;
}

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MyCalculator {
private:
    vector<double> result_history;
    bool stop = false;

    void printGreeting();
    string getWithMessage(string message);
    double getFromMem(string pos);
    double to_num(string str);
    double calculateResult(double num1, double num2, string op);
public:
    void run();
};

void MyCalculator::printGreeting() {
    cout << "Welcome to MyCalculator!" << endl;
    cout << "Operators: + - * /" << endl;
    cout << "Accessing N-th previous result: m-N" << endl;
    cout << "Exiting: x or exit" << endl;
    cout << "---------------------------------" << endl;
}

string MyCalculator::getWithMessage(string message) {
    string op;
    cout << message;
    getline(cin, op);
    stop = (op == "x" || op == "exit");
    return op;
}

double MyCalculator::getFromMem(string pos) {
    if (pos.size() == 1 && !pos.empty()) {
        return result_history.back();
    } else if (pos[1] == '-') {
        int shift = stoi(pos.substr(2));
        if (shift < result_history.size()) {
            return result_history[result_history.size() - 1 - shift];
        }
        return result_history[0];
    } else {
        return 0;
    }
}

double MyCalculator::to_num(string str) {
    if (str[0] == 'm') {
        double mem = getFromMem(str);
        cout << "mem: " << getFromMem(str) << endl;
        return mem;
    }
    return stod(str);
}

double MyCalculator::calculateResult(double num1, double num2, string op) {
    double result;
    if (op == "+") {
        result = num1 + num2;
    } else if (op == "-") {
        result = num1 - num2;
    } else if (op == "*") {
        result = num1 * num2;
    } else if (op == "/") {
        if (num2 == 0) {
            cout << "Invalid operation!" << endl;
            return -1;
        }
        result = num1 / num2;
    }
    return result;
}

void MyCalculator::run() {
    printGreeting();

    while (true) {
        string aux = getWithMessage("Input first number: ");
        if (stop) {
            break;
        } 
        double num1 = to_num(aux);

        aux = getWithMessage("Input operator: ");
        if (stop) {
            break;
        }
        string op = aux;
        
        aux = getWithMessage("Input second number: ");
        if (stop) {
            break;
        } 
        double num2 = to_num(aux);

        double result = calculateResult(num1, num2, op);
        cout << "Result: " << result << endl;
        result_history.push_back(result);
    }
}

int main() {
    MyCalculator calc;

    calc.run();

    return 0;
}

int findOdd(const std::vector<int>& numbers){
  for (int n : numbers) {
    int contador = 0;
    for (int m : numbers) {
      if (m == n) {
        contador++ ;
      }
    }
    if (contador % 2 == 1) {
        return n;
    }
    else {
      continue;
    }
  }
}

int findDifference(std::array<int, 3> a, std::array<int, 3> b) {

    int total_volume_a = 1, total_volume_b = 1;
    for (int length_a : a) {
      total_volume_a = total_volume_a * length_a;
    }
    for (int length_b : b) {
      total_volume_b = total_volume_b * length_b;
    }

    return abs(total_volume_a - total_volume_b);

}

int min(vector<int> list){
    
    int minim = 10000;
    for (int n : list) {
        if (n < minim) {
            minim = n;
        }
        else {
            continue;
        }
    }
    return minim;
}

int max(vector<int> list){
    
    int maxim = -10000;
    for (int n : list) {
        if (n > maxim) {
            maxim = n;
        }
        else {
            continue;
        }
    }
    return maxim;
}

std::string boolean_to_string(bool b) {
    
    if (b) {
      return "true"
    }
    return "false"
}

std::string boolean_to_string(bool b){
  return b ? "true" : "false";
}

bool is_uppercase(const std::string &s) {
    
    bool flag = true;
    for (char c : s) {
        flag = flag && (c == toupper(c));
    }
    return flag;
}

int hexToDec(std::string hexString)
{   
    int answer;
    answer = (0x) hexString;
    return answer;
}

// Difference between call-by-value and call-by-reference
void swap_by_value (int a , int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap_by_reference (int &a , int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int swap ()
{
    int x = 1, y = 2;
    // By value --> the value does not change out of scope
    swap_by_value (x, y);
    cout << "Value of x: " << x << " and value of y: " << y << endl;
    // By value --> the value is changed in memory --> "Global variable"
    swap_by_reference (x, y);
    cout << "Value of x: " << &x << " and value of y: " << y << endl;
    // Show memory positions / adress
    cout << "Address of x: " << &x << " and address of y: " << &y << endl;
    return 0;
}

int random_numbers (int min, int max) {

    int number = min + rand() % (max - min + 1);
    return number;
}

int static_options () {

    static int ticketNumber = 0; 
    ticketNumber ++;
    return ticketNumber;

}

int recursive_factorial(int number) {

    if (number <= 1) { 
        return number; 
    }
    else { 
        return number * recursive_factorial (number - 1); 
    }
}

void vertical_numbers(int number) {

    if (number < 10) { 
        cout << number << endl; 
    }
    else { 
        vertical_numbers(number/10); 
        cout << number % 10 << endl;
    }
}

int fib_numbers (int number) {

    if (number == 2 || number == 1) {
        return 1;
    }
    else {
        return fib_numbers (number - 1) + fib_numbers (number - 2);
    }
}

void readArray(int a[], size_t nElem) {

    for (int index = 0 ; index < nElem ; index++ ) {
        cout << index << ": " << a[index] << endl;
    }

}

int findValueInArray(const  int  a[], size_t nElem, int value, size_t pos1, size_t pos2) {

    int answer = -1, loop = 0;
    for (int index = pos1 ; index < pos2; index ++ ) {

        loop ++;
        if (a[index] == value) {
            answer = index;
            break;
        }
        if (loop == nElem) {
            break;
        }
    }
    return answer;
}

size_t findMultValuesInArray(const int a[], size_t nElem, int value, size_t pos1, size_t pos2, size_t index[]) {

    size_t pointer = 0, loop = 0;
    for (int i = pos1 ; i < pos2 ; i++ ) {

        loop ++;
        if (a[i] == value) {
            index[pointer] = i;
            pointer ++;
        }
        if (loop == nElem) {
            break;
        }
    }
    return pointer;
}

int main () 
{   
    const int size_of_array = 15;
    int numbers[size_of_array];
    size_t index[size_of_array];
    int pointer = 0, next_number = 0;

    // Input numbers
    while (pointer != size_of_array) {
        cout << "Enter a number: ";
        cin >> next_number;
        numbers[pointer] = next_number;
        pointer ++;
    }

    // Read numbers, a)
    do  {
        cout << "How many numbers would you like to read? Integer number: ";
        cin >> next_number;
        if (next_number >= size_of_array) {
            cout << "Input error. Please try again with an integer number less than 15" << endl;
        }
        } while (next_number >= size_of_array);
    readArray(numbers, next_number);

    // Search value, b)
    int max_index, min_index, value, limit;
    do  {
        cout << "Min and max index to search (integer numbers between 0 and 15): ";
        cin >> min_index >> max_index;
        cout << "Which value would you like to search?";
        cin >> value;
        cout << "Max numbers to search: ";
        cin >> limit;
        if (min_index < 0 || max_index < 0 || max_index <= min_index || limit > size_of_array) {
            cout << "Input error. Please try again." << endl;
        }
        } while (min_index < 0 || max_index < 0 || max_index <= min_index || limit > size_of_array);
    int answer = findValueInArray(numbers, limit, value, min_index, max_index);
    if (answer == -1) {
        cout << "Not found!" << endl;
    }
    else {
        cout << "Number " << value << " can be found in " << answer << "th position in array" << endl;
    }

    // Repeted numbers, e)
    cout << "Your number has found " << findMultValuesInArray(numbers, limit, value, min_index, max_index, index) << " times in array" << endl;
    return 0;
}

void readArray(vector<int> &v, size_t nElem) {

    for (int index = 0 ; index < nElem ; index++ ) {
        cout << index << ": " << v[index] << endl;
    }

}

int findValueInArray(vector<int> &v, size_t nElem, int value, size_t pos1, size_t pos2) {

    int answer = -1, loop = 0;
    for (int index = pos1 ; index < pos2; index ++ ) {

        loop ++;
        if (v[index] == value) {
            answer = index;
            break;
        }
        if (loop == nElem) {
            break;
        }
    }
    return answer;
}

size_t findMultValuesInArray(vector<int> &v, size_t nElem, int value, size_t pos1, size_t pos2, vector<int> index) {

    size_t pointer = 0, loop = 0;
    for (int i = pos1 ; i < pos2 ; i++ ) {

        loop ++;
        if (v[i] == value) {
            index[pointer] = i;
            pointer ++;
        }
        if (loop == nElem) {
            break;
        }
    }
    return pointer;
}

int main () 
{   
    int next_number;
    vector<int> numbers;
    vector<int> index;

    while (!cin.eof()) {
        cout << "Enter a number (letter for skip): ";
        cin >> next_number;
        numbers.push_back(next_number);
    }
    cin.clear();
    cin.ignore(100000, '\n');
    int size_of_vector = numbers.size();

    // Read numbers
    do  {
        cout << "How many numbers would you like to read? Integer number: ";
        cin >> next_number;
        if (next_number >= size_of_vector) {
            cout << "Input error. Please try again with an integer number less than " << size_of_vector << endl;
        }
        } while (next_number >= size_of_vector);
    readArray(numbers, next_number);

    // Search value
    int max_index, min_index, value, limit;
    do  {
        cout << "Min and max index to search (integer numbers between 0 and 15): ";
        cin >> min_index >> max_index;
        cout << "Which value would you like to search?";
        cin >> value;
        cout << "Max numbers to search: ";
        cin >> limit;
        if (min_index < 0 || max_index < 0 || max_index <= min_index || limit > size_of_vector) {
            cout << "Input error. Please try again." << endl;
        }
        } while (min_index < 0 || max_index < 0 || max_index <= min_index || limit > size_of_vector);
    int answer = findValueInArray(numbers, limit, value, min_index, max_index);
    if (answer == -1) {
        cout << "Not found!" << endl;
    }
    else {
        cout << "Number " << value << " can be found in " << answer << "th position in array" << endl;
    }

    // Repeted numbers
    cout << "Your number has found " << findMultValuesInArray(numbers, limit, value, min_index, max_index, index) << " times in array" << endl;
    return 0;
}

void arrays ()  {

    const int size_of_array = 10;
    int numbers[size_of_array];

    // Write numbers in array, number = index + 10
    for (int index = 0 ; index < (sizeof(numbers) / sizeof(numbers[0])) ; index ++) {
        numbers[index] = index + 10;
    }

    // Show values
    for (int number: numbers) {
        cout << "Number: " << number << endl;
    }

    // Show memory address
    for (int index ; index < size_of_array ; index ++ ) {
        cout << "Address of number " << numbers[index] << " is " << &numbers[index] << endl;
    }
}

void multidimensional_arrays () {

    const int size_of_array = 3;
    // Matrix 3*3
    int numbers[size_of_array][size_of_array];

    // Input numbers to matrix
    for (int main = 0; main < size_of_array ; main ++ ) {
        for (int index = 0; index < size_of_array ; index ++ ) {
            numbers[main][index] = index + 20;
            cout << "Number " << main << "x" << index << " is " << numbers[main][index] << endl;
        }
    }
}

int main ()
{  
    arrays () ;
    multidimensional_arrays () ;
    return 0;
}

bool ascending (int x, int y) {
    bool answer = x > y ? false : true;
    return answer;
}

bool descending (int x, int y) {
    bool answer = x < y ? false : true;
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

int binarySearch(const vector<int> &v, int value) {
    
    int first = 0;
    int last = v.size();
    int middle;
    bool found = false;

    while ( !found && first <= last ) {

        middle = (first + last) / 2;

        if (v[middle] == value) {
            found = true;
        }
        else if (value < v[middle]) {
            last = middle - 1;
        }
        else {
            first = middle + 1;
        }
        
        if (found) {
            return middle;
            break;
        }
    }
    return -1;
}

int main ()
{   
    vector<int> numbers;
    srand(time(NULL));

    // Generate numbers
    cout << "Numbers: ";
    for (int number = 0 ; number < 100 ; number = rand() % 6 + number + 1) {
        cout << number << " ";
        numbers.push_back(number);
    }

    // Input a value to search
    int input;
    do  {
            cout << "\nEnter a positive integer number: ";
            cin >> input;
            if (cin.fail() || input < 0) {
                cout << "Invalid input. Please try again. " << endl;
            }
        } while (input < 0);

    // Search for results
    if (binarySearch(numbers, input) == -1) {
        cout << "Number " << input << " not in vector." << endl;
    }
    else {
        cout << "Index of number " << input << " is " << binarySearch(numbers, input) << endl;
    }
    return 0;
}

bool notInside(vector<int> &v, int value) {

    bool flag = true;
    for (int index = 0 ; index < v.size() ; index++ ) {
        flag = flag && (v[index] != value) ;
    }
    return flag;
}

void removeDuplicates(vector<int> &v) {

    vector<int> result;
    for (int number: v) {
        if (notInside(result, number)) {
            result.push_back(number);
        }
    }
    v = result;
}

int main ()
{   
    vector<int> example = {0, 9, 0, -5, 2, 9, 8, 0, 0, 8, 5, 2, 4, 15, 2} ;
    removeDuplicates(example);

    for (int number: example) {
        cout << number << " ";
    }

    return 0;
}

void bubbleSort(vector<int> &v) {

    int size_of_vector;
    size_of_vector = v.size();

    if (size_of_vector > 2) {

        for (int index = 0 ; index < size_of_vector ; index ++) {

            int aux;
            int counter = 0;
            bool flag = true;

            while (counter + 1 < size_of_vector) {
                
                if (v[counter] > v[counter + 1]) {
                        aux = v[counter+1];
                        v[counter+1] = v[counter];
                        v[counter] = aux;
                        flag = flag && false;
                    }
                    counter++ ;
            }

            if (flag) {
                break;
            } 
        }
    }
}

bool notInside(vector<int> &v, int value) {

    bool flag = true;
    for (int index = 0 ; index < v.size() ; index++ ) {
        flag = flag && (v[index] != value) ;
    }
    return flag;
}

void removeDuplicates(vector<int> &v) {

    vector<int> result;
    for (int number: v) {
        if (notInside(result, number)) {
            result.push_back(number);
        }
    }
    v = result;
}

void vectorUnion(const vector<int> &v1, const vector<int> &v2, vector<int> &v3) {

    for (int number: v1) {
        v3.push_back(number);
    }
    for (int number: v2) {
        v3.push_back(number);
    }
    removeDuplicates(v3);

}

void vectorIntersection(const vector<int> &v1, const vector<int> &v2, vector<int> &v3) {

    for (int number1: v1) {
        for (int number2: v2) {
            if (number1 == number2 && notInside(v3, number2)) {
                v3.push_back(number1);
            }
        }
    }
}

int main () 
{   
    // Examples
    vector<int> numbers1 = {0, 2, 2, 8, 2, 9, 5, 2, 0, 0, 20, 15, 8, 5, 3, 2, 4, 1, 1, 0} ;
    vector<int> numbers2 = {4, 2, 8, 15, 7, 8, 8, 0, 1, 2, 9, 3, 1, 0, 0, 1, 5, 8, 15, 2, 35, -9} ;
    vector<int> union_vector ;
    vector<int> intersection_vector ;

    // Remove duplicates and sort by ascending order
    removeDuplicates(numbers1);
    removeDuplicates(numbers2);
    bubbleSort(numbers1);
    bubbleSort(numbers2); 

    // Show vectors
    cout << "Vector 1: ";
    for (int number: numbers1) {
        cout << number << " ";
    }

    cout << "\nVector 2: ";
    for (int number: numbers2) {
        cout << number << " ";
    }   

    // Union vector
    vectorUnion(numbers1, numbers2, union_vector);
    cout << "\nUnion: ";
    for (int number: union_vector) {
        cout << number << " ";
    }

    // Intersection vector
    vectorIntersection(numbers1, numbers2, intersection_vector);
    cout << "\nIntersection: ";
    for (int number: intersection_vector) {
        cout << number << " ";
    }

    return 0;
}

// Global constant
const int NE = 5;

void localMax_usingArray(const int a[][NE]) {
    
    cout << "Local maxima: " << endl;
    for (int line = 1 ; line + 1 < NE ; line++ ) {
        for (int row = 1 ; row + 1 < NE ; row++ ) {
            if (a[line][row] > a[line+1][row] && a[line][row] > a[line-1][row] && a[line][row] > a[line][row+1] && a[line][row] > a[line][row-1] &&
                a[line][row] > a[line+1][row+1] && a[line][row] > a[line+1][row-1] && a[line][row] > a[line-1][row+1] && a[line][row] > a[line-1][row-1]    ) {
                    cout << "Number " << a[line][row] << " is in " << line << " line and " << row << " row of matrix" << endl;
                }
            else {
                continue;
            }
        }
    }
}

void localMax_usingVector(vector<vector<int>> a, int nRows, int nLines, char answer) {
    
    if (answer == 'N') {

        // It considers "numbers in red"

        cout << "Local maxima: " << endl;
        for (int line = 1 ; line + 1 < nLines ; line++ ) {
            for (int row = 1 ; row + 1 < nRows ; row++ ) {
                if (a[line][row] > a[line+1][row] && a[line][row] > a[line-1][row] && a[line][row] > a[line][row+1] && a[line][row] > a[line][row-1] &&
                    a[line][row] > a[line+1][row+1] && a[line][row] > a[line+1][row-1] && a[line][row] > a[line-1][row+1] && a[line][row] > a[line-1][row-1]    ) {
                        cout << "Number " << a[line][row] << " is in " << line << " line and " << row << " row of matrix" << endl;
                    }
                else {
                    continue;
                }
            }
        }
    }

    else {

        // It considers "numbers in red" and "numbers in pink"

        cout << "Local maxima: " << endl;
        for (int line = 0 ; line < nLines ; line ++ ) {
            for (int row = 0 ; row < nRows ; row ++ ) {

                if (line == 0 && row == 0) {
                    if (a[line][row] > a[line+1][row] && a[line][row] > a[line+1][row+1] && a[line][row] > a[line][row+1]) {
                        cout << "Number " << a[line][row] << " is in " << line << " line and " << row << " row of matrix" << endl;
                }

                else if (line == 0 && row == nRows - 1) {
                    if (a[line][row] > a[line][row-1] && a[line][row] > a[line+1][row-1] && a[line][row] > a[line+1][row]) {
                        cout << "Number " << a[line][row] << " is in " << line << " line and " << row << " row of matrix" << endl;
                    }
                }

                else if (line == nLines - 1 && row == 0) {
                    if (a[line][row] > a[line-1][row] && a[line][row] > a[line-1][row+1] && a[line][row] > a[line][row+1]) {
                        cout << "Number " << a[line][row] << " is in " << line << " line and " << row << " row of matrix" << endl;
                    }
                }

                else if (line == nLines - 1 && row == nRows - 1) {
                    if (a[line][row] > a[line-1][row-1] && a[line][row] > a[line-1][row] && a[line][row] > a[line][row-1]) {
                        cout << "Number " << a[line][row] << " is in " << line << " line and " << row << " row of matrix" << endl;
                    }
                }

                else if (line == 0) {
                    if (a[line][row] > a[line][row-1] && a[line][row] > a[line][row+1] && a[line][row] > a[line+1][row] && 
                        a[line][row] > a[line+1][row-1] && a[line][row] > a[line+1][row+1]) {
                        cout << "Number " << a[line][row] << " is in " << line << " line and " << row << " row of matrix" << endl;
                    }
                }

                else if (row == 0) {
                    if (a[line][row] > a[line+1][row] && a[line][row] > a[line-1][row] && a[line][row] > a[line][row+1] && 
                        a[line][row] > a[line-1][row+1] && a[line][row] > a[line+1][row+1]) {
                        cout << "Number " << a[line][row] << " is in " << line << " line and " << row << " row of matrix" << endl;
                    }
                }

                else if (line == nLines - 1) {
                    if (a[line][row] > a[line][row+1] && a[line][row] > a[line][row-1] && a[line][row] > a[line-1][row] && 
                        a[line][row] > a[line-1][row+1] && a[line][row] > a[line-1][row-1]) {
                        cout << "Number " << a[line][row] << " is in " << line << " line and " << row << " row of matrix" << endl;
                    }
                }

                else if (row == nRows - 1) {
                    if (a[line][row] > a[line-1][row] && a[line][row] > a[line+1][row] && a[line][row] > a[line][row-1] && 
                        a[line][row] > a[line+1][row-1] && a[line][row] > a[line-1][row-1]) {
                        cout << "Number " << a[line][row] << " is in " << line << " line and " << row << " row of matrix" << endl;
                    }
                }
            
                else if (a[line][row] > a[line+1][row] && a[line][row] > a[line-1][row] && a[line][row] > a[line][row+1] && a[line][row] > a[line][row-1] &&
                         a[line][row] > a[line+1][row+1] && a[line][row] > a[line+1][row-1] && a[line][row] > a[line-1][row+1] && a[line][row] > a[line-1][row-1] ) {
                        cout << "Number " << a[line][row] << " is in " << line << " line and " << row << " row of matrix" << endl;
                }

                else {
                    continue;
                }
            }
        }
        }
    }
}

int main () 
{     

    // Example
    int matrix[][NE] = {{7, 3, 4, 1, 3}, 
                        {2, 9, 6, 2, 1}, 
                        {1, 3, 5, 1, 4}, 
                        {6, 5, 2, 7, 5}, 
                        {4, 2, 1, 3, 6}};
                
    localMax_usingArray(matrix);

    // Input user values --> Array (2D)
    int input;
    int user_matrix[NE][NE];
    for (int line = 0 ; line < NE ; line ++) {
        for (int row = 0 ; row < NE ; row ++ ) {
            cout << "Another number: ";
            cin >> input;
            user_matrix[line][row] = input;
        }
    }

    localMax_usingArray(user_matrix);

    // Input user values --> Vector (2D)
    vector<vector<int>> matrix_vector;
    vector<int> values;
    int nRows, nLines, number;
    cout << "Number of rows: ";
    cin >> nRows;
    cout << "Number of lines: ";
    cin >> nLines;

    for (int line = 0 ; line < nLines ; line ++ ) {
        for (int row = 0 ; row < nRows ; row ++ ) {
            cout << "Input a number: ";
            cin >> number;
            values.push_back(number);
        }   
        matrix_vector.push_back(values);
        values.clear();
    }

    char answer;
    do  {
        cout << "Do you want to consider that any element of the matrix can be a local maximum? Y/N : ";
        cin >> answer;
        if (answer != 'Y' && answer != 'N') {
            cout << "Invalid input. Please try again." << endl;
        }
        } while (answer != 'Y' && answer != 'N');

    localMax_usingVector(matrix_vector, nRows, nLines, answer);

    return 0;   
}

bool isLeapYear (int year) {

    bool flag = true;
    flag = flag && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ;
    return flag;
}

int numberDays (int month, int year) {
    
    int days;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days = 31;
        break;
    
        case 4: case 6: case 9: case 11:
        days = 30;
        break;

        case 2:
            if (isLeapYear(year)) {
                days = 29;
            }
            else {
                days = 28;
            }
            break;
    }
    return days;
}

vector<vector<int>> random_pluviosity (int year) {

    double pluv_day;
    vector<vector<int>> pluviosity_year;
    vector<int> pluviosity_month;

    for (int month = 1 ; month <= 12 ; month++ ) {
        for (int day = 1 ; day <= numberDays(month, year) ; day ++ ) {
            pluv_day = (rand() % rand() % rand() ) % 100;
            pluviosity_month.push_back(pluv_day);
        }
        pluviosity_year.push_back(pluviosity_month);
        pluviosity_month.clear();
    }

    return pluviosity_year;
}

vector<double> averages (vector<vector<int>> plu ) {

    int counter = 0;
    int sum = 0;
    int total_sum = 0;
    double basic_average, main_average;
    vector<double> solution;

    for (int month = 0 ; month < 12 ; month ++ ) {
        for (int day = 0 ; day < plu[month].size() ; day ++ ) {
            sum = sum + plu[month][day] ;
            counter ++;
        }
        total_sum = total_sum + sum;
        basic_average = (double) sum / plu[month].size();
        solution.push_back(basic_average);
        sum = 0;
    }
    main_average = (double) total_sum / counter;
    solution.push_back(main_average);
    return solution;
}

vector<vector<int>> maximum_pluviosity (vector<vector<int>> pluviosity) {

    // Search for highest value
    int max_value = -100;
    for (int month = 0 ; month < 12 ; month ++ ) {
        for (int day = 0 ; day < pluviosity[month].size() ; day ++ ) {
            max_value = max_value < pluviosity[month][day] ? pluviosity[month][day] : max_value;
        }
    }

    // Search all days which pluviosity == max_value
    vector<vector<int>> solution;
    vector<int> month_day;
    for (int month = 0 ; month < 12 ; month ++ ) {
        for (int day = 0 ; day < pluviosity[month].size() ; day ++ ) {
            if (pluviosity[month][day] == max_value) {
                month_day.push_back(month);
                month_day.push_back(day);
                solution.push_back(month_day);
                month_day.clear();
            }
        }
    }
    return solution;
}

int main ()
{   
    srand(time(NULL));
    int year;
    
    cout << "\nEnter a year: ";
    cin >> year;

    vector<string> monthsName = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    vector<vector<int>> pluviosity = random_pluviosity (year);
    vector<double> average;
    vector<vector<int>> pairs;

    // Print all data
    cout << "\nRandom pluviosity (in milimeters) by month. Year " << year << ":\n" << endl;
    cout << setfill(' ') << setw(15) << "Days:" << "  ";
    for (int day = 1 ; day <= 31 ; day ++ ) {
        cout << setfill(' ') << setw(3) << day << " ";
    }
    cout << " \n" << endl;
    for (int month = 0 ; month < 12 ; month ++) {
        cout << setfill(' ') << setw(15) << monthsName[month] << ": ";
        for (int day = 0 ; day < pluviosity[month].size() ; day ++ ) {
            cout << setfill(' ') << setw(3) << pluviosity[month][day] << " ";
        }
        cout << " " << endl;
    }

    // Average by month
    average = averages(pluviosity);
    cout << "\nAverage pluviosity (in milimeters) by month:\n" << endl;
    for (int index = 0 ; index < 12 ; index ++ ){
        cout << monthsName[index] << ": " << average[index] << endl;
    }
    cout << endl;

    // Main average
    cout << "Average pluviosity by day of year " << year << ": " << average[12] << endl;

    // Maximum value
    pairs = maximum_pluviosity(pluviosity);
    int max_value = pluviosity[pairs[0][0]][pairs[0][1]];
    cout << "\nDaily maximum pluviosity in " << year << ": " << max_value << endl;

    // Maximum days
    cout << "\nDays of maximum pluviosity:\n" << endl;
    for (vector<int> pair : pairs) {
        cout << "Day " << pair[1]+1 << " of " << monthsName[pair[0]] << endl;
    }
    cout << " \n " << endl;
 
    return 0;
}

int comparator (const void* number1 , const void* number2) {
    return (*(int*)number1 - *(int*)number2);
}

void qsort (void* base, size_t num, size_t size, int (*comparator)(const void*,const void*)) {

}

int main ()
{
    int number;
    
    int example[] = {120, 2, 5, -9, 8, 52, -1, 0, 6} ;
    qsort(example);
    for (int number : example) {
        cout << number << " ";
    }
    return 0;
}

void fragment () {

    int values[] = { 2, 3, 5, 7, 11, 13 };
    int *p = values+1;
    cout << values[1] << endl;          // 3
    cout << values+1 << endl;           // memory adress
    cout << *p << endl;                 // pointer == 3
    cout << *(values+3) << endl;        // values[4] == 7
    cout << p+1 << endl;                // memory adress + 4 bits
    cout << p[1] << endl;               // 5
    cout << p-values << endl;           // 5 - 4 == 1
}

void fragment_1 () {

    int x = 1, y = 2;
    int &ref_x = x, &ref_y = y;
    ref_x = ref_y;
    cout << "x = " << x << "; y = " << y << endl;
    cout << "ref_x = " << ref_x << "; ref_y = " << ref_y << endl;
}

void fragment_2 () {

    int x = 1, y = 2;
    int *ptr_x = &x, *ptr_y = &y;
    ptr_x = ptr_y;
    cout << "x = " << x << "; y = " << y << endl;
    cout << "ptr_x = " << ptr_x << "; ptr_y = " << ptr_y << endl;
    cout << "*ptr_x = " << *ptr_x << "; *ptr_y = " << *ptr_y << endl;
}

int main ()
{
    fragment_1 ();

    // Output:
    // x = 2 and y = 2
    // ref_x = 2 and ref_y = 2

    fragment_2 ();

    // Output:
    // x = 1 and y = 2
    // ptr_x = "memory adress of x" and ptr_y = "memory adress of y"
    // *ptr_x = 2 and *ptr_y = 2

    return 0;
}

void vectors_init () {
    vector<vector<int>> example = {{1, 2}, {2, 4}, {4, 7}};
    cout << example.at(2).at(1) << endl;
    cout << example[2][1] << endl;
    cout << example.empty() << endl; // answer = exampleIsEmpty? 1 : 0;
    example.clear();         // clean vector;
    cout << example.empty() << endl; // answer = exampleIsEmpty? 1 : 0;
}

// Using pointer
int main () 
{
    int x = 10;
    int& r = x;
    int * ptr;
    cout << r << endl;
    return 0;
}

int findOdd(const std::vector<int>& numbers){
  for (int n : numbers) {
    int contador = 0;
    for (int m : numbers) {
      if (m == n) {
        contador++ ;
      }
    }
    if (contador % 2 == 1) {
        return n;
    }
    else {
      continue;
    }
  }
}

int findDifference(std::array<int, 3> a, std::array<int, 3> b) {

    int total_volume_a = 1, total_volume_b = 1;
    for (int length_a : a) {
      total_volume_a = total_volume_a * length_a;
    }
    for (int length_b : b) {
      total_volume_b = total_volume_b * length_b;
    }

    return abs(total_volume_a - total_volume_b);

}

int min(vector<int> list){
    
    int minim = 10000;
    for (int n : list) {
        if (n < minim) {
            minim = n;
        }
        else {
            continue;
        }
    }
    return minim;
}

int max(vector<int> list){
    
    int maxim = -10000;
    for (int n : list) {
        if (n > maxim) {
            maxim = n;
        }
        else {
            continue;
        }
    }
    return maxim;
}

std::string boolean_to_string(bool b){
    
    if (b) {
      return "true"
    }
    return "false"
}

std::string boolean_to_string(bool b){
  return b ? "true" : "false";
}

bool is_uppercase(const std::string &s) {
    
    bool flag = true;
    for (char c : s) {
        flag = flag && (c == toupper(c));
    }
    return flag;
}

int hexToDec(std::string hexString)
{   
    int answer;
    answer = (0x) hexString;
    return answer;
}

int comparator ( const void *arg1, const void *arg2 ) {
   return  *arg1 - *arg2 ;
}

int main( int argc, char **argv )
{
    int arr[5] = {5, 8, 6, 4, 1} ;
    int base = arr[0];
    size_t size = 5;
    size_t num;

    qsort (void* base, size_t num, size_t size, int (*comparator)(const void*,const void*));    

    // Print sorted data
    for( i = 0 ; i < size ; ++i )
        cout << arr[i] << " " ;

}

void readArray(int *a[], size_t nElem) {

    for (int index = 0 ; index < nElem ; index++ ) {
        cout << index << ": " << *a[index] << endl;
    }

}

int findValueInArray(const int *a[], size_t nElem, int value, size_t pos1, size_t pos2) {

    int answer = -1, loop = 0;
    for (int index = pos1 ; index < pos2; index ++ ) {

        loop ++;
        if (a[index] == value) {
            answer = index;
            break;
        }
        if (loop == nElem) {
            break;
        }
    }
    return answer;
}

size_t findMultValuesInArray(const int a[], size_t nElem, int value, size_t pos1, size_t pos2, size_t *index[]) {

    size_t pointer = 0, loop = 0;
    for (int i = pos1 ; i < pos2 ; i++ ) {

        loop ++;
        if (a[i] == value) {
            index[pointer] = i;
            pointer ++;
        }
        if (loop == nElem) {
            break;
        }
    }
    return pointer;
}

int main () 
{   
    const int size_of_array = 15;
    int numbers[size_of_array];
    size_t index[size_of_array];
    int pointer = 0, next_number = 0;

    // Input numbers
    while (pointer != size_of_array) {
        cout << "Enter a number: ";
        cin >> next_number;
        numbers[pointer] = next_number;
        pointer ++;
    }

    // Read numbers
    do  {
        cout << "How many numbers would you like to read? Integer number: ";
        cin >> next_number;
        if (next_number >= size_of_array) {
            cout << "Input error. Please try again with an integer number less than 15" << endl;
        }
        } while (next_number >= size_of_array);
    readArray(numbers, next_number);

    // Search value
    int max_index, min_index, value, limit;
    do  {
        cout << "Min and max index to search (integer numbers between 0 and 15): ";
        cin >> min_index >> max_index;
        cout << "Which value would you like to search?";
        cin >> value;
        cout << "Max numbers to search: ";
        cin >> limit;
        if (min_index < 0 || max_index < 0 || max_index <= min_index || limit > size_of_array) {
            cout << "Input error. Please try again." << endl;
        }
        } while (min_index < 0 || max_index < 0 || max_index <= min_index || limit > size_of_array);
    int answer = findValueInArray(numbers, limit, value, min_index, max_index);
    if (answer == -1) {
        cout << "Not found!" << endl;
    }
    else {
        cout << "Number " << value << " can be found in " << answer << "th position in array" << endl;
    }

    // Repeted numbers
    cout << "Your number has found " << findMultValuesInArray(numbers, limit, value, min_index, max_index, index) << " times in array" << endl;
    return 0;
}

void fill_grades(vector< vector<int> > &grade, size_t numberStudents, size_t numberQuizzes) {
    
    for (size_t st_num = 0; st_num < numberStudents; st_num++) {
        vector<int> studentGrade;
        for (size_t quiz_num = 0; quiz_num < numberQuizzes; quiz_num++) {
            studentGrade.push_back(10 + rand() % 11);
        }
        grade.push_back(studentGrade);
    }
}

void compute_st_ave(const vector< vector<int> > &grade, vector<double> &st_ave, size_t numberStudents, size_t numberQuizzes) {

    for (size_t st_num = 0; st_num < numberStudents; st_num++) {
        double sum = 0;
        for (size_t quiz_num = 0; quiz_num < numberQuizzes; quiz_num++) {
            sum = sum + grade[st_num][quiz_num];
        }
        st_ave.push_back(sum/numberQuizzes);
    }
}

void compute_quiz_ave(const vector< vector<int> > &grade, vector<double> &quiz_ave, size_t numberStudents, size_t numberQuizzes) {
    
    for (size_t quiz_num = 0; quiz_num < numberQuizzes; quiz_num++) {
        double sum = 0;
        for (size_t st_num = 0; st_num < numberStudents; st_num++) {
            sum = sum + grade[st_num][quiz_num];
        }
        quiz_ave.push_back(sum/numberStudents);
    }
}
    
void display(const vector< vector<int> > &grade, const vector<double> &st_ave, const vector<double> &quiz_ave, size_t numberStudents, size_t numberQuizzes) {

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << setw(10) << "Student" << setw(5) << "Ave" << setw(15) << "Quizzes\n";

    for (size_t st_num = 0; st_num < numberStudents; st_num++) {
        cout << setw(10) << st_num + 1 << setw(5) << st_ave[st_num] << " ";
        for (size_t quiz_num = 0; quiz_num < numberQuizzes; quiz_num++) {
            cout << setw(5) << grade[st_num][quiz_num];
        }
        cout << endl;
    }

    cout << "Quiz averages = ";
    for (size_t quiz_num = 0; quiz_num < numberQuizzes; quiz_num++) {
        cout << setw(5) << quiz_ave[quiz_num];
    }
    cout << endl;
}

int main ()
{
    vector< vector<int> > grade;
    vector<double> st_ave;
    vector<double> quiz_ave;
    size_t numberStudents, numberQuizzes;

    cout << "Number of students ? "; 
    cin >> numberStudents;
    cout << "Number of quizzes ? "; 
    cin >> numberQuizzes;

    fill_grades(grade,numberStudents,numberQuizzes);
    compute_st_ave(grade, st_ave, numberStudents, numberQuizzes);
    compute_quiz_ave(grade, quiz_ave, numberStudents, numberQuizzes);
    display(grade, st_ave, quiz_ave, numberStudents, numberQuizzes);

    return 0;
}

// Global string
string abc = "abcdefghijklmnopqrstuvwxyz";

char encryptChar2(char c, int key) {
    char solution = islower(c) ? abc[(abc.find(c) + key) % 26] : toupper(abc[(abc.find(tolower(c)) + key) % 26]) ;
    return solution;
}

char encryptChar(char c, int key) {

    int index;

    if (isupper(c)) {
        index = (abc.find(tolower(c)) + key) % 26;
        return toupper(abc[index]);
    }   
    else if (islower(c)) {
        index = (abc.find(c) + key) % 26;
        return tolower(abc[index]);
    }
    else {
        // Spaces, numbers and others characters
        return c;
    }
}

string encryptString(string s, int key) {

    string solution;
    for (char letter : s) {
        solution = solution + encryptChar(letter, key);
    }
    return solution;
}

int main ()
{
    int offset;
    string sentence;
    char answer;

    cout << "Your sentence: ";
    getline(cin, sentence);

    do  {
        cout << "Key: ";
        cin >> offset;
        if (cin.fail()) {
            cout << "Invalid key. Please enter a integer number. " << endl;
        }
        } while (!cin.fail());

    do  {
        cout << "Encryption or decryption? E/D : ";
        cin >> answer;
        if (cin.fail()) {
            cout << "Invalid input. Please try again" << endl;
            cin.clear();
            cin.ignore(10000, '\n');  
        }
        if (tolower(answer) != 'e' && tolower(answer) != 'd') {
            cout << "Invalid letter. Please choose E or D. " << endl;
            cin.clear();
            cin.ignore(10000, '\n');  
        } 

        } while (!cin.fail() && (tolower(answer) != 'e' && tolower(answer) != 'd')) ;

    if (tolower(answer) == 'e') {
        cout << "Encryption: " << encryptString(sentence, offset) << endl;
    }
    else if (tolower(answer) == 'd') {
        cout << "Decryption: " << encryptString(sentence, -offset) << endl;
    }
    else {
        cout << "Invalid input. Please try again." << endl;
    }

    return 0;
}

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
    chars.pop_back();             // Ignore back input (letter == input "0")
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

int comparator ( const void *arg1, const void *arg2 ) {
   return  *arg1 - *arg2 ;
}

int main( int argc, char **argv )
{
    int arr[5] = {5, 8, 6, 4, 1} ;
    int base = arr[0];
    size_t size = 5;
    size_t num;

    qsort (void* base, size_t num, size_t size, int (*comparator)(const void*,const void*));    

    // Print sorted data
    for( i = 0 ; i < size ; ++i )
        cout << arr[i] << " " ;

}

bool my_own (const string &s, int nc, char c) {

    int counter = 0;
    for (char letter : s) {
        if (letter == c) {
            counter = counter + 1;
            if (counter == nc) {
                return true;
            }
        }
        else {
            counter = 0;
        }
    }
    return false;
}

bool using_find (const string &s, int nc, char c) {

    string search;
    for (int number = 0 ; number < nc ; number ++ ) {
        search = search + c ;
    }
    return s.find(search) < s.size();
}

int main ()
{
    string sequence, answer1, answer2 ;
    int times ;
    char letter ;

    cout << "Sequence: ";
    getline(cin, sequence);
    cout << "Times: ";
    cin >> times;
    cout << "Letter: ";
    cin >> letter;

    answer1 = my_own (sequence, times, letter) ? "My own function: true" : "My own function: false" ;
    answer2 = using_find (sequence, times, letter) ? "Using Find() method: true" : "Using Find() method: false";
    cout << answer1 << endl << answer2 << endl;
    return 0;
}

bool isAllowed(string word) {
    
    vector<string> denied = {"DE", "DO", "DA", "DOS", "DAS", "E"} ;
    bool flag = true;
    for (string attemp : denied) {
        flag = flag && (attemp != word);
    }
    return flag;
}

string to_upper (string str) {

    for (int index = 0 ; index < str.size() ; index++ ) {
        str[index] = toupper(str[index]);
    }
    return str;
}

string normalizeName(const string &name) {

    string names = to_upper(name);
    string solution;
    string word = "";
    vector<string> allowed_names;

    for (int index = 0 ; index < names.size() ; index ++ ) {

        char letter = names[index];

        if (letter != ' ' && names[index+1] != ' ') {
            word = word + letter;
        }
        else if (letter != ' ' && names[index+1] == ' ') {
            word = word + letter;
            if (isAllowed(word)) {
                allowed_names.push_back(word);
            }
            word = "";
        }
        else {
            continue;
        }
    }
    
    if (isAllowed(word) && word.find(' ') > word.size()) {
        allowed_names.push_back(word);
    }

    for (string name : allowed_names) {

        if (name != " ") 
            solution = solution + name + " ";
    }
    return solution;
}

int main ()
{
    string name;
    cout << "Enter a name: ";
    getline(cin, name);
    cout << "Normalization: " << normalizeName(name) << endl;
    return 0;
}

void showArray (const int *a , int size) {

    for (int i = 0 ; i < size ; i++ ) {
        cout << "a[" << i << "] = " << *(a+i) << endl;
    }
}

int sum (int x , int y) {
    return x + y;
}

void pointers_numbers () {

    int example[] = {9, 10, 56, 8, 4} ;
    showArray(example, 5);
}

void swap_with_pointers (int *xPTR, int *yPTR) {
    
    int temp = *xPTR;
    *xPTR = *yPTR;
    *yPTR = temp;
}

void pointers_functions () {

    int result;
    int (*p)(int, int);
    p = sum;
    result = (*p)(5, 8);
    cout << "Sum: " << result << endl;
}

void malloc_memory () {

    // Reserve memory -> Only the necessary
    int *p = (int*)malloc(10*sizeof(int));

    if (p != NULL) {
        // Input data
        for (int index = 0 ; index < 10 ; index ++ ) {
            p[index] = index + 1;
        }

        // Show data
        for (int i = 0 ; i < 10 ; i++) {
            cout << p[i] << " ";
        }
    }
    else {
        cout << "Out of heap memory!" << endl;
    }
    // After using memory -> freeing it
    free(p);
}

void new_memory () {

    // Reserve memory -> Only the necessary
    int *p = new int(10);

    if (p != NULL) {
        // Input data
        for (int index = 0 ; index < 10 ; index ++ ) {
            p[index] = index + 1;
        }

        // Show data
        for (int i = 0 ; i < 10 ; i++) {
            cout << p[i] << " ";
        }
    }
    else {
        cout << "Out of heap memory!" << endl;
    }
    // After using memory -> freeing it
    delete(p);
}

int main ()
{
    pointers_numbers();
    pointers_functions();

    int x = 10, y = 340;
    cout << "Begin: x = " << x << " and y = " << y << endl;
    swap(x, y);
    cout << "End: x = " << x << " and y = " << y << endl;

    malloc_memory ();
    cout << endl;
    new_memory ();

    return 0;
}

void printBoard (char jogadas[]) {

    cout << "#############" << endl;
    cout << "# " << jogadas[0] << " # " << jogadas[1] << " # " << jogadas[2] << " #" << endl;
    cout << "#############" << endl;
    cout << "# " << jogadas[3] << " # " << jogadas[4] << " # " << jogadas[5] << " #" << endl;
    cout << "#############" << endl;
    cout << "# " << jogadas[6] << " # " << jogadas[7] << " # " << jogadas[8] << " #" << endl;
    cout << "#############" << endl;
}

int main () 
{
    char jogadas[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'} ;
    printBoard(jogadas);
    return 0;
}

int main () {

    int total = 15 ;
    int array[] = {40, 55, 11, 32, 67, 5, 74, 89, 38, 66, 27, 36, 79, 99, 2} ;

    int index = 0;
    printf("Desordenado: ");
    while (index != total - 1) {
        printf("%d, ", array[index]);
        index++;
    }
    printf("%d", array[total-1]);
    printf("\n");

    int i, j, swap;

    for ( i = 0 ; i < total - 1 ; i++ ) {   
        for ( j = 0 ; j < total - i ; j++ ) {
            if (array[j] > array[j+1]) {
                swap = array[j];
                array[j] = array[j+1];
                array[j+1] = swap;
            }
        }
    }

    index = 0;
    printf("Ordenado: ");
    while (index != total - 1) {
        printf("%d, ", array[index]);
        index++;
    }
    printf("%d", array[total-1]);
}

unsigned const int NLIN = 2;
unsigned const int NCOL = 3;

void show_static_Array (int a[][NCOL]) {
    for (int i = 0 ; i < NLIN ; i++) {
        for (int j = 0 ; j < NCOL ; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void static_allocation_2d_array () {
    
    int a[NLIN][NCOL];
    for (int i=0; i<NLIN; i++)
        for (int j=0; j<NCOL; j++)
            a[i][j] = 10*(i+1)+j;
    show_static_Array(a);
}

void show_dinamic_array(int **a, int lines, int cols) {

    for (int i = 0 ; i < lines ; i++) {
        for (int j = 0 ; j < cols ; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void dinamic_allocation_2d_array () {

    int numLines = 3;
    int numCols = 4;
    int ** a = (int **) malloc(numLines * sizeof(int*)) ;
    for (int i = 0; i < numLines; i++)
        a[i] = (int *) malloc(numCols * sizeof(int));

    for (int i = 0 ; i < numLines ; i++)
        for (int j = 0 ; j < numCols ; j++ )
            a[i][j] = 10 * (i + 1) + j ;

    show_dinamic_array(a, numLines, numCols);

    // Free memory
    for (int i = 0 ; i < numLines ; i++ )
        free(a[i]);
    free(a);
}

bool comparation_string (string one, string two) {

    bool flag = true;

    if (one.size() != two.size()) {
        flag = !flag;
    }
    else {
        for (int i = 0 ; i < one.size() ; i++)
            flag = flag && (one[i] == two[i]);
    }
    return flag;
}

void using_strings () {

    string sentence = "Jaime Villate and Tux" ;
    for (char letter : sentence)
        cout << letter << " ";
    cout << endl;
    string input1, input2;
    cout << "Input two words: ";
    cin >> input1 >> input2;
    cout << endl;
    string answer = comparation_string(input1, input2) ? "equal" : "not equal";
    cout << "'" << input1 << "' and '" << input2 << "' are " << answer << endl;
}

void common_error() {

    string name;
    int age;

    cout << "Age: ";
    cin >> age;
    cout << "Name: ";
    getline(cin, name);

    // Output error
    cout << "Name = " << name << endl;
    cout << "Age = " << age << endl;
    
}

int main ()
{   
    static_allocation_2d_array();
    dinamic_allocation_2d_array();
    using_strings();
    common_error();
    return 0;
}

struct Fraction {
    int numerator;
    int denominator;
};

bool readFraction(Fraction &fraction) {

    if (fraction.denominator == 0)
        return false;
    return true;
}

int main () 
{   
    Fraction input;
    char option;
    string answer;

    do  {
        cout << "Enter a fraction type a/b with integer numbers: ";
        cin >> input.numerator >> option >> input.denominator;
        if (!cin || option != '/') {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
        }
        } while (!cin || option != '/');

    answer = readFraction(input) ? "Valid fraction" : "Invalid fraction" ;
    cout << answer << endl;

    return 0;
}

struct Date {
    unsigned int year, month, day;
};

void readDate (Date *d) {

    char character;
    cout << "Enter a date using format YYYY/MM/DD : ";
    cin >> d->year >> character >> d->month >> character >> d->day ;
}

void writeDate(Date *d) {

    cout << setfill('0') << setw(4) << d->year << "/" << setw(2) << d->month << "/" << setw(2) << d->day << endl;
}

int compareDates(const Date *d1, const Date *d2) {

    if (d1->year < d2->year) {
        return 1;
    }
    else if (d1->year > d2->year) {
        return -1;
    }
    else if (d1->month < d2->month) {
        return 1;
    }
    else if (d1->month > d2->month) {
        return -1;
    }
    else if (d1->day < d2->day) {
        return 1;
    }
    else if (d1->day > d2->day) {
        return -1;
    }
    return 0;
}

void sortDates(Date *d1, Date *d2) {
    
    int sort = compareDates(d1, d2);
    if (sort) {
        if (sort < 0) {
            writeDate(d2);
            writeDate(d1);
            cout << endl;
        }
        else {
            writeDate(d1);
            writeDate(d2);
            cout << endl;
        }
    }
    else {
        cout << "Dates are equal: ";
        writeDate(d1);
    }
}   

int main () 
{   
    srand(time(NULL));
    Date *data1, d1;
    data1 = &d1;
    cout << " " << endl;
    readDate(data1);

    Date *data2, d2;
    data2 = &d2;
    (*data2).day = rand() % 32;
    (*data2).month = rand() % 13;
    (*data2).year = rand() % 2022;

    cout << "Random date: ";
    writeDate(data2);
    cout << " " << endl;
    sortDates(data1, data2);

    return 0;
}

struct EuroMillionsBet {

    vector<unsigned> mainNumbers;
    vector<unsigned> luckStars;
};

bool notInside(vector<unsigned> v, unsigned int value) {

    bool flag = true;
    for (unsigned int index = 0 ; index < v.size() ; index++ ) {
        flag = flag && (v[index] != value) ;
    }
    return flag;
}

void generate_random(EuroMillionsBet &key) {

    int counter = 0;
    while (counter != 5) {
        unsigned int guess = rand() % 51;
        if (notInside(key.mainNumbers, guess)) {
            key.mainNumbers.push_back(guess);
            counter++;
        }
    }

    counter = 0;
    while (counter != 2) {
        unsigned int guess = rand() % 13;
        if (notInside(key.luckStars, guess)) {
            (key.luckStars).push_back(guess);
            counter++;
        }
    }
}

int main ()
{
    // Input user keys:
    EuroMillionsBet user_key;
    int counter = 0;
    unsigned int user_guess;
    while (counter != 5) {
        cout << "Enter a main number " << counter + 1 << " : ";
        cin >> user_guess;
        if (notInside(user_key.mainNumbers, user_guess)) {
            user_key.mainNumbers.push_back(user_guess);
            counter++;
        }
    }
    counter = 0;
    while (counter != 2) {
        cout << "Enter a lucky number " << counter + 1 << " : ";
        cin >> user_guess;
        if (notInside(user_key.luckStars, user_guess)) {
            user_key.luckStars.push_back(user_guess);
            counter++;
        }
    }

    // Generate random keys:
    srand(time(NULL));
    EuroMillionsBet random_key;
    generate_random(random_key);

    // Comparation
    cout << "\nCorrect main numbers: ";
    for (unsigned int guess : user_key.mainNumbers) {
        if (!notInside(random_key.mainNumbers, guess)) {
            cout << guess << " " << endl;
        }
    }
    cout << "\nCorrect lucky stars: ";
    for (unsigned int guess : user_key.luckStars) {
        if (!notInside(random_key.luckStars, guess)) {
            cout << guess << " " << endl;
        }
    }
    return 0;
}

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

int main ()
{

	ifstream in_file("maze.txt");
	if (!in_file.good()) {
		cout << "Error opening file \"maze.txt\".\n";
		main();
	}

    string aux;
	getline(in_file, aux);
	cout << aux << endl;

	int lines = stoi(aux.substr (0,2));
    int cols = stoi(aux.substr (aux.size()-2,2));

	cout << "Numbers: " << lines << " " << cols << endl;

	int i = 0;
	string aux;
	while (!in_file.eof())
	{
		getline(in_file, aux);
		for (int j = 0; j < columns ; j++)
			a[counter][j] = aux[j];
		
	}
	in_file.close();
	return 0;
}

int comparator_a (const void* a, const void* b) {

    return (*(int*)a - *(int*)b);
}

int comparator_d (const void* a, const void* b) {

    return (*(int*)b - *(int*)a);
}


int main ()
{   
    int example[10];
    int counter = 0;
    int input;
    while (counter != 10) {
        cout << "Number " << counter + 1 << ": ";
        cin >> input;
        example[counter] = input;
        counter++;
    }

    char answer;
    cout << "Ascending, descending or half-half order? a/d/h: ";
    cin >> answer;

    switch (answer) {
        case 'a':
            qsort (example, 10, sizeof(int), comparator_a) ;
            break;
        case 'd':
            qsort (example, 10, sizeof(int), comparator_d) ;
            break;
        case 'h':
            qsort (example, 10, sizeof(int), comparator_a) ;
            int aux1[5];
            for (int i = 5 ; i < 10 ; i++) {
                aux1[i-5] = example[i];
            }
            qsort (aux1, 5, sizeof(int), comparator_d) ;
            for (int i = 5 ; i < 10 ; i++ ) {
                example[i] = aux1[i-5];
            }
            break;

        default:
            cout << "Invalid input!" << endl;
            exit(0);
    }

    cout << "Sorted: ";
    for (int number : example) {
        cout << number << " ";
    }
    cout << endl;

    return 0;
}

int comparator_d ( const void *arg1, const void *arg2 ) {

   if ((*(char*)arg1 < *(char*)arg2)) {
       return 1;
   }
   else if ((*(char*)arg1 > *(char*)arg2)) {
       return -1;
   }
   return 0;
}

int comparator_a ( const void *arg1, const void *arg2 ) {

   if ((*(char*)arg1 > *(char*)arg2)) {
       return 1;
   }
   else if ((*(char*)arg1 < *(char*)arg2)) {
       return -1;
   }
   return 0;
}

int main( int argc, char **argv )
{
    char example[5] = {'f', 'a', 'b', 'i', 'o'} ;

    //Ascending order
    qsort (example, 5, sizeof(char), comparator_a);   
    cout << "Ascending order: "; 
    for (int i = 0 ; i < 5 ; i++ )
        cout << example[i] << " " ;
    cout << endl;

    // Descending order:
    qsort (example, 5, sizeof(char), comparator_d); 
    cout << "Descending order: ";
    for (int j = 0 ; j < 5 ; j++ )
        cout << example[j] << " ";
    cout << endl;

    return 0;
}

bool isHidroxide (string compound) {

    return (compound[compound.size()-2] == 'O' && compound[compound.size()-1] == 'H');
}

int main () 
{   
    vector<string> compounds = {"KOH", "H2O2", "NaCl", "NaOH", "C9H8O4", "MgOH"} ;
    
    for (string compound : compounds) {
        string answer = isHidroxide(compound) ? " is hidroxide" : " is not hidroxide";
        cout << compound << answer << endl;
    }
    
    return 0;   
}

void decompose (string compound) {
    
    string element = "";
    for (char letter : compound)

        if (islower(letter) && element.size()) {
            element = element + letter;
            cout << element << " ";
            element = "";
        }
        else if (isupper(letter) && !element.size()) {
            element = element + letter;
        }
        else if (isupper(letter) && element.size()) {
            cout << element << " ";
            element = "";
            element = element + letter;
        }
        else
            continue;

    cout << element;
}

int main ()
{
    vector<string> compounds = {"KOH", "H2O2", "NaCl", "NaOH", "C9H8O4", "MgOH"} ;
    for (string compound : compounds) {
        cout << compound << " = ";
        decompose(compound);
        cout << endl;
    }
    return 0;
}

struct Person {

    string name;
    int age;
    char gender;
    struct Address {

        string street;
        int door_number;
        string city;
    };

    Address address;
} ;

bool notInVector (vector<string> vec , string attemp) {
    
    for (string item : vec) {
        if (item == attemp) {
            return false;
        }
    }
    return true;
}

void remove_duplicates(vector<string> &streets) {

    vector<string> without_duplicates;
    for (string street : streets) {
        if (notInVector(without_duplicates, street)) {
            without_duplicates.push_back(street);
        }
    }
    streets = without_duplicates;
}

void input_data (vector<Person> &all_persons) {

    char answer;

    while (answer != 'q' && answer != 'Q') {

        Person person;
        cout << "Name: ";
        cin >> person.name;
        cout << "Age: ";
        cin >> person.age;
        cout << "Gender: ";
        cin >> person.gender;
        cout << "Street: ";
        cin >> person.address.street;
        cout << "Door number: ";
        cin >> person.address.door_number;
        cout << "City: ";
        cin >> person.address.city;
        all_persons.push_back(person);

        cout << "Press 'Q' to quit or another letter to continue.";
        cin >> answer;
    }
}

int main ()
{   
    vector<Person> all_persons;
    vector<Person> same_city;
    vector<string> all_streets;
    input_data (all_persons);
    
    string city;
    cout << "City to search: ";
    cin >> city;

    for (Person person : all_persons) {
        if (person.address.city == city) {
            same_city.push_back(person);
            all_streets.push_back(person.address.street);
        };
    }
    
    remove_duplicates(all_streets);

    cout << "City: " << city << endl;
    for (string street : all_streets) {
        cout << "Street: " << street << endl;
        for (Person person : same_city) {
            if (person.address.street == street) {
                cout << "- " << person.name << endl;        
            }
        }
    }

    return 0;
}

struct Polygon {

    struct Point {

        int x;
        int y;
    };  

    Point ponto;
};

int main ()
{
    int n_vertices, counter = 0;
    cout << "How many vertices you want? ";
    cin >> n_vertices;

    vector<Polygon> all_points ;
    while (counter != n_vertices) {

        Polygon poligono;
        cout << "Vertice " << counter + 1 << endl;
        cout << "X: ";
        cin >> poligono.ponto.x;
        cout << "Y: ";
        cin >> poligono.ponto.y;
        all_points.push_back(poligono);
        counter ++;
    }

    int total = 0;
    for (int index = 0 ; index < all_points.size() - 1 ; index ++) {
        int xa = all_points[index].ponto.x;
        int ya = all_points[index].ponto.y;
        int xp = all_points[index+1].ponto.x;
        int yp = all_points[index+1].ponto.y;
        total = total + (xa*yp - ya*xp);
    }
    int x_inicial = all_points[0].ponto.x;
    int x_final = all_points[all_points.size()-1].ponto.x;
    int y_inicial = all_points[0].ponto.y;
    int y_final = all_points[all_points.size()-1].ponto.y;
    total = total + (x_final*y_inicial-y_final*x_inicial);
    
    double area = (double) abs(total)/2;
    cout << "Total area: " << area << endl;

    return 0;
}

int main ()
{   
    vector<string> all_names;
    string input, file_name;
    string current_name;

    cout << "File name: ";
    cin >> input;
    file_name = "Files\\" + input + ".txt";
    ifstream file;
    file.open(file_name);

    // Verify user input
    if (!file.good()) {

        while (true) {

            cin.clear();
            cin.ignore(10000, '\n');
            cout << "File not found. Please try again: ";
            cin >> input;
            file_name = "Files\\" + input + ".txt";
            ifstream file(file_name);
            if (file.good())
                break;
        }
        file.open(file_name);
    }

    // Get data
    while (!file.eof()) {
        getline(file, current_name);
        all_names.push_back(current_name);
    }
    file.close();

    // Sort names using qsort algorithm
    sort(all_names.begin(), all_names.end());

    // Create new file and store sorted data, line by line
    string new_file_name = input + "_sorted.txt";
    ofstream another_file;
    another_file.open(new_file_name);

    for (string name : all_names)
        another_file << name << endl;

    another_file.close();

    return 0;
} 

int main ()
{   
    string content, current_line, uncompressed_name = "Files\\binary_image_uncompressed.txt";
    int lines = 0; int cols = 0;
    ifstream file;

    file.open(uncompressed_name);
    while (!file.eof()) {
        getline(file, current_line);
        cols = current_line.size();
        lines ++;
        content += current_line;
    }
    file.close();

    int counter;
    char current_letter;
    string compressed_content, part;
    string current_stack = "";
    current_stack += content[0];

    for (int index = 1 ; index < content.size() ; index ++ ) {

        current_letter = content[index];

        if ( current_stack[current_stack.size()-1] == current_letter ) {
            current_stack += current_letter;
        }
        else {
            counter = current_stack.size() ;
            part = current_letter == 'b' ? to_string(counter) + 'w' : to_string(counter) + 'b' ;
            compressed_content += part;
            current_stack = "";
            current_stack += current_letter;
        }
    }
    part = current_stack[current_stack.size()] == 'b' ? to_string(current_stack.size()) + 'w' : to_string(current_stack.size()) + 'b';
    compressed_content += part;

    string compressed_name = "binary_image_compressed.txt";
    ofstream new_file;
    new_file.open(compressed_name);
    new_file << lines << " " << cols << " " << compressed_content;
    new_file.close();

    return 0;
}

struct Person {
    string number;
    string name;
};

void create_random_phone_list (string name, int value) {

    ofstream new_file;
    new_file.open(name);
    ifstream names_file;
    names_file.open("Files\\random_names.txt");

    // Store all names into a vector
    vector<string> all_names;
    string current_name;
    while (!names_file.eof()) {
        names_file >> current_name;
        all_names.push_back(current_name);
    }

    // Create random number and random names
    while (value) {

        string number = "";
        number += '9';
        while (number.size() < 9) {
            int digit = rand() % 10;
            number += to_string(digit);
        }
        string first_name = all_names[rand() % all_names.size()];
        string last_name = all_names[rand() % all_names.size()];
        if (value == 1)
            new_file << number << " " << first_name << " " << last_name;
        else
            new_file << number << " " << first_name << " " << last_name << endl;
        value--;
    }
    
    new_file.close();
}

bool exists (vector<Person> persons, string name) {

    for (Person person : persons) {
        if (person.name == name)
            return true;
    }
    return false;
}

void option_1 (vector<Person> &persons) {

    cout << "Input a new record in phone numbers" << endl;
    string name, phone_number;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Person name: ";
    getline(cin, name);
    cout << name << "'s phone number: ";
    cin >> phone_number;

    Person new_person;
    new_person.name = name;
    new_person.number = phone_number;
    persons.push_back(new_person);
}

void option_2 (vector<Person> &persons) {

    cout << "Delete the record of an existing person" << endl;
    string name;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Name: ";
    getline(cin, name);

    if ( exists (persons, name) ) {
        vector<Person> clone;
        for (Person person : persons) {
            if (person.name != name) {
                clone.push_back(person);
            }
        }
        persons = clone;
    }       
    else {
        cout << "This name not exists in current phone list" << endl;
    }
}   

void option_3 (vector<Person> &persons) {

    cout << "Modify a phone number associated an existing person" << endl;
    string name;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Name: ";
    getline(cin, name);

    string new_number;
    if ( exists (persons, name) ) {
        for (Person &person : persons) {
            if (person.name == name) {
                cout << "Enter a new phone number: ";
                cin >> new_number;
                person.number = new_number;
                break;
            }
        }
    }       
    else {
        cout << "This name not exists in current phone list" << endl;
    }   
}

void option_4 (vector<Person> &persons) {

    string name;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Search the phone number of person: ";
    getline(cin, name);

    if ( exists (persons, name) ) {
        for (Person person : persons) {
            if (person.name == name) {
                cout << name << "'s number is " << person.number << endl;
                break;
            }
        }
    }       
    else {
        cout << "This name not exists in current phone list" << endl;
    }  
}

void menu (vector<Person> &persons) {
    
    char answer;
    while (tolower(answer) != 'q') {

        cout << "Menu:" << endl;
        cout << "1 - Add a new person" << endl;
        cout << "2 - Remove a record of a existing person" << endl;
        cout << "3 - Modify the phone number associater with an existing person" << endl;
        cout << "4 - Search for number of a given person" << endl;
        cout << "Q - Quit" << endl;
        cout << "Your choice: ";
        cin >> answer;

        while (tolower(answer) != '1' && tolower(answer) != '2' && tolower(answer) != '3' && 
                tolower(answer) != '4' && tolower(answer) != 'q' ) {
                
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Input error. Please try again: ";
                cin >> answer;
        }

        if (tolower(answer) == 'q') 
            break;

        else {
            
            switch (answer)
            {
                case '1':
                    option_1 (persons);
                    break;

                case '2':
                    option_2 (persons);
                    break;

                case '3':
                    option_3 (persons);
                    break;

                case '4':
                    option_4 (persons);
                    break;

                default:
                    break;
            }
        }

        cout << "Continue? Q to Quit or another letter to continue: ";
        cin >> answer;
    }
}

int main ()
{       
    srand(time(NULL));
    int value;
    string file_name = "random_phone_list.txt";
    cout << "How many numbers? ";
    cin >> value;

    create_random_phone_list(file_name, value);

    vector<Person> all_persons;
    ifstream phone_list;
    string current_line;
    phone_list.open("random_phone_list.txt");
    while (!phone_list.eof()) {
        getline(phone_list, current_line);
        string number = current_line.substr(0, 9);
        string name = current_line.substr(10, current_line.size()-10);

        Person person;
        person.name = name;
        person.number = number;
        all_persons.push_back(person);
    }
    phone_list.close();
    	
    menu(all_persons);

    ofstream new_file;
    new_file.open("random_phone_list.txt");
    new_file << all_persons[0].number << " " << all_persons[0].name;
    for (int index = 1 ; index < all_persons.size() ; index ++ ) {
        new_file << endl << all_persons[index].number << " " << all_persons[index].name;
    }
    cout << "Stored all modified data in current file radom_phone_list.txt" << endl;

    return 0;
}

bool isAllowed(string word) {
    
    vector<string> denied = {"DE", "DO", "DA", "DOS", "DAS", "E"} ;
    bool flag = true;
    for (string attemp : denied) {
        flag = flag && (attemp != word);
    }
    return flag;
}

string to_upper (string str) {

    for (int index = 0 ; index < str.size() ; index++ ) {
        str[index] = toupper(str[index]);
    }
    return str;
}

void normalizeName(const string name) {

    string names = to_upper(name);
    string solution;
    string word = "";
    istringstream substring (names);

    while (true) {
        string new_word = word;
        substring >> word;

        if (new_word == word) {
            break;
        }

        if (isAllowed(word))
            solution += word + " ";
    }   
    cout << solution;
}

int main ()
{
    string name;
    cout << "Enter a name: ";
    getline(cin, name);
    cout << "Normalization: ";
    normalizeName(name);
    return 0;
}

struct User {

    vector<unsigned> numbers;
    string name;
};

bool notInside(vector<unsigned> v, unsigned int value) {

    bool flag = true;
    for (unsigned int index = 0 ; index < v.size() ; index++ ) {
        flag = flag && (v[index] != value) ;
    }
    return flag;
}

void generate_random(vector<unsigned> &key) {

    int counter = 0;
    while (counter != 5) {
        unsigned int guess = rand() % 51;
        if (notInside(key, guess)) {
            key.push_back(guess);
            counter++;
        }
    }

    counter = 0;
    while (counter != 2) {
        unsigned int guess = rand() % 13;
        if (notInside(key, guess)) {
            (key).push_back(guess);
            counter++;
        }
    }
}

int main ()
{   
    srand(time(NULL));
    string file_name = "euromillions_bet.txt";
    string new_file_name = "euromillions_bet_results.txt";
    vector<User> all_users;
    vector<unsigned> key;
    generate_random(key);

    ifstream bet;
    string current_line;
    bet.open(file_name);

    while (!bet.eof()) {

        User current_user;
        getline(bet, current_line);
        current_user.name = current_line;
        getline(bet, current_line);
        
        istringstream new_line (current_line);
        int numbers = 7;
        while (numbers) {

            int number;
            new_line >> number;
            current_user.numbers.push_back(number);
            numbers--;
        }

        all_users.push_back(current_user);
    }

    bet.close();

    ofstream new_file;
    new_file.open(new_file_name);

    new_file << "KEY: ";
    for (unsigned int number : key) {
        new_file << number << " ";
    }
    new_file << endl;
    for (User user : all_users) {
        new_file << user.name << endl;
        for (int number : user.numbers) {
            new_file << number << " ";
        }
        new_file << " --> ";
        for (int guess : user.numbers) {
            if (!notInside(key, guess)) {
                new_file << guess << " ";
            }
        }
        new_file << endl;
    }

    new_file.close();

    return 0;
}

void open_file () { 
    
    // Using files
    string directory;
    cout << "Directory of file: ";
    getline(cin, directory);

    ifstream new_file;
    string current_line;
    new_file.open(directory);
    if (new_file.good()) {

        while (!new_file.eof()) {
            getline(new_file, current_line);
            cout << current_line;
        }
        new_file.close();
    }
    else {
        cout << "This file does not exist. Please try again.";
    }
}

const int MAX_NAMELEN = 10;

typedef struct {
    char name[MAX_NAMELEN];
    unsigned int age;
} Person;

void using_text_files () {

    char c;
    string name = "text.txt";
    fstream file;
    file.open(name);

    // using cin >>
    file.seekg(0, ios::beg); // Pointer to the beginning of file
    cout << "File contents usign cin: " << endl;
    while (file >> c)
    {
        cout << c;
    }
    cout << endl;
    file.clear(); // Clear eof() flag

    //using get();
    file.seekg(0, ios::beg);
    cout << "File contents using get: " << endl;
    while (file.get(c))
    {
        cout << "Next letter: " << c << endl;
    }
    cout << endl;
    file.clear();
    file.close();
}

void using_binary_files () {
    
    int place = 1;
    fstream personFile;
    Person a[MAX_NAMELEN];
    personFile.open("names.dat", ios::out | ios::binary);
    personFile.seekg(place);
    personFile.write((char *) a, 10*sizeof(Person));
}

union Numbers {
    int x;
    double d;
};

enum numType { Int, Double };

void normalization() {

    string input = "      March    25      , 2014      ";
    string month, comma;
    int day, year;

    cout << "Normalization of "  << input << " is: ";
    istringstream istr(input);
    istr >> month >> day >> comma >> year;
    cout << month << " " << day << comma << " " << year << endl;
}

void strings_to_numbers() {

    cout << "Strings to numbers: \n";
    vector<string> numbers = {" 89 ", "   78", "  -1   ", "72    "};
    for (string number : numbers) {
        cout << stoi(number) << endl;
    }
}

void time_normalization() {

    int hours, minutes;
    char sinal;

    cout << "Times manipulation: \n";
    vector<string> times = {"       18:32", "19     :     21    ", "18: 56"};
    for (string time : times) {
        istringstream instr(time);
        instr >> hours >> sinal >> minutes;
        cout << hours << sinal << minutes << endl;
    }
}

void using_unions() {

    //or save the integer or save the double, not both
    Numbers n;
    n.x = 10;
    n.d = 3.14;
    cout << n.d << " " << n.x << endl;
}

class Date {

    public:
        Date(); 
        void setYear (unsigned int y) ;
        void setMonth (unsigned int m) ;
        void setDay (unsigned int d) ;
        void show() ;
        bool valid() ;
        
    private:
        unsigned int year;
        unsigned int month;
        unsigned int day;

};

Date::Date() {
    day = 0;
    year = 0;
    month = 0;
}

bool Date::valid() {

    bool answer;
    answer = (day > 0 && day < 32 && year > 0 && month > 0 && month < 13);
    return answer;
}

void Date::setYear (unsigned int y) {
    year = y;
}

void Date::setMonth (unsigned int m) {
    month = m;
}

void Date::setDay (unsigned int d) {
    day = d;
}

void Date::show() {
    cout << day << "-" << month << "-" << year << endl;
}

void using_classes() {

    Date d1;
    unsigned int d, m, y;
    cout << "Day: ";
    cin >> d;
    d1.setDay(d) ;
    cout << "Month: ";
    cin >> m;
    d1.setMonth(m) ;
    cout << "Year: ";
    cin >> y;
    d1.setYear(y) ;

    if (d1.valid())
        d1.show();
    else {
        cout << "Invalid input. Please try again:" << endl;
        using_classes();
    }
}

class Date
{
    public:

        Date(unsigned int year, unsigned int month,unsigned int day);
        Date(string yearMonthDay);
        void setYear(unsigned int year) ;
        void setMonth(unsigned int month) ;
        void setDay(unsigned int day) ;
        void setDate(unsigned int year, unsigned int month, unsigned int day) ;
        unsigned int getYear() const;
        unsigned int getMonth() const;
        unsigned int getDay() const;
        string getDate() const;
        void show() const;

        bool isValid();
        bool isEqualTo(const Date &date);
        bool isNotEqualTo(const Date &date);
        bool isAfter(const Date &date);
        bool isBefore(const Date &date);

    private:

        unsigned int year;
        unsigned int month;
        unsigned int day;

        unsigned int how_many_days(unsigned year, unsigned month);
        bool isLeapYear (unsigned int year);
}; 

bool Date::isEqualTo(const Date &date) {
    return (day == date.getDay() && month == date.getMonth() && year == date.getYear());
}

bool Date::isNotEqualTo(const Date &date) {
    return !isEqualTo(date);
}

bool Date::isAfter(const Date &date) {

    bool flag = true;

    if (year > date.getYear()) {
        flag = false;
    }
    else {
        if (month > date.getMonth()) {
            flag = false;
        }
        else {
            if (day > date.getDay()) {
                flag = false;
            }
            else {
                if (isEqualTo(date)) {
                    flag = false;
                }
            }
        }
    }
    return !flag;
}   

bool Date::isBefore(const Date &date) {
    return ! (isAfter(date) || isEqualTo(date));
}

bool Date::isValid() {

    bool answer;
    answer = ( day > 0 && day <= how_many_days(year, month) && month < 13 && month > 0 && year >= 0 && year < 2022 );
    return answer;
}

Date::Date(unsigned int y, unsigned int m, unsigned int d) {
    year = y;
    month = m;
    day = d;
}

Date::Date(string yearMonthDay) {
    int y, m, d;
    char x;
    istringstream str(yearMonthDay);
    str >> y >> x >> m >> x >> d;
    day = d;
    month = m;
    year = y;
}

unsigned int Date::how_many_days(unsigned year, unsigned month) {

    unsigned int days = 0;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days = 31;
        break;
    
        case 4: case 6: case 9: case 11:
        days = 30;
        break;

        case 2:
            if (Date::isLeapYear(year)) {
                days = 29;
            }
            else {
                days = 28;
            }
            break;
    }
    return days;
}

bool Date::isLeapYear (unsigned int year) {

    bool flag = true;
    flag = flag && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ;
    return flag;
}

void Date::setYear(unsigned int y) {
    year = y;
}

void Date::setMonth(unsigned int m) {
    month = m;
}

void Date::setDay(unsigned int d) {
    day = d;
}

void Date::setDate(unsigned int y, unsigned int m, unsigned int d) {
    year = y;
    month = m;
    day = d;
}

unsigned int Date::getYear() const {
    return year;
}

unsigned int Date::getMonth() const {
    return month;
}

unsigned int Date::getDay() const {
    return day;
}

string Date::getDate() const {
    string all;
    string d = to_string(day); while (d.size() < 2) { d = "0" + d ; } ;
    string m = to_string(month); while (m.size() < 2) { m = "0" + m ; } ;
    string y = to_string(year); while (y.size() < 4) {y = "0" + y ; } ;
    all = y + "/" + m + "/" + d;
    return all;
}

void Date::show() const {
    string result = getDate();
    cout << result << endl;
}

void test_dates() {

    cout << endl;
    Date d1 = Date ("2021/4/29");
    cout << "Date: ";
    d1.show(); 
    cout << "Current day: " << d1.getDay() << endl;
    cout << "Current month: " << d1.getMonth() << endl;
    cout << "Current year: " << d1.getYear() << endl;
    string total = d1.getDate();
    cout << "Current date: " << total << endl;

    Date d2 = Date (d1.getYear(), d1.getMonth(), d1.getDay() + 1);
    cout << "\nNext day: ";
    d2.show();
    cout << "Next day: " << d2.getDay() << endl;
    cout << "Next month: " << d2.getMonth() << endl;
    cout << "Next year: " << d2.getYear() << endl;
    string total_date = d2.getDate();
    cout << "Next date: " << total_date << endl;
    cout << endl;
}

void test_new_methods() {

    vector<Date> all_dates;
    Date d3 = Date(2021, 2, 30); all_dates.push_back(d3);
    Date d4 = Date(2025, 2, 29); all_dates.push_back(d4);
    Date d5 = Date(2021, 2, 28); all_dates.push_back(d5);
    Date d6 = Date(2021, 14, 29); all_dates.push_back(d6);
    Date d7 = Date(2021, 6, 31); all_dates.push_back(d7);

    for (Date d : all_dates) {
        string data = d.getDate();
        string answer = d.isValid() ? "Valid" : "Not valid";
        cout << data << " --> " << answer << endl;
    }

    vector<Date> new_dates;
    d3.setDate(1968, 4, 26); new_dates.push_back(d3);
    d4.setDate(2010, 12, 31); new_dates.push_back(d4);
    d5.setDate(2002, 7, 10); new_dates.push_back(d5);
    d6.setDate(2002, 7, 10); new_dates.push_back(d6);
    d7.setDate(1969, 2, 10); new_dates.push_back(d7);

    all_dates = new_dates;
    cout << endl;
    for (int i = 0 ; i < all_dates.size() - 1  ; i ++ ) {

        if ( all_dates[i].isValid() && all_dates[i+1].isValid() ) {

            string dt1 = all_dates[i].getDate();
            string dt2 = all_dates[i+1].getDate();
            string answer = all_dates[i].isEqualTo(all_dates[i+1]) ? " is equal to " : " isn't equal to ";
            cout << dt1 << answer << dt2 << endl;
            answer = all_dates[i].isNotEqualTo(all_dates[i+1]) ? " isn't equal to " : " is equal to ";
            cout << dt1 << answer << dt2 << endl;
            answer = all_dates[i].isBefore(all_dates[i+1]) ? " is before " : " is not before to ";
            cout << dt1 << answer << dt2 << endl;
            answer = all_dates[i].isAfter(all_dates[i+1]) ? " is after " : " is not after to ";
            cout << dt1 << answer << dt2 << endl;
        }
    }
    cout << endl;
}

int main ()
{
    test_dates();
    test_new_methods();
    return 0;
}

#define FENCE '*';
#define PLAYER 'H';
#define ROBOT 'R';

using namespace std;

int proportion_robots (int number) 
{
    // In teacher's maze, there are 5 robots / 200 area
    int rd = ( 5 * number ) / 200 ;
    return floor(rd);
}

int proportion_fences (int number)
{
    // In teacher's maze, there are 10 fences / 200 area
    int rd = ( 10 * number ) / 200 ; 
    return floor(rd);
}

int random (int max, int min) 
{   
    int number = rand() % (max - min + 1) + min ;
    return number;
}

bool is_Available(vector<char> maze, int index) 
{
    return (maze[index] == ' ');
}

void print_maze (int lines, int cols, vector<char> maze, string name) 
{   
    ifstream file;
    file.open(name);

    if (!file.good())
    {   
        ofstream new_file;
        new_file.open(name);
        new_file << lines << " x " << cols << endl;
        for (int i = 0 ; i < maze.size() ; i ++ ) 
        {
            new_file << maze [i];
            if (i > 1 && i % cols == cols - 1 && i != maze.size() - 1 ) 
            {
                new_file << endl;
            }
        }
        new_file.close();
    }
}

void generate (int max_cols, int max_lines, int quantity) 
{   
    int final, initial = time(NULL); 
    int counter = 0;
    while (counter != quantity) 
    {   
        string name = counter + 1 < 10 ? "MAZE_0" + to_string(counter+1) + ".TXT" : "MAZE_" + to_string(counter+1) + ".TXT";
        int MIN_COLS = 10;
        int MIN_LINES = 10;
        int cols = random (max_cols, MIN_COLS);
        int lines = random (max_lines, MIN_LINES);

        int area = lines * cols ;
        int qtd_robots = proportion_robots (area);
        int qtd_fences = proportion_fences (area);
        vector<char> maze = {};

        // Input white spaces
        while (area) 
        {   
            maze.push_back(' ');
            area--;
        }

        // Input border
        for (int index = 0 ; index < lines ; index ++)
        {
            maze[index] = FENCE;
            maze[maze.size() - 1 - index] = FENCE;
        }
        for (int index = lines ; index < maze.size() ; index ++ )
        {
            if (index % lines == 0 || index % lines == lines - 1)
            {
                maze[index] = FENCE;
            }
        }

        // Random objects input
        bool input_player = true;
        while (qtd_robots || qtd_fences || input_player) 
        {
            int index_robot = random (maze.size(), 0);
            if (is_Available(maze, index_robot) && qtd_robots) 
            {
                maze[index_robot] = ROBOT;
                qtd_robots -- ;
            }

            int index_fence = random (maze.size(), 0);
            if (is_Available(maze, index_fence) && qtd_fences) 
            {
                maze[index_fence] = FENCE;
                qtd_fences -- ;
            }

            int index_player = random (maze.size(), 0);
            if (is_Available(maze, index_player) && input_player)
            {   
                maze[index_player] = PLAYER;
                input_player = false;
            }

        }

        print_maze (cols, lines, maze, name);
        counter++;
    }
    final = time(NULL); 
    cout << quantity << " mazes were created in " << final - initial << " seconds." << endl;
}

int main ()
{   
    srand(time(NULL));
    int MAX_COLS;
    int MAX_LINES;
    int QTD;

    cout << "Max columns: ";
    cin >> MAX_COLS;
    cout << "Max lines: ";
    cin >> MAX_LINES;
    cout << "How many mazes? ";
    cin >> QTD;
    
    generate (MAX_COLS, MAX_LINES, QTD);

    return 0;
}

template <class T>
void swapvalues (T x, T y) {

    cout << "Before: x = " << x << " and y = " << y << endl;
    T temp = x;
    x = y;
    y = temp;
    cout << "After: x = " << x << " and y = " << y << endl;
}

void using_iterators() {

    vector<int> numbers = {5, 51, 51, 6, 51, 65, 53, 8, 52, 51, 96, 14, 541};
    vector<int>::iterator p;
    for (p = numbers.begin() ; p != numbers.end() ; p++ ) {
        cout << *p << endl;
    }
}

int main ()
{
    swapvalues("Hello", "World");  // Strings
    swapvalues(56165, 651651);     // Integers
    swapvalues('F', 'A');          // Chars

    using_iterators();

    return 0;
}

// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <limits>
#include <fstream>

using namespace std;

class Student {
    
    public:

        Student();
        Student(const string &code, const string &name);
        void setAtributes();
        void setGrades(double shortExam, double project, double exam);
        string getCode() const;
        string getName() const;
        int getFinalGrade() const;
        void setFinalGrade(int result);
        bool isApproved() const;

    private:

        string code;
        string name;
        int weightShortExam = 20, weightProject = 30, weightExam = 50;
        double shortExam, project, exam;
        int finalGrade;

} ;

Student::Student(const string &code, const string &name) {

    this -> code = code;
    this -> name = name;
}

void Student::setGrades(double shortExam, double project, double exam) {

    this -> shortExam = shortExam;
    this -> project = project;
    this -> exam = exam;
}

string Student::getCode() const {
    return code;
}

string Student::getName() const {
    return name;
}

void Student::setFinalGrade(int number) {
    finalGrade = number;
}

int Student::getFinalGrade() const{

    int result = floor( ( weightExam * exam + project * weightProject + shortExam * weightShortExam ) / 100);
    return result;
}

bool Student::isApproved() const {
    
    bool answer = finalGrade < 10 ? false : true;
    return answer;
}

void readStudentsData (vector<Student> &all_students) {

    string scode, sname;
    int segrade, pgrade, egrade;

    cout << "Student code? ";
    getline(cin, scode);
    cout << "Student name? ";
    getline(cin, sname);
    Student student = Student(scode, sname);
    cout << "Short exam grade? ";
    cin >> segrade;
    cout << "Project grade? ";
    cin >> pgrade;
    cout << "Exam grade? ";
    cin >> egrade;
    student.setGrades(segrade, pgrade, egrade);
    int number = student.getFinalGrade();
    student.setFinalGrade(number);

    string answer = student.isApproved() ? "You are approved" : "You are not approved";
    cout << answer << endl;
    all_students.push_back(student);
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void show_data(vector<Student> all) {

    cout << "\nAll data: " << endl;
    for (Student student : all) {
        cout << student.getName() << " --> Final grade: " << student.getFinalGrade() ;
        string answer = student.isApproved() ? " --> Passed" : " --> Not passed";
        cout << answer << endl;
    }
}

void showAboveAverageStudents(vector<Student> all) {
    
    int total = 0;
    for (Student student : all) {
        total = total + student.getFinalGrade();
    }
    int average = floor(total / all.size());
    cout << "Grades Average: " << average << endl;
}

void manual() {

    vector<Student> all_students;
    char answer;
    do  {   

        readStudentsData(all_students);
        cout << "Continue ? Y/N: ";
        cin >> answer;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        } while (tolower(answer) != 'n');
    
    show_data(all_students);
}

void using_files() {

    ifstream file;
    string current_line;
    vector<Student> all_students;

    file.open("Files\\Students.txt");
    while (!file.eof()) {
        
        vector<string> things;
        getline(file, current_line);
        int i = 0;
        string current_thing;
        while (i != current_line.size()) {

            if (current_line[i] != ';') {
                current_thing += current_line[i];
            }
            else {
                things.push_back(current_thing);
                current_thing = "";
            }
            i++;
        }

        things.push_back(current_thing);
        
        string code = things[0];
        string name = things[1];
        Student student = Student(code, name);
        int seg = stod(things[2]);
        int pg = stod(things[3]);
        int eg = stod(things[4]);
        student.setGrades(seg, pg, eg);

        all_students.push_back(student);

    }

    show_data(all_students);

    file.close();
}

int main()
{
    manual();
    using_files();
    return 0;
}

// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

class Date {

    public: 
        Date();
        Date(int day, int month, int year);
        int getDay();
        int getYear();
        int getMonth();
        void showDate();

    private:
        int day;
        int month;
        int year;
};

Date::Date(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

int Date::getDay() { return day; }
int Date::getMonth() { return  month; }
int Date::getYear() { return year; }

void Date::showDate() {

    string all = to_string(year) + '/' + to_string(month) + '/' + to_string(day);
    cout << all << endl;
}

class Person {

    public:    
        Person();
        Person(string name, char gender, Date birthday);
        string getName();
        char getGender();
        void getBirth();

    private:
        string name;
        char gender;
        Date birthday;

};

Person::Person(string name, char gender, Date b) {
    this -> name = name;
    this -> gender = gender;
    this -> birthday = b;
}

string Person::getName() { return name; }
char Person::getGender() { return gender; }
void Person::getBirth() { birthday.showDate(); }

void get_data(vector<Person> &all_persons) {

    char answer;
    do  {

        string name;
        char gender, barra;
        int day, year, month;

        cout << "Name: ";
        getline(cin, name);
        cout << "Gender: ";
        cin >> gender;
        cout << "Birthday: day/month/year: ";
        cin >> day >> barra >> month >> barra >> year;

        Date current_date = Date(day, month, year);
        Person current_person = Person(name, gender, current_date);
        all_persons.push_back(current_person);

        cout << "Continue? Y/N: ";
        cin >> answer;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        } while (tolower(answer) != 'n') ;
}

void show_data(vector<Person> all) {

    for (Person person : all) {
        cout << person.getName() << " " << person.getGender() << " ";
        person.getBirth();
        cout << endl;
    }
}

int main ()
{   
    vector<Person> all_persons = {};
    get_data(all_persons);
    show_data(all_persons);
    return 0;
}

void using_iterator() {

    vector<int>::reverse_iterator p; // --> or using "auto" in for loop
    vector<int> numbers;

    // Input random numbers in vector
    for (int i = 0 ; i < 100 ; i+= rand() % 20) {
        numbers.push_back(i); 
    }
    // Iterator in reverse order
    for (p = numbers.rbegin() ; p != numbers.rend() ; p++ ) {
        cout << "Number: " << *p << endl;
    }
}

void sort_algorithm() {

    // Fill vector
    vector<int> numbers;
    while (numbers.size() < 20) {
        numbers.push_back(rand() % 100);
    }
    cout << "\nNot sorted: ";
    for (int number : numbers) {
        cout << number << " ";
    }
    // Sort by ascending order
    sort(numbers.begin(), numbers.end());
    cout << "\nSorted: ";
    for (int number : numbers) {
        cout << number << " ";
    }
}

void using_map() {

    map<int, string> phone_user;
    vector<string> names = {"Fabio", "Ines", "Pedro", "Malva", "Carolina", "Manel"};

    // Fill map, "dictionary in Python"
    for (int i = 0 ; i < 10 ; i++) {
        phone_user.insert(pair<int, string> (rand() % 100000000, names[rand() % 6]));
    }

    // Return values
    for (auto x : phone_user) {
        cout << x.first << " - " << x.second << endl;
    }
}

int main ()
{
    using_iterator();
    sort_algorithm();
    using_map();
    return 0;
}

class Client {

    public:
        Client();
        Client(string name, string adress);
        string getAdress();
        string getName();

    private:
        string name;
        string adress;

};

Client::Client(string name, string adress) {
    this -> name = name;
    this -> adress = adress;
}

string Client::getName() { return name; }
string Client:: getAdress() { return adress; }

class Product {

    public:
        Product();
        Product(double price, string description);
        string getDescription();
        double getPrice();

    private:
        string description;
        double price;
};

Product::Product(double price, string description) {
    this -> price = price;
    this -> description = description;
}

string Product::getDescription() { return description; }
double Product::getPrice() { return price; }

class Item {

    public:
        Item();
        Item(Product product, int quantity);
        int getQuantity();

    private:
        Product product;
        int quantity;
};

Item::Item(Product product, int quantity) {
    this -> product = product;
    this -> quantity = quantity;
} 

int Item::getQuantity() { return quantity; }

class Invoice {

    public:
        Invoice(vector<Item> items, Client client);
        void printInvoice();

    private:
        vector<Item> items;
        Client client;
};

Invoice::Invoice(vector<Item> items, Client client) {
    this -> items = items;
    this -> client = client;
}

void Invoice::printInvoice() {

    cout << client.getName() << endl;
    cout << client.getAdress() << endl << endl;
    cout << "Description --> Price --> QTY --> Total" << endl;
    cout << "---------------------------------------" << endl;
    for (Item item : items) {
        cout << item.getQuantity() << endl;
    }
}

void test() {

    vector<Item> items;
    Client client = Client("DEI  - FEUP", "Rua Roberto Frias");
    
    Product product1 = Product(999, "Computer");
    Product product2 = Product(89, "Printer");
    Product product3 = Product(2, "Bolachas");
    Item item1 = Item(product1, 10); items.push_back(item1);
    Item item2 = Item(product2, 3); items.push_back(item2);
    Item item3 = Item(product3, 90); items.push_back(item3);
    Invoice invoice = Invoice(items, client);
    invoice.printInvoice();
}

int main ()
{
    test();
    return 0;
}

class Product
{
    public:

        Product();
        Product(int quantity, string description);
        int getId();
        int getQuantity();
        string getDescription();

    private:

        static int identify;
        int id;
        int quantity;
        string description;
};

int Product::identify = 1;

Product::Product() {
    identify++;
    id = identify;
    quantity = 0;
    string description = "UNKNOWN";
}

Product::Product(int quantity, string description) {
    identify++;
    id = identify;
    this -> quantity = quantity;
    this -> description = description;
}

int Product::getId() { return id; }
int Product::getQuantity() { return quantity; }
string Product::getDescription() { return description; }

class Inventory
{
    public:

        Inventory();
        vector<Product> getInventory();
        void includeProduct(Product product);
        void showInventory();
        bool search(Product product);

    private:

        vector<Product> products;

};

Inventory::Inventory() {
    products = {};
}

vector<Product> Inventory::getInventory() {
    return products;
}

void Inventory::includeProduct(Product product) {
    products.push_back(product);
}

void Inventory::showInventory() {
    for (auto product : products) {
        cout << "Product: " << product.getDescription() << " and quantity: " << product.getQuantity() << endl;
    }
}

bool Inventory::search(Product p) {
    for (auto product : products) {
        if (p.getDescription() == product.getDescription() && p.getQuantity() <= product.getQuantity()) {
            return true;
        }
    }
    return false;
}

void test()
{   
    // Initial products
    Inventory i = Inventory();
    Product p1 = Product(10, "Iogurtes");
    Product p2 = Product(3, "Bananas");
    Product p3 = Product(1, "Computador");
    i.includeProduct(p1) ; i.includeProduct(p2) ; i.includeProduct(p3);
    i.showInventory();

    // Search:
    char answer = 'y';
    do  {
        
        string name;
        int quantity;
        cout << "Search for a product:\nProduct name: ";
        getline(cin, name);
        cout << "Quantity: ";
        cin >> quantity;
        Product new_product = Product(quantity, name);
        string solution = i.search(new_product) ? "Product available" : "Product not available";
        cout << solution << endl << "Continue? (Y/N): ";
        cin >> answer;

        cin.clear();
        cin.ignore(10000, '\n');

        } while (tolower(answer) != 'n');
}

int main()
{
    test();
    return 0;
}

template<class T>

void max_and_min(T v) {

    int max = -100000;
    int min = 100000;

    for (int i : v) {
        if (i > max) {
            max = i;
        }
        if (i < min) {
            min = i;
        }
    }
    cout << "Min: " << min << " and Max: " << max << endl;
}

int main()
{   
    vector<int> v = {-101, 2, 356, 0, 7, 567, -96};
    max_and_min(v);
    return 0;
}

template<typename T>

class Vector
{
    public:

        Vector();
        Vector(unsigned int size);
        Vector(unsigned int size, const T &initial);
        Vector(const Vector<T> &v);
        ~Vector();

        int size() const;
        void push_back(const T &value);
        void pop_back();
        void clear();

    private:

        T * buffer;
        int bufferSize;
        int size;
};

Vector::Vector() {
    size = 0;
    bufferSize = 0;
}

Vector::Vector(unsigned int size) {
    this -> size = size;

}

Vector::Vector(unsigned int size, const T &initial) {
    this -> size = size;
    this -> buffer = initial;
}

Vector::Vector(const Vector<T> &v) {
    this -> buffer = v;
}

int main ()
{
    return 0;
}

// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

bool inVector (vector<string> vector, string name) {

    for (auto attemp : vector) {
        if (attemp == name) {
            return true;
        }
    }
    return false;
}

void using_my_algorithm() {

    string current_file = "Files\\Names.txt", new_file = "Files\\Sorted.txt";
    vector<string> all_names = {}, new_names = {};
    ifstream file;
    file.open(current_file);
    
    if (file.good()) {
        
        string current_name;
        while(!file.eof()) {
    
            getline (file, current_name);
            all_names.push_back(current_name);
        }

        file.close();
        
        for (auto name : all_names) {
            if (!inVector(new_names, name)) {
                new_names.push_back(name);
            }
        }

        sort(new_names.begin(), new_names.end());

    }
    else {
        cout << "Wrong file!" << endl;
    }
    
    if (new_names.size()) {

        ofstream file; 
        file.open(new_file);

        for (auto word : new_names) {
            file << word << endl;
        }
        
        file.close();
    }

    else {
        cout << "Wrong file!" << endl;
    }

}

int main ()
{
    using_my_algorithm();
    return 0;
}

bool inList (list<string> lst, string name) {

    for (auto attemp : lst) {
        if (attemp == name) {
            return true;
        }
    }
    return false;
}

void using_my_algorithm() {

    string current_file = "Files\\Names.txt", new_file = "Files\\Sorted.txt";
    list<string> all_names = {}, new_names = {};
    ifstream file;
    file.open(current_file);
    
    if (file.good()) {
        
        string current_name;
        while(!file.eof()) {
    
            getline (file, current_name);
            all_names.push_back(current_name);
        }

        file.close();
        
        for (auto name : all_names) {
            if (!inList(new_names, name)) {
                new_names.push_back(name);
            }
        }

    }
    else {
        cout << "Wrong file!" << endl;
    }
    
    if (new_names.size()) {

        ofstream file; 
        file.open(new_file);

        for (auto word : new_names) {
            file << word << endl;
        }
        
        file.close();
    }

    else {
        cout << "Wrong file!" << endl;
    }

}

int main ()
{
    using_my_algorithm();
    return 0;
}

class Student {
    
    public:

        Student();
        Student(const string &code, const string &name);
        void setAtributes();
        void setGrades(double shortExam, double project, double exam);
        string getCode() const;
        string getName() const;
        int getFinalGrade() const;
        void setFinalGrade(int result);
        bool isApproved() const;

    private:

        string code;
        string name;
        int weightShortExam = 20, weightProject = 30, weightExam = 50;
        double shortExam, project, exam;
        int finalGrade;

} ;

Student::Student()
{
    code = "";
    name = "";
    shortExam = 0;
    project = 0;
    exam = 0;
    finalGrade = 0;
}

Student::Student(const string &code, const string &name) {

    this -> code = code;
    this -> name = name;
}

void Student::setGrades(double shortExam, double project, double exam) {

    this -> shortExam = shortExam;
    this -> project = project;
    this -> exam = exam;
}

string Student::getCode() const {
    return code;
}

string Student::getName() const {
    return name;
}

void Student::setFinalGrade(int number) {
    finalGrade = number;
}

int Student::getFinalGrade() const{

    int result = floor( ( weightExam * exam + project * weightProject + shortExam * weightShortExam ) / 100);
    return result;
}

bool Student::isApproved() const {
    
    bool answer = finalGrade < 10 ? false : true;
    return answer;
}

void readStudentsData (vector<Student> &all_students) {

    string scode, sname;
    int segrade, pgrade, egrade;

    cout << "Student code? ";
    getline(cin, scode);
    cout << "Student name? ";
    getline(cin, sname);
    Student student = Student(scode, sname);
    cout << "Short exam grade? ";
    cin >> segrade;
    cout << "Project grade? ";
    cin >> pgrade;
    cout << "Exam grade? ";
    cin >> egrade;
    student.setGrades(segrade, pgrade, egrade);
    int number = student.getFinalGrade();
    student.setFinalGrade(number);

    string answer = student.isApproved() ? "You are approved" : "You are not approved";
    cout << answer << endl;
    all_students.push_back(student);
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void show_data(vector<Student> all_students) {

    cout << "\nAll data: " << endl;
    cout << "Show data using STL sort() ascending grade algorithm: " << endl;
    sort(all_students.begin(), all_students.end(), [](Student const & a, Student const & b) -> bool { return a.getFinalGrade() < b.getFinalGrade(); } );
    for (Student student : all_students) {
        cout << student.getName() << " --> Final grade: " << student.getFinalGrade() ;
        string answer = student.isApproved() ? " --> Passed" : " --> Not passed";
        cout << answer << endl;
    }
    cout << endl << "\nAll data: " << endl;
    cout << "Show data using STL sort() ascending name algorithm: " << endl;
    sort(all_students.begin(), all_students.end(), [](Student const & a, Student const & b) -> bool { return a.getName() < b.getName(); } );
    for (Student student : all_students) {
        cout << student.getName() << " --> Final grade: " << student.getFinalGrade() ;
        string answer = student.isApproved() ? " --> Passed" : " --> Not passed";
        cout << answer << endl;
    }
}

void showAboveAverageStudents(vector<Student> all) {
    
    int total = 0;
    for (Student student : all) {
        total = total + student.getFinalGrade();
    }
    int average = floor(total / all.size());
    cout << "Grades Average: " << average << endl;
}

void manual() {

    vector<Student> all_students;
    char answer;
    do  {   

        readStudentsData(all_students);
        cout << "Continue ? Y/N: ";
        cin >> answer;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        } while (tolower(answer) != 'n');
    
    show_data(all_students);
}

void using_files() {

    ifstream file;
    string current_line;
    vector<Student> all_students;

    file.open("Files\\Students.txt");
    while (!file.eof()) {
        
        vector<string> things;
        getline(file, current_line);
        int i = 0;
        string current_thing;
        while (i != current_line.size()) {

            if (current_line[i] != ';') {
                current_thing += current_line[i];
            }
            else {
                things.push_back(current_thing);
                current_thing = "";
            }
            i++;
        }

        things.push_back(current_thing);
        
        string code = things[0];
        string name = things[1];
        Student student = Student(code, name);
        int seg = stod(things[2]);
        int pg = stod(things[3]);
        int eg = stod(things[4]);
        student.setGrades(seg, pg, eg);

        all_students.push_back(student);

    }

    show_data(all_students);

    file.close();
}

int main()
{
    manual(); 
    using_files();
    return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include <ctime>
#include <set>
using namespace std;

vector<int> main_numbers, lucky_stars;

void initialize() {
    
    for (int number = 1 ; number < 51 ; number ++) {
        main_numbers.push_back(number);
    }
    for (int number = 1 ; number < 13 ; number ++) {
        lucky_stars.push_back(number);
    }
}

class Bet
{
    public:

        Bet();
        void fill_numbers();
        void show_numbers();
    
    private:

        vector<int> main;
        vector<int> stars;
};

Bet::Bet() {
    main = {};
    stars = {};
    fill_numbers();
}

void Bet::fill_numbers() {
    
    random_shuffle(main_numbers.begin(), main_numbers.end());
    random_shuffle(lucky_stars.begin(), lucky_stars.end());

    // Fill using lucky_stars vector (a)
    for (int j = 0 ; j < 2 ; j++ ) {
        stars.push_back(lucky_stars[j]);
    }
    for (int i = 0 ; i < 5 ; i++ ) {
        main.push_back(main_numbers[i]);
    }

    //Fill using STL set (b)
    set<int> numbers;
    while (numbers.size() < 5) {
        int next_attemp = rand() % 51;
        numbers.insert(next_attemp);
    }
}   

void Bet::show_numbers() {
    
    cout << "Main numbers: ";
    for (int number : main) {
        cout << number << " ";
    }
    cout << endl << "Lucky numbers: ";
    for (int number : stars) {
        cout << number << " ";
    }
}

int main ()
{   
    srand(time(NULL));
    initialize();

    Bet b1;
    b1.show_numbers();

    return 0;
}

vector<int> main_numbers, lucky_stars;

void initialize() {
    
    for (int number = 1 ; number < 51 ; number ++) {
        main_numbers.push_back(number);
    }
    for (int number = 1 ; number < 13 ; number ++) {
        lucky_stars.push_back(number);
    }
}

class Bet
{
    public:

        Bet();
        void fill_numbers();
        vector<int> getMain();
        vector<int> getStars();
    
    private:

        vector<int> main;
        vector<int> stars;
};

Bet::Bet() {
    main = {};
    stars = {};
    fill_numbers();
}

void Bet::fill_numbers() {
    
    random_shuffle(main_numbers.begin(), main_numbers.end());
    random_shuffle(lucky_stars.begin(), lucky_stars.end());

    for (int i = 0 ; i < 5 ; i++ ) {
        main.push_back(main_numbers[i]);
    }
    for (int j = 0 ; j < 2 ; j++ ) {
        stars.push_back(lucky_stars[j]);
    }
}   

vector<int> Bet::getMain() {
    return main;
}

vector<int> Bet::getStars() {
    return stars;
}

bool isInside(int attemp, vector<int> key) {
    
    for (int number : key) {
        if (attemp == number) {
            return true;
        }
    }
    return false;
}

void compair(Bet bet, Bet key) {
    
    cout << "Main: ";
    for (int number : bet.getMain()) {
        if (isInside(number, key.getMain())) {
            cout << number << " ";
        }
    }
    cout << "\nStars: ";
    for (int number : bet.getStars()) {
        if (isInside(number, key.getStars())) {
            cout << number << " ";
        }
    }
    cout << endl;

}

int main ()
{   
    srand(time(NULL));
    initialize();

    vector<Bet> all_bets;
    int N;
    cout << "N: ";
    cin >> N;

    while (N) {
        Bet b;
        all_bets.push_back(b);
        N--;
    }

    Bet key;
    int index = 1;
    for (auto attemp : all_bets) {
        cout << endl << "Intersection " << index << endl;
        compair(attemp, key); 
        index++;
    }
    
    return 0;
}

class Vector {
    public:

        Vector();
        Vector(unsigned int size);

        int size();
        void push_back(int value);
        void pop_back();
        void clear();

    private:

        int bufferSize;
};

Vector::Vector() {
    bufferSize = 0;
}

Vector::Vector(unsigned int size) {
    this -> bufferSize = size;

}

void Vector::clear() {
    bufferSize = 0;
}

int Vector::size() {
    return bufferSize;
}

int main ()
{
    Vector v = Vector(10);
    v.clear();
    return 0;
}

void store (vector<vector<string>> &data) {

    string file_name = "Files\\Book.txt";
    ifstream file;
    file.open(file_name);
    if (file.good()) {
        
        while (!file.eof()) {
            string current_line, current_word = "";
            vector<string> current_content = {};
            getline(file, current_line);
            for (int i = 0 ; i < current_line.size() ; i++ ) {
                char current_char = current_line[i];
                if (current_char == ' ') {
                    current_content.push_back(current_word);
                    current_word = "";
                }
                else {
                    current_word += current_char;
                }
            }
            current_content.push_back(current_word);
            data.push_back(current_content);
        }
    }   
    else {
        cout << "Error!" << endl;
    }
}

void print_data (vector<vector<string>> data) {

    cout << endl << "Book.txt: \n" << endl;
    for (auto v : data) {
        for (string word : v) {
            cout << word << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void ask (vector<vector<string>> data) {

    string word;
    cout << "WORD? ";
    cin >> word;
    cout << "Results: " << endl;
    for (int i = 0 ; i < data.size() ; i++ ) {
        for (int j = 0 ; j < data[i].size() ; j++ ) {
            if (word == data[i][j]) {
                cout << i+1 << ": ";
                for (auto word : data[i]) {
                    cout << word << " " ;
                }
                cout << endl;
            }
        }
    }
    cout << endl;
}

int main ()
{   
    vector<vector<string>> all_data;
    store(all_data);
    print_data(all_data);
    while (!cin.eof()) {

        string answer;
        ask(all_data);
        cout << "\nCTRL+Z to stop or other letter to continue: ";
        cin >> answer;
        cout << endl;
    }
    return 0;
}

class Date
{   
    friend bool operator < (Date date1, Date date2);
    friend bool operator > (Date date1, Date date2);
    friend bool operator != (Date date1, Date date2);
    friend bool operator <= (Date date1, Date date2);
    friend bool operator >= (Date date1, Date date2);
    friend bool operator == (Date date1, Date date2);
    friend void operator << (Date &date1, Date &date2);
    friend void operator >> (Date &date1, Date &date2);
    friend void operator ++ (Date &date);
    friend void operator -- (Date &date);

    public:
        Date();
        Date(unsigned int year, unsigned int month,unsigned int day);
        Date(string yearMonthDay);
        void setYear(unsigned int year) ;
        void setMonth(unsigned int month) ;
        void setDay(unsigned int day) ;
        void setDate(unsigned int year, unsigned int month, unsigned int day) ;
        unsigned int getYear() const;
        unsigned int getMonth() const;
        unsigned int getDay() const;
        string getDate() const;
        void show() const;

        bool isValid();
        bool isEqualTo(const Date &date);
        bool isNotEqualTo(const Date &date);
        bool isAfter(const Date &date);
        bool isBefore(const Date &date);

    private:

        unsigned int year;
        unsigned int month;
        unsigned int day;

        unsigned int how_many_days(unsigned year, unsigned month);
        bool isLeapYear (unsigned int year);
}; 

Date::Date()
{
    year = 0;
    month = 0;
    day = 0;
}

bool Date::isEqualTo(const Date &date) {
    return (day == date.getDay() && month == date.getMonth() && year == date.getYear());
}

bool Date::isNotEqualTo(const Date &date) {
    return !isEqualTo(date);
}

bool Date::isAfter(const Date &date) {

    bool flag = true;

    if (year > date.getYear()) {
        flag = false;
    }
    else {
        if (month > date.getMonth()) {
            flag = false;
        }
        else {
            if (day > date.getDay()) {
                flag = false;
            }
            else {
                if (isEqualTo(date)) {
                    flag = false;
                }
            }
        }
    }
    return !flag;
}   

bool Date::isBefore(const Date &date) {
    return ! (isAfter(date) || isEqualTo(date));
}

bool Date::isValid() {

    bool answer;
    answer = ( day > 0 && day <= how_many_days(year, month) && month < 13 && month > 0 && year >= 0 && year < 2022 );
    return answer;
}

Date::Date(unsigned int y, unsigned int m, unsigned int d) {
    year = y;
    month = m;
    day = d;
}

Date::Date(string yearMonthDay) {
    int y, m, d;
    char x;
    istringstream str(yearMonthDay);
    str >> y >> x >> m >> x >> d;
    day = d;
    month = m;
    year = y;
}

unsigned int Date::how_many_days(unsigned year, unsigned month) {

    unsigned int days = 0;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days = 31;
        break;
    
        case 4: case 6: case 9: case 11:
        days = 30;
        break;

        case 2:
            if (Date::isLeapYear(year)) {
                days = 29;
            }
            else {
                days = 28;
            }
            break;
    }
    return days;
}

bool Date::isLeapYear (unsigned int year) {

    bool flag = true;
    flag = flag && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ;
    return flag;
}

void Date::setYear(unsigned int y) {
    year = y;
}

void Date::setMonth(unsigned int m) {
    month = m;
}

void Date::setDay(unsigned int d) {
    day = d;
}

void Date::setDate(unsigned int y, unsigned int m, unsigned int d) {
    year = y;
    month = m;
    day = d;
}

unsigned int Date::getYear() const {
    return year;
}

unsigned int Date::getMonth() const {
    return month;
}

unsigned int Date::getDay() const {
    return day;
}

string Date::getDate() const {
    string all;
    string d = to_string(day); while (d.size() < 2) { d = "0" + d ; } ;
    string m = to_string(month); while (m.size() < 2) { m = "0" + m ; } ;
    string y = to_string(year); while (y.size() < 4) {y = "0" + y ; } ;
    all = y + "/" + m + "/" + d;
    return all;
}

void Date::show() const {
    string result = getDate();
    cout << result << endl;
}

bool operator < (Date date1, Date date2) {

    if (date1.getYear() != date2.getYear())  {
        return date1.getYear() < date2.getYear();
    }
    else {
        if (date1.getMonth() != date2.getMonth()) {
            return date1.getMonth() < date2.getMonth();
        }
        else {
            if (date1.getDay() != date2.getDay()) {
                return date1.getDay() < date2.getDay();
            }
            else {
                return false;
            }
        }
    }
}

bool operator > (Date date1, Date date2) {
    
    if (date1.getYear() != date2.getYear())  {
        return date1.getYear() > date2.getYear();
    }
    else {
        if (date1.getMonth() != date2.getMonth()) {
            return date1.getMonth() > date2.getMonth();
        }
        else {
            if (date1.getDay() != date2.getDay()) {
                return date1.getDay() > date2.getDay();
            }
            else {
                return false;
            }
        }
    }
}

bool operator != (Date date1, Date date2) {
    return date1.getDate() != date2.getDate();
}

bool operator <= (Date date1, Date date2) {
    return date1 < date2 || date1 == date2;
}

bool operator >= (Date date1, Date date2) {
    return date1 > date2 || date1 == date2;
}

bool operator == (Date date1, Date date2) {
    return date1.getDate() == date2.getDate();
}

void operator << (Date &date1, Date &date2) {
    date1.setDate(date2.getYear(), date2.getMonth(), date2.getDay());
}

void operator >> (Date &date1, Date &date2) {
    date2.setDate(date1.getYear(), date1.getMonth(), date1.getDay());
}

void operator ++ (Date &date1) {
    date1.setDay(date1.getDay()+1);
}

void operator -- (Date &date1) {
    date1.setDay(date1.getDay()-1);
}

int main ()
{
    Date d1 = Date(2021, 5, 23);
    Date d2 = Date(2002, 7, 10);
    cout << "Initial conditions:\n" << d1.getDate() << endl << d2.getDate() << endl;
    d1 >> d2;
    cout << "Depois:\n" << d1.getDate() << endl << d2.getDate() << endl;
    ++d1;
    cout << "Um dia depois de d1: " << d1.getDate() << endl;
    --d2;
    cout << "Um dia antes de d2: " << d2.getDate() << endl;
    return 0;
}

namespace myfuncs {
    void cout(const std::string &s);
    bool endl(const std::string &s);
}

void myfuncs::cout(const std::string &s) {
    int i = 0;
    while (s[i]) {
        if (isalpha(s[i])) {
            std::cout << s[i];
        }
        i++;
    }
    std::cout << std::endl;
}

bool myfuncs::endl(const std::string &s) {
    return islower(s[s.size()-1]);
}

int main ()
{
    std::string test = "Th78392is0is5627a7t892es0t3to5Main0Fun82737c2837tio327n";
    myfuncs::cout(test);
    std::string answer = myfuncs::endl(test) ? "Lower case" : "Upper case";
    std::cout << answer << std::endl;
    return 0;
}

class FEUP_person {

    public:

        FEUP_person();
        FEUP_person(string name, int upCode);
        int getUpCode();
        string getName();

    private:

        string name;
        int upCode;
};

FEUP_person::FEUP_person() {
    name = "";
    upCode = 0;
}

FEUP_person::FEUP_person(string name, int upCode) {
    this -> name = name;
    this -> upCode = upCode;
}

string FEUP_person::getName() { return name; }
int FEUP_person::getUpCode() { return upCode; }


#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

int main ()
{
    Point p;
    p.x = 4;
    p.y = 10;
    Point *q = &p;
    cout << (*q).x;
    return 0;
}

int main ()
{
    // Some types of numbers in C++ notation:
    int number1 = 11;
    float number2 = 10.3;
    int number3 = 0x58;
    int number4 = 054;
    int number5 = 75U;
    int number6 = 89L;
    int number7 = 8214234LL;
    double number8 = 2e-1;
    int number9 = 5.3E3;
    cout << "This is an integer number: " << number1 << endl;
    cout << "This is a double/float number: " << number2 << endl;
    cout << "This is a hexadecimal number: " << number3 << endl;
    cout << "This is an octal number: " << number4 << endl;
    cout << "This is an unsigned number: " << number5 << endl;
    cout << "This is a long number: " << number6 << endl;
    cout << "This is a long long int number: " << number7 << endl;
    cout << "This is a real number: " << number8 << endl;
    cout << "This is another real number: " << number9 << endl;

    // Some transformations:
    char letter = 'F';
    char number = 100;
    cout << "Letter " << letter << " to decimal number: " << (int) letter << endl;
    cout << "Number " << number << " to letter: " << (char) number << endl;

    // Using single, double and backslash sequences:
    cout << "This is a \'test\' for exam" << endl;
    cout << "This is a \\'test\\' for exam\n";

    return 0;
}

int main ()
{
    // Be careful when both operands are integers! (// in Python)
    int x = 10;
    int y = 3;
    cout << "X / Y = " << (double) x/y << endl;
    return 0;
}

int main ()
{   
    int number1, number2;
    cout << "Two numbers: ";
    cin >> number1 >> number2;
    cout << fixed << setprecision(10) << (double) number1 / number2 << endl;
    cout << setprecision(5) << (double) number1 / number2 << endl;

    string name1, name2;
    cout << "Two names: ";
    cin >> name1 >> name2;
    cout << fixed << setfill('F') << setprecision(10) << name1 << name2 << endl;
    return 0;
}

void by_value(int number) { number = 23987; }
void by_reference (int &number) { number = 23987; }

int main()
{   
    for (int i = 0 ; i < 101 ; i++ ) {
        if (i == 13) {
            continue; // Jump to another number, without print '13'
        }
        cout << i << endl;
    }
    for (int i = 0 ; i < 101 ; i++ ) {
        if (i == 13) {
            break; // Stop a loop, without print i < 12
        }
        cout << i << endl;
    }   

    // Call by value and vall by reference
    int X = 10;
    cout << "\nDefault: " << X << " ";
    by_value(X);
    cout << "\nCall by value: " << X << " ";
    by_reference(X);
    cout << "\nCall by reference: " << X << " ";

    
    return 0;
}

void to_do() {

    // Tested with "#ABcdE12345$Esc" string
    char current_char;
    cout << "Chars: ";
    while (cin >> current_char) {

        if (cin.peek() != '\n') {
            if (isdigit(current_char)) {
                cout << current_char;
            }
            cin.clear();
        }
        else {
            cin.clear();
            break;
        }
    }
    cout << endl;
}

int main()
{   
    vector<int> numbers;
    cout << "Input 10 numbers: " << endl;
    int counter = 0;
    int current_number;

    while (numbers.size() != 10) {
        cout << "Number " << counter+1 << ": ";
        cin >> current_number;

        if (!cin.eof()) { // CTRL+Z for example

            if (cin && cin.peek() == '\n') {
                numbers.push_back(current_number);
                cin.ignore(10000, '\n');
                counter+=1;
            }
            else {
                cout << "Input error, please try again!" << endl;
                cin.clear();
                cin.ignore(10000, '\n');
            }
        }
        else {
            break;
        }
    }

    for (auto number : numbers) {
        cout << number << " ";
    }
    cout << endl;

    to_do(); // Example in page 22

    return 0;
}

int main()
{   
    string example = "eXAmpLE";
    cout << "Default: " << example << endl;
    cout << "Example in lowercase: ";
    for (auto c : example) {
        cout << (char) tolower(c);
    }
    cout << "\nExample in uppercase: ";
    for (auto c : example) {
        cout << (char) toupper(c);
    }
    return 0;
}

void convertion () {

    // Convert strings to numbers (integer, long int and double)
    cout << atoi("999654") * 10 << endl;
    cout << atol("56") << endl;
    cout << atof("9.655") * 10 << endl;
}

int main()
{   
    string example = "eXAmpLE";
    cout << "Default: " << example << endl;
    cout << "Example in lowercase: ";
    for (auto c : example) {
        cout << (char) tolower(c);
    }
    cout << "\nExample in uppercase: ";
    for (auto c : example) {
        cout << (char) toupper(c);
    }

    cout << "String in C: " << endl;
    char s[] = "fabiosa";
    cout << "String size is: " << sizeof(s) / sizeof(s[0]) << endl; // String.size() + 1 --> '\0'

    convertion();

    string fabio = "Araujo de Sa";
    cout << fabio.substr(10, 2) << endl; // Initial index and its length
    
    return 0;
}

int sum (int number1, int number2) { return number1 + number2 ; }

int main()
{
    // Y is memory-copy of X. If X is changed, Y is changed too.
    int x;
    int &y = x;
    x = 10;
    cout << "x = " << x << "; y = " << y << endl;
    y = 205654;
    cout << "x = " << x << "; y = " << y << endl;
    x = 10;
    cout << "x = " << x << "; y = " << y << endl;

    // Pointer operators
    // & --> Returns the memory adress of its operand
    int example = 10;
    int *p1 = &example;
    cout << "& example: " << p1 << endl;
    
    // * --> Returns the value of number in adress *p1
    int another = *p1;
    cout << another << endl;

    // Pointers and arrays:
    int arr[] = {10, 52, -9, 56, 23, 7, 23};
    int *pointer = arr;
    for (int i = 0 ; i < sizeof(arr) / sizeof(arr[0]) ; i++ ) {
        cout << *(pointer+i) << " ";
    }
    cout << endl;

    // Pointers and functions:
    int (*p_function) (int, int) = sum;
    int result = (*p_function) (2, 3);
    cout << "Sum with pointer function: " << result << endl;

    return 0;
}

int main ()
{   
    srand(time(NULL));
    int counter = 0;
    int min = 100, max = 102;

    while (counter != 10) {
        cout << min + rand() % (max - min + 1) << endl;
        counter++; 
    }
    cout << "Random: " << rand() << endl;
    cout << "Number of seconds after 1 January 1970: " << time(NULL) << endl;

    return 0;
}

int getTicketNumber() {

    static int ticketNum = 0; // initialized only once, at program startup
    ticketNum++;
    return ticketNum;
}

int main()
{
    int i;
    for (i=1; i <= 10; i++)
    cout << "ticket number = " << getTicketNumber() << endl;
    return 0;
}

void using_const (const int a[]) {
    int size = 13;
    for (int i = 0 ; i < size ; i++ ) {
        cout << a[i] << " " ;
    }
    cout << endl;
}

void without_const (int a[]) {
    int size = 13;
    for (int i = 0 ; i < size ; i++ ) {
        cout << a[i] << " " ;
    }
    cout << endl;
}

int main ()
{
    const int number_of_numbers = 10; // Is good practice
    int numbers[number_of_numbers];

    int another[] = {4234, 341, 546, 123, 365}; // Size not needed
    int zeros[100] = {0}; // All numbers equal to zero
    int some_zeros[5] = {1, 2, 3}; // 4 and 5 elements equal to zero
    int score[3][2] = {{1, 2}, {3, 4}, {5, 6}}; // 2D array
    int many[][2] = {{1, 2}, {3, 4}, {5, 6}}; // 2D array --> Not a error!

    numbers[1] = 0;
    numbers[8] = 65165;
    for (auto number : numbers) {
        cout << number << endl;
    }

    cout << "Length of array: " << sizeof(numbers) / sizeof(numbers[0]) << endl;
    cout << "Out of range but not a error message: " << numbers[23] << endl;
    cout << numbers << endl; // Show a memory adress of 1st element of numbers array
    cout << &numbers[0] << endl; // Show a memory adress of 1st element of numbers array

    int example[] = {45, 5, 654, 654, 6, 54, 21, 3, 0, 879, -84, 95, 5};

    without_const(example);
    using_const(example);
    
    return 0;
}

void fill(vector<int> &v) {
    for (int i = 0 ; i < v.size() ; i++ ) {
        v[i] = rand() % 100;
    }
} 

int main ()
{   
    // Initialization
    vector<int> example(10); // Initialize with 10 zeros
    for (auto number: example) {
        cout << number << " ";
    }
    cout << endl;

    // Cout numbers
    srand(time(NULL));
    vector<int> numbers(10);
    fill(numbers);
    for (size_t i = 0 ; i < numbers.size() ; i++ ) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // 2D vector initialization
    vector<vector<int>> more_numbers(4, vector<int>(3)); // 4 lines and 3 columns
    more_numbers.at(3).at(2) = 3289736;
    more_numbers[1][2] = 6541;
    for (auto v: more_numbers) {
        for (auto n : v) {
            cout << n << " " ;
        }
        cout << endl;
    }
    
    return 0;
}

void using_C () {

    // 1D array
    int n = 25, *p;
    p = (int *) malloc(n * sizeof(int));
    for (int i = 0 ; i < n ; i++ ) {
        *(p+i) = i;
    }
    for (int i = 0 ; i < n ; i++ ) {
        cout << *(p+i) << " ";
    }
    cout << endl;
    free(p);

    // 2D array
    int ncol = 3, nline = 5, **matrix;
    matrix = (int **) malloc (nline * sizeof(int *));
    for (int i = 0 ; i < nline ; i++ ) {
        matrix[i] = (int *) malloc (ncol * sizeof(int));
    }

    for (int i = 0 ; i < nline ; i++) {
        for (int j = 0 ; j < ncol ; j++) {
            matrix[i][j] = i+j;
        }
    }
    
    for (int i = 0 ; i < nline ; i++) {
        for (int j = 0 ; j < ncol ; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    free(matrix);
}

void using_CPP () {

    // 1D array
    int n = 25;
    int *p = new int[n];
    
    for (int i = 0 ; i < n ; i++ ) {
        *(p+i) = i;
    }

    for (int i = 0 ; i < n ; i++ ) {
        cout << *(p+i) << " ";
    }
    cout << endl;
    delete [] p;

    // 2D array
    int nc = 10, nl = 20, **matrix;
    matrix = new int*[nl];
    for (int i = 0 ; i < nl ; i++ ) {
        matrix[i] = new int[nc];
    }

    for (int i = 0 ; i < nl ; i++ ) {
        for (int j = 0 ; j < nc ; j++ ) {
            matrix[i][j] = i+j;
        }
    }

    for (int i = 0 ; i < nl ; i++ ) {
        for (int j = 0 ; j < nc ; j++ ) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0 ; i < nl ; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main ()
{
    // Using C and C++ methods
    using_C();
    using_CPP();
    return 0;
}

struct FEUP {

    string location;
    int students;
    double price;
};

int main ()
{   
    // Normal
    FEUP faculty;
    faculty.location = "Rua Torcato Gomes";
    faculty.students = 4300;
    faculty.price = 697.00;
    cout << faculty.location << " " << faculty.price << " " << faculty.students << endl;

    // Using pointers
    FEUP * f;
    f = (FEUP *) malloc(sizeof(FEUP));
    f->location = "Rua da Silva";
    f->students = 3287;
    f->price = 700;
    cout << f->price << " " << f->price << " " << f->price << endl; // Note: *p.location make an error!
    free(f);
    return 0;
}

void convertion () {

    // Convert strings to numbers (integer, long int and double)
    cout << atoi("999654") * 10 << endl;
    cout << atol("56") << endl;
    cout << atof("9.655") * 10 << endl;
}

void using_stringstreams() {

    string example = "14 June , 2021";
    char comma, barr = '/';
    int day, year;
    string month;
    istringstream i(example);
    i >> day >> month >> comma >> year;
    cout << year << barr << month << barr << day << endl;
}

int main()
{   
    string example = "eXAmpLE";
    cout << "Default: " << example << endl;
    cout << "Example in lowercase: ";
    for (auto c : example) {
        cout << (char) tolower(c);
    }
    cout << "\nExample in uppercase: ";
    for (auto c : example) {
        cout << (char) toupper(c);
    }

    cout << "String in C: " << endl;
    char s[] = "fabiosa";
    cout << "String size is: " << sizeof(s) / sizeof(s[0]) << endl; // String.size() + 1 --> '\0'

    convertion();

    string fabio = "Araujo de Sa";
    cout << fabio.substr(10, 2) << endl; // Initial index and its length

    using_stringstreams();
    
    return 0;
}

typedef unsigned long long int IdNum;

struct FEUP {

    int students;
    double price;
};

int main ()
{   
    // Normal
    FEUP faculty;
    faculty.students = 4300;
    faculty.price = 697.00;
    cout << faculty.price << " " << faculty.students << endl;

    // Using pointers
    FEUP * f;
    f = (FEUP *) malloc (sizeof(FEUP));
    f->students = 3287;
    f->price = 700.02;
    cout << (*f).price << " " << f->students << endl; // Note: *p.location make an error!
    free(f);

    // using typedef
    IdNum number = 516516516;
    cout << "Typedef number: " << number << endl;

    // Using struct + typedef
    typedef struct {
        char gender;
        int number;
    } Person;

    Person Fabio = {'M', 18};
    cout << Fabio.gender << " " << Fabio.number << endl;

    enum numType {Int, Double, Float};

    union Numbers {
        int i;
        double d;
        numType type;
    };

    Numbers n;
    n.i = 10;
    n.d = 3826.3;   // Ao colocar o Double, acabo por estragar o inteiro anterior (partilham a mesma zona de memória)
    n.type = Double;
    cout << "Union: int = " << n.i << " and double = " << n.d << endl;
    cout << "Type: " << n.type << endl;

    typedef union {
        struct { double x, y, z; };
        double coords[3];
    } Point3D;
    
    // Como ocupam a mesma zona de memória, aceder por array ou por doubles funciona na mesma!
    Point3D p;
    p.x = 2.5; p.y = -3.7; p.z = 1.3;
    for (int i = 0 ; i < 3 ; i++ ) {
        cout << "Point " << p.coords[i] << endl;
    }

    return 0;
}

void writeBinary() {

    ofstream file;
    string file_name = "Numbers.dat";
    file.open(file_name);
    for (int i = 65 ; i < 65 + 25 ; i++ ) {
        file << (char) i << endl;
    }
    cout << "Exit success!" << endl;
}

void showNotes () {

    string file_name = "Notes.txt"; // Note: does not necessarily have the extension .txt
    ifstream file;
    file.open(file_name);
    if (file.good()) {
        string current_line;
        while (!file.eof()) {
            getline(file, current_line);
            cout << current_line << endl;
        }
    }
    else {
        cerr << "This file not exists!" << endl;
        exit(1);
    }
    file.close();
}

int main()
{   
    showNotes();
    writeBinary();
    return 0;
}

class Person {
    
    public:
        Person();
        Person(int age, char gender, string faculty, string name);
        void setAge(int age);
        void setGender(char gender);
        void setFaculty(string faculty);
        void setName(string name);
        int getAge();
        char getGender();
        string getFaculty();
        string getName();

    private:
        int age;
        char gender;
        string faculty;
        string name;
};

Person::Person() {
    age = 0;
    gender = ' ';
    faculty = "";
    name = "";
}

Person::Person(int age, char gender, string faculty, string name) {
    this -> age = age;
    this -> gender = gender;
    this -> faculty = faculty;
    this -> name = name;
}

void Person::setAge(int age) { this -> age = age ; }
void Person::setGender(char gender) { this -> gender = gender ; }
void Person::setFaculty(string faculty) { this -> faculty = faculty ; }
void Person::setName(string name) { this -> name = name ; }

int Person::getAge() { return age; }
char Person::getGender() { return gender; }
string Person::getFaculty() { return faculty; }
string Person::getName() { return name; }

int main ()
{   
    Person P = Person(18, 'M', "FEUP", "Fabio");
    cout << P.getName();
    return 0;
}

template<typename T>
T sum (T a, T b) { return a + b ; }

template<typename S>
void printArray (const S a[], size_t n) {
    for (size_t i = 0 ; i < n ; i++ ) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main ()
{
    int number1 = 10;
    int number2 = 5;
    cout << sum (number1, number2) << endl;
    double number3 = 7.5;
    double number4 = 9.32;
    cout << sum (number3, number4) << endl;
    int arr[] = {56, 5415, 546, 541, 321, 3215, 6541, 5, 0, 65416};
    printArray(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}

void using_iterators() {
    
    vector<string> names = {"Marco", "Ilias", "Aurelio", "Tobias", "Crespo", "Vint"};

    // Construção de um apontador próprio para vectores de strings
    vector<string>::iterator n;                       

    // names.begin() aponta para o primeiro valor do container
    // names.end() aponta para a zona de memória seguinte ao último dado contido no container
    // n recebe, a cada iteração, um incremento de X bytes, correspondentes ao tipo de dados manipulados                          
    for (n = names.begin() ; n != names.end() ; n++ ) {
        cout << *n << endl;                                     // Retorna o que encontra na memória                            
    }

    // Continue in page 253 tomorrow!
}

int main ()
{   
    using_iterators();
    return 0;
}

typedef unsigned int ID;

class Person {
    
    public:
        Person();
        ~Person();
        Person(int age, char gender, string faculty, string name);
        void setAge(int age);
        void setGender(char gender);
        void setFaculty(string faculty);
        void setName(string name);
        int getAge();
        char getGender();
        string getFaculty();
        string getName();
        ID getID();

    private:
        int age;
        char gender;
        string faculty;
        string name;
        static ID numID;
        ID id;
};

ID Person::numID = 0;

Person::Person() {
    age = 0;
    gender = ' ';
    faculty = "";
    name = "UNKNOWN";
    numID++;
    id = numID;
}

Person::Person(int age, char gender, string faculty, string name) {
    this -> age = age;
    this -> gender = gender;
    this -> faculty = faculty;
    this -> name = name;
    numID++;
    id = numID;
}

Person::~Person() { cout << "Desctructor called for " << name << " object!" << endl; }

void Person::setAge(int age) { this -> age = age ; }
void Person::setGender(char gender) { this -> gender = gender ; }
void Person::setFaculty(string faculty) { this -> faculty = faculty ; }
void Person::setName(string name) { this -> name = name ; }

int Person::getAge() { return age ; }
char Person::getGender() { return gender ; }
string Person::getFaculty() { return faculty ; }
string Person::getName() { return name ; }
ID Person::getID() { return id ; }

int main ()
{   
    Person P = Person(18, 'M', "FEUP", "Fabio");
    cout << P.getName() << endl;
    Person F;
    F.setFaculty("ISEP");
    cout << F.getFaculty() << " " << F.getID() << endl;
    return 0;
}

int main ()
{   
    int numerator = 10;
    int denominator = 0;

    try { 

        if (!denominator) {
            throw 99;
        }
        else {
            int result = numerator / denominator ; 
            cout << "The result is : " << endl ; 
        }
    }
    catch (int x) { 
        cout << "Divide by zero error! Error number " << x << "!" << endl; 
    }
    
    return 0;
}

class FEUPerson { // Parent Class
    
    public:

        FEUPerson() { this-> name = "UNKNOWN" ; this -> UP = 0 ; }
        FEUPerson(string name, int UP) { this -> name = name ; this -> UP = UP ; }
        void setName(string name) { this -> name = name ; }
        void setUP(int UP) { this -> UP = UP ; }
        string getName() { return name ; }
        int getUP() { return UP ; }
        virtual void showData() { cout << name << " " << UP << " " << endl ; }

    protected:

        string name;
        int UP;
};

class Student : public FEUPerson { // Child Class

    public:

        Student() : FEUPerson() { this -> average = 0 ; }
        Student(string name, int UP, double average) : FEUPerson (name, UP) { this -> average = average ; }
        double getAverage () { return average ; }
        void setAverage(double average) { this -> average = average ; }
        void showData() { cout << name << " " << UP << " " << average << endl ; }

    private:

        double average;
};

class Teacher : public FEUPerson { // Child Class

    public:

        Teacher() : FEUPerson() { this -> course = "UNKNOWN" ; }
        Teacher(string name, int UP, string course) : FEUPerson (name, UP) { this -> course = course ; }
        string getCourse() { return course ; }
        void setCourse(string course) { this -> course = course ; }
        void showData() { cout << name << " " << UP << " " << course << endl ; }

    private:

        string course;
};

int main ()
{   
    Student *Me = new Student("Fabio", 202007658, 15.45);
    cout << (*Me).getAverage() << endl;
    Teacher *Prof = new Teacher("Jorge Silva", 1913, "Programming");
    cout << (*Prof).getCourse() << endl;

    vector<FEUPerson * > persons(2);
    persons[0] = Me;
    persons[1] = Prof;

    for (auto person : persons) { person -> showData() ; }
    cout << endl;

    // How to determinate which object is in FEUPersons pointer vector? Page 356
    for (auto person: persons) {

        cout << person->getName();
        Teacher *T = dynamic_cast<Teacher *> (person);
        string answer = T == NULL ? " is a Student" : " is a Teacher";
        cout << answer << endl;
    }  

    return 0;
}

namespace myfuncs {
    void cout(const std::string &s);
    bool endl(const std::string &s);
}

void myfuncs::cout(const std::string &s) {
    int i = 0;
    while (s[i]) {
        if (isalpha(s[i])) {
            std::cout << s[i];
        }
        i++;
    }
    std::cout << std::endl;
}

bool myfuncs::endl(const std::string &s) {
    return islower(s[s.size()-1]);
}

int main ()
{
    std::string test = "Th78392is0is5627a7t892es0t3to5Main0Fun82737c2837tio327n";
    myfuncs::cout(test);
    std::string answer = myfuncs::endl(test) ? "Lower case" : "Upper case";
    std::cout << answer << std::endl;
    return 0;
}

void using_iterators() {
    
    vector<string> names = {"Marco", "Ilias", "Aurelio", "Tobias", "Crespo", "Vint"};

    // Construção de um apontador próprio para vectores de strings
    vector<string>::iterator n;                       

    // names.begin() aponta para o primeiro valor do container
    // names.end() aponta para a zona de memória seguinte ao último dado contido no container
    // n recebe, a cada iteração, um incremento de X bytes, correspondentes ao tipo de dados manipulados                          
    for (n = names.begin() ; n != names.end() ; n++ ) {
        cout << *n << endl;                                     // Retorna o que encontra na memória                            
    }
    cout << endl;

    // Reverse iterators
    vector<string>::reverse_iterator m;
    for (m = names.rbegin() ; m != names.rend() ; m++ ) {
        cout << *m << endl;
    }
    cout << endl;
}

void removing_numbers() {

    vector<int> numbers = {2, 0, 6541, 0, 0, 654, 0, 8, 5, 6, 0, 15, 0, 5, 0, 0};
    int n = count(numbers.begin(), numbers.end(), 0); cout << n << endl;

    cout << "Initial size: " << numbers.size() << endl;
    numbers.erase(remove(numbers.begin(), numbers.end(), 0), numbers.end());

    for (int n : numbers) 
        cout << n << " ";
    cout << endl;

    cout << "Final size: " << numbers.size() << endl;
}

template<class U>
void show_vectors(const vector<U> &v, int number) {

    cout << "Size of vector: " << number << endl;
    cout << "Show vector: ";
    for (int i = 0 ; i < number ; i++) {
        cout << setw(3) << v[i] << " ";
    }
    cout << endl << endl;
}

void STL_vectors() {

    // Inserir elemento num index específico do container vector
    vector<int> numbers = {1, 2, 3, 4, 5};
    show_vectors(numbers, numbers.size());
    numbers.insert(numbers.begin()+4, 16); // Insere o número 16 no index 0+4
    
    // Inserir o conteúdo de um array no vector
    const int size3 = 3;
    vector<int> n1 = {1, 2, 3};
    int array[size3] = {7, 8, 9};
    numbers.insert(n1.begin(), array, array+size3);
    show_vectors(n1, n1.size());

    // Apagar um elemento num vector
    vector<int> n2 = {4, 5, 6, 7, 8, 9, 10};
    n2.erase(n2.begin()+5); // Apaga o elemento de index 0+5 --> o número 9
    show_vectors(n2, n2.size());

    // Fazer clean total num vector
    n2.clear();
    show_vectors(n2, n2.size());

    // Fill algorithm
    vector<int> n3(20);
    fill(n3.begin(), n3.end(), 19);
    show_vectors(n3, n3.size());
    fill_n(n3.begin()+5, 3, 2);     // A partir do index 0+5, colocar 3 valores com o número 2
    show_vectors(n3, n3.size());

    // Shuffle and Sort
    cout << "Shuffle: \n";
    //random_shuffle(n3.begin(), n3.end());
    show_vectors(n3, n3.size());
    cout << "Sorted: \n";
    sort(n3.begin(), n3.end());
    show_vectors(n3, n3.size());
}

template<class V>
void show_lists(list<V> l, size_t size) {
    cout << "Size: " << size << "\nNumbers: ";
    for (auto n : l) {
        cout << n << " ";
    }
    cout << endl << endl;
}

void STL_lists() {

    // Empty list
    list<int> l;
    show_lists(l, l.size());

    // Fill list with push_front
    for (int i = 1 ; i <= 10 ; i++) {
        l.push_front(i);
    }
    show_lists(l, l.size());
    l.clear();

    // Fill list with push_back
    for (int i = 1 ; i <= 10 ; i++) {
        l.push_back(i);
    }
    show_lists(l, l.size());

    // Insert algorithm --> In vectors is more easy!
    list<int>::iterator P = l.begin();
    int index = 5;
    int value = 541;
    for (int i = 0 ; i < index ; i++ ) { P++ ; }
    l.insert(P, value);
    show_lists(l, l.size());
}

void STL_map() {

    // Muito parecido aos dicionários em Python
    map<int, int> ma;
    ma[0] = 90;
    ma[1] = 91;
    ma[10] = 8;
    cout << "Using map:\n";
    int n = 0;

    map<int, int>::const_iterator i = ma.begin(); // Another example, const iterator

    for (auto pair : ma) {
        n++;
        cout << n << ": " << pair.first << " - " << pair.second << endl;
    }

    // Find keys in map associative container
    int key1 = 9;
    int key2 = 10;
    if (ma.find(key1) != ma.end()) { cout << "Found it. Value is " << ma[key1] << endl; } else { cout << "Not found this key in map" << endl; }
    if (ma.find(key2) != ma.end()) { cout << "Found it. Value is " << ma[key2] << endl; } else { cout << "Not found this key in map" << endl; }

    // Anther example, using pair container
    map<string,int> fut;
    pair<string,int> p;
    fut["Sporting"] = 1;
    fut["Porto"] = 2;
    n = 0;
    for (map<string,int>::const_iterator f = fut.begin(); f != fut.end(); f++ ) {
        n++;
        p = *f; // each element of a "map" is a "pair"
        cout << n << " - " << p.first << ", " << p.second << endl;
    }
    cout << endl;

    // Insertions to map container --> LIFO (Last in First Out)
    multimap<string, int> phoneList;
    phoneList.insert(pair<string, int> ("Mary", 99999999));
    phoneList.insert(pair<string, int> ("John", 516599999));
    phoneList.insert(pair<string, int> ("John", 59999));
    // Note: John fica associado a dois números de telemóvel
    for (auto l : phoneList) {
        cout << l.first << " - " << l.second << endl;
    }
}

void using_arrays() {

    int a[] = { 30, 50, 10, 40, 20 };
    remove(a, a+5, 50);
    for (auto x : a)
        cout << x << endl;
}

int root (int x) { return sqrt(x) ; }

void transform_lambda() {

    // Using extern non-void function
    vector<int> inicio = {1, 4, 9, 16, 25, 36, 49};
    vector<int> fim(inicio.size());
    transform(inicio.begin(), inicio.end(), fim.begin(), root);
    show_vectors(fim, fim.size());

    // Using lambda function
    transform(inicio.begin(), inicio.end(), fim.begin(), [](int x) -> int { return x*x*x ; });
    show_vectors(fim, fim.size());
}

void STL_set () {

    // Fill set using random seed method #include <ctime>
    // Números não repetidos e ordenados
    set<int> numbers;
    while (numbers.size() != 10) {
        numbers.insert(rand() % 100);
    }
    for (int number : numbers) {
        cout << number << " ";
    }
    cout << endl;

    // Fill multiset using random seed method #include <ctime>
    // Números repetidos e ordenados
    multiset<int> n;
    while (n.size() != 10) {
        n.insert(rand()%10);
    }
    for (auto pair : n) {
        cout << pair << " ";
    }
    cout << endl;

    // Erase numbers in a set
    cout << "Erase: ";
    int lim_min = 5, lim_max = 10;
    multiset<int>::iterator pointer1 = n.find(lim_min), pointer2 = n.find(lim_max);
    n.erase(pointer1, pointer2);
    for (auto pair : n) {
        cout << pair << " ";
    }
}

int main ()
{   
    srand(time(NULL));
    using_iterators();
    removing_numbers();
    STL_vectors();
    STL_lists();
    STL_map();
    using_arrays();
    transform_lambda();
    STL_set();
    return 0;
}

// T e S admitem ser um valor genérico (int, long, float, double...)
template<typename T>
T sum (T a, T b) { return a + b ; }

template<typename S>
void printArray (const S a[], size_t n) {
    for (size_t i = 0 ; i < n ; i++ ) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void template_function() {

    int number1 = 10;
    int number2 = 5;
    cout << sum (number1, number2) << endl;
    double number3 = 7.5;
    double number4 = 9.32;
    cout << sum (number3, number4) << endl;
    int arr[] = {56, 5415, 546, 541, 321, 3215, 6541, 5, 0, 65416};
    printArray(arr, sizeof(arr) / sizeof(arr[0]));
}

class Person {

    friend Person operator + (Person, Person);

    public:

        Person();
        Person(string name, int age);
        int operator()();
        int operator()(int);
        int operator()(int, int);
        string getName();
        int getAge();
        void setName(string name);
        void setAge(int age);
    
    private:

        int age;
        string name;
};

Person::Person() {
    this -> age = 0;
    this -> name = "UNKNOWN";
}

Person::Person(string name, int age) {
    this -> name = name;
    this -> age = age;
}

string Person::getName () { return name; }
int Person::getAge() { return age; }

void Person::setName(string name) { this -> name = name ; }
void Person::setAge(int age) { this -> age = age ; }

Person operator + (Person p1, Person p2) {
    Person p3;
    p3.setAge(p1.getAge() + p2.getAge());
    p3.setName(p1.getName() + " " + p2.getName());
    return p3;
}

int Person::operator () () {
    return rand() % 100;
}

int Person::operator () (int lim_min) {
    return lim_min + rand() % 100;
}

int Person::operator () (int lim_min, int lim_max) {
    return lim_min + (rand() % (lim_max - lim_min + 1));
}

void overloading() {

    Person p1 = Person("Fabio", 15);
    Person p2;
    p2.setName("Araujo");
    p2.setAge(3);
    Person p3 = p1 + p2;
    cout << p3.getName() << " have " << p3.getAge() << " years!" << endl;
    cout << p3(); cout << endl;
    cout << p3(p3()); cout << endl;
    cout << p3(p3(), p3()); cout << endl;
}

int main ()
{   
    srand(time(NULL));
    template_function();
    overloading();
    return 0;
}

int main ()
{
    int x;
    cout << "Input a value between 0 and 10: ";
    cin >> x;
    assert(x <= 10 && x >= 0);
    cout << "Valid" << endl;
    return 0;
}

#include <iostream>
#include <cmath>
#include <array>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <map>
#include <list>
using namespace std;

// Exam PROG 2019-2020 resolution
// Fábio Araújo de Sá

// Question 1 a)

while (value >= lim1 && value <= lim2);

// Question 1 b)

temperatura[10..50] ?
o
0

// Question 1 c)

/*
	Enquanto o buffer não receber um valor que garanta a insersão de uma variável do tipo int em "value"
	então deve-se apagar a flag de erro do buffer (usando cin.clear) e o conteúdo do mesmo (cin.ignore())
*/

// Question 1 d)

vector<string> code;
vector<unsigned int> grade;

int current_grade;
for (auto c : code) {
	cout << "Classificacao de " << code << " [0..20] ? ";
	cin >> current_grade;
	grade.push_back(current_grade);
}

// Question 1 e)

vector<map<int, string>> all, ou seja, um vector contendo maps de int e string;
para obter cada dado faríamos:
for (auto m : all) {
	cout << m->first << " " << m->second << endl;
}

// Question 1 f)

Dá erro uma vez que a função poderia só retornar double.
Poderia fazer overloading escolhendo este processo com uma template function:

template<class T>
T getValue (const std::string &msg, T number1, T number2)


// Question 1 g)

É o mais acertado a se fazer, uma vez que map e multimap são STL containers do tipo associativo e de busca/manipulação log linar (O(1)).
Assim, o que poderia fazer era:

#include <map> , para importar map e multimap
map<string, int> all_grades, onde:
	this -> string = name --> Nome do estudante
	this -> int grade --> Nota do estudante

// Question 2

class Point {

	friend double dist(const Point& p1, const Point& p2); //calcula a distância entre p1 e p2
	public:
		Point(double x, double y);
		double getX() const; // devolve coordenada x
		double getY() const; // devolve coordenada y
		// outros métodos da classe Point
	private:
		double x, y; //coordenadas do ponto
};

class Polygon {

	public:
		Polygon();
		Polygon& addVertex(Point p); // acrescenta vértice ao polígono
		Polygon& addVertex(Point p, size_t pos); // acrescenta vértice na posição pos
		size_t getSize() const; // devolve no de lados do polígono = no de vértices
		Point getVertex(size_t pos) const; // devolve vértice na posição pos
		double mystery() const; // ver alínea c)
		// outros métodos da classe Polygon
	private:
		list<Point> v; // vértices do polígono
};

// Question 2 a)

Point::Point(double x, double y) {

	this->x = x;
	this->y = y;
}

// Question 2 b)

Não é possível mesmo que, de seguida, se faça p(double x, double y) para caracterizar o objecto da classe. 
Isto porque não existe um default constructor da classe, por exemplo, um Point(), como acontece na classe Polygon.

// Questioon 2 c)

O código mystery retorna um double com a soma das distâncias de dois ponto consecutivos, ou seja, o perímetro 
do objecto da classe polígono.

// Question 2 d)

A função retorna o ponto (objecto Point) que está na posição pos do vector privado da classe Poligon
Point getVertex(size_t pos) {
	return v[pos];
}

// Question 2 e)

É desadequada.Uma lista(list) é um STL container sequencial e, como tal, tem algoritmo de busca O(n)-- > log linear, o que implica
um esforço computacional desadequado.Além disso, como é preenchido com objectos Point e não apontadores(*) para esses mesmos objectos,
acaba por criar cópias deles na memória, alocando mais bytes do que era necessário à função desempenhada.
Assim, nem a inserção nem a busca se torna viável neste tipo de container.Em vez disso, usar map<Point*> poderia ser mais correcto.

// Question 2 f)

O código não está sintaticamente correcto pois o método público da classe Polygon addVertex(Point p) não retorna um apontador para o
objecto polygon. Assim, escrever numa só instrução a inserção de três pontos torna-se inviável. Em vez disso, a alternativa seria:

Polygon p;
p.addVertex(p1);
p.addVertex(p2);
p.addVertex(p3);

// Question 3

class Biblioteca {

	private:
		string nomeBiblioteca; // guarda o nome da biblioteca
		vector<Livro> livros; // guarda os livros existentes na biblioteca
	public:
		vector<unsigned int> histograma() const; // devolve um histograma - ver alínea c)
};

class Livro {

	private:
		string titulo; // título do livro
		string autor; // autor do livro
		vector<string> texto; // linhas de texto que constituem o livro
	public:
		Livro(string nomeFicheiro);
		unsigned int numeroPalavras() const;
};

// Question 3 a)

Livro::Livro(string nomeFicheiro) {

	ifstream file;
	file.open(nomeFicheiro);
	if (file.good()) {

		string current_line;
		getline(file, current_line);
		titulo = current_line;
		getline(file, current_line);
		autor = current_line;

		while (!file.eof()) {
			getline(file, current_line);
			texto.push_back(current_line);
		}
	}
	else { cout << "File not found!" << endl; }
	file.close();
}

// Question 3 b)

unsigned int Livro::numeroPalavras() const {
		
	unsigned int answer = 0;
	for (auto line : texto) {
		
		string current_word;
		istringstream l(line);
		while (l >> current_word) {
			answer++;
		}
	}
		
	return answer + texto.size();
}

// Question 3 c)

vector<unsigned int> Biblioteca::histograma() const {
		
	vector<unsigned int> histo(10);
	for (auto livro : livros) {
		int words = livro.numeroPalavras();
		histo[(words + 1) % 100]++;
	}
	return histo;
}

// Question 4 a)

string geraMutacoes(string DNA, int number) {
	
	vector<char> letters;
	for (auto c : DNA) {
		letters.push_back(c);
	}

	vector<char> mut = { 'A', 'C', 'G', 'T' };
	while (number) {
		int index = rand() % DNA.size();
		int let_index = rand() % 4;
		while (mut[let_index] == letters[index])
			let_index = rand() % 4;

		letters[index] == mut[let_index];
	}

	string answer = "";
	for (auto l : letters) { answer = + l; }

	return answer;
}

// Question 4 b)

vector<int> listaMutacoes(string n1, string n2) {
			
	vector<int> result;
	for (int i = 0; i < n1.size(); i++) {
		for (int j = 0; j < n2.size(); j++) {
			if (i == j && n1[i] != n2[j]) {
				result.push_back(i);
			}
		}
	}
	return result;
}

// Question 4 c)

int sum(vector<int> v) {
	
	int result = 0;
	for (auto n : v) { result += n; }
	return result;
}

vector<vector<int>> matrizDeDistâncias(vector<string> &seq) {

	vector<vector<int>> all;
	vector<int> current_line;
	
	for (int i = 0; i < seq.size(); i++) {
		for (int j = 0; j < seq.size(); j++) {
			int result = sum(listaMutacoes(seq[i], seq[j]));
			current_line.push_back(result);
		}
		all.push_back(current_line);
		current_line.clear();
	}
	return all;
}

#include <iostream>
#include <cmath>
#include <array>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <map>
#include <list>
using namespace std;

// Exam PROG 2010-2011 resolution
// Fábio Araújo de Sá

// Question 1 a)

A forma como está escrita a função, permite apenas a inserção de uma palavra na variável "name", uma vez que o buffer, assim que encontra um
espaço, acaba a leitura. Assim, o buffer ainda contém a string "Costa" e completa, incorrectamente, a int age. O número 92 é o código ASCII do char 'C'.

// Question 1 b)

Uma possível solução do problema:
#include <iostream>
#include <string>
int main()
{
	string name; int age;
	cout << "Nome ? "; 
	getline(cin, name);
	cin.clear();
	cin.ignore(1000, '\n');
	cout << "Age ? ";
	cin >> age;
	cout << "Nome = " << name << " and age = " << age << endl;
	return 0;
}

// Question 2 a)

A função mystery2 "apaga" o valor "value" sempre que este ocorre no vector v, puxando todos os valores um index atrás e atualizando,
sempre que isso acontece, o tamanho do mesmo.

// Question 2 b)

1, 2, 3, 4, 5
1, 3, 4, 5

// Question 3

class Point {
	friend double dist(const Point& p1, const Point& p2); //calcula a distância entre p1 e p2
	public:
		Point();
		Point(double x, double y);
		double getX() const; // devolve coordenada x
		double getY() const; // devolve coordenada y
		// outros métodos da classe Point
	private:
		double x, y; //coordenadas do ponto
};

class Polygon {
	public:
		Polygon();
		void addVertex(Point p); // acrescenta vértice ao polígono
		size_t getSize() const; // devolve no de lados do polígono = no de vértices
		Point getVertex(size_t num) const;
		// outros métodos da classe Polygon
	private:
		//A COMPLETAR com estrutura de dados para representar os vértices de um polígono
};

// Question 3 a)

A função dist é externa à classe Point e, para ter acesso direto aos atributos private da classe em questão, deve-se colocar
o qualificativo "friend", para dar mais flexibilidade a esta.

Um exemplo de código dessa função:
#include <cmath>
double dist(const Point& p1, const Point& p2) {

	double x1 = p1.getX(), x2 = p2.getX(), y1 = p2.getY(), y2 = p2.getY();
	return sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));
}

// Question 3 b)

class Polygon {

	public:
		Polygon();
		void addVertex(Point p); // acrescenta vértice ao polígono
		size_t getSize() const; // devolve no de lados do polígono = no de vértices
		Point getVertex(size_t num) const;

	private:
		vector<Point> points // Vector of points;
		int n; // Number of points
		double area; // Are of polygon
};

// Question 3 c)

size_t Polygon::getSize() { return points.size(); }

// Question 3 d)

Polygon t;
Point p1(0.0, 1.0); t.addVertex(p1);
Point p2(1.0, 1.0); t.addVertex(p2);
Point p3(1.0, 0.0); t.addVertex(p3);

// Question 4

class User {

	private:
		string name;
		vector<Message> messages;
	public:
		User(string name);
		string getName() const;
		vector<Message> getMessages() const;
		vector<Message> getMessages(string subject) const;
		void addMessage(Message message);
};

class Message {
	
	friend ostream& operator<<(ostream& os, Message& message);
	private:
		time_t date; //time_t é um inteiro sem sinal
		string content;
	public:
		Message(time_t timeMsg, string content);
		time_t getDate() const;
		string getContent() const;
};

// Question 4 a)

Message::Message(time_t timeMsg, string content) {

	this->date = timeMsg;
	this->content = content;
}

// Question 4 b)

ostream& operator<< (ostream& os, Message& message) {

	os << message.getDate() << endl;
	os << message.getContent() << endl;
	return os;
}

// Question 4 c)

vector<Message> User::getMessages(string subject) const {
		
	vector<Message> answer;
	for (auto mes : messages) {
		if (mes.getContent().find(subject) <= mes.getContent().size()) {
			answer.push_back(mes);
		}
	}
	return answer;
}

// Question 5

unsigned int NPROJECTS = 10;
typedef vector< vector<unsigned int> > Preferences;
typedef vector<unsigned int> Assignments;

// Question 5 a)

Assignments assignFirstPreference(const Preferences& prefs) {

	Assignments result;
	for (auto p : prefs) {
		result.push_back(p[0]);
	}
	return result;
}

// Question 5 b)

vector<int> assignmentsPerProject(const Assignments& assig) {

	vector<int> histo(NPROJECTS);
	for (auto p : assig) {
		histo[p - 1]++;
	}
	return histo;
}

#include <iostream>
#include <cmath>
#include <array>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <map>
#include <list>
using namespace std;

// Exam PROG 2010-2011 resolution
// Fábio Araújo de Sá

// Question 1 a)

A forma como está escrita a função, permite apenas a inserção de uma palavra na variável "name", uma vez que o buffer, assim que encontra um
espaço, acaba a leitura. Assim, o buffer ainda contém a string "Costa" e completa, incorrectamente, a int age. O número 92 é o código ASCII do char 'C'.

// Question 1 b)

Uma possível solução do problema:
#include <iostream>
#include <string>
int main()
{
	string name; int age;
	cout << "Nome ? "; 
	getline(cin, name);
	cin.clear();
	cin.ignore(1000, '\n');
	cout << "Age ? ";
	cin >> age;
	cout << "Nome = " << name << " and age = " << age << endl;
	return 0;
}

// Question 2 a)

A função mystery2 "apaga" o valor "value" sempre que este ocorre no vector v, puxando todos os valores um index atrás e atualizando,
sempre que isso acontece, o tamanho do mesmo.

// Question 2 b)

1, 2, 3, 4, 5
1, 3, 4, 5

// Question 3

class Point {
	friend double dist(const Point& p1, const Point& p2); //calcula a distância entre p1 e p2
	public:
		Point();
		Point(double x, double y);
		double getX() const; // devolve coordenada x
		double getY() const; // devolve coordenada y
		// outros métodos da classe Point
	private:
		double x, y; //coordenadas do ponto
};

class Polygon {
	public:
		Polygon();
		void addVertex(Point p); // acrescenta vértice ao polígono
		size_t getSize() const; // devolve no de lados do polígono = no de vértices
		Point getVertex(size_t num) const;
		// outros métodos da classe Polygon
	private:
		//A COMPLETAR com estrutura de dados para representar os vértices de um polígono
};

// Question 3 a)

A função dist é externa à classe Point e, para ter acesso direto aos atributos private da classe em questão, deve-se colocar
o qualificativo "friend", para dar mais flexibilidade a esta.

Um exemplo de código dessa função:
#include <cmath>
double dist(const Point& p1, const Point& p2) {

	double x1 = p1.getX(), x2 = p2.getX(), y1 = p2.getY(), y2 = p2.getY();
	return sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));
}

// Question 3 b)

class Polygon {

	public:
		Polygon();
		void addVertex(Point p); // acrescenta vértice ao polígono
		size_t getSize() const; // devolve no de lados do polígono = no de vértices
		Point getVertex(size_t num) const;

	private:
		vector<Point> points // Vector of points;
		int n; // Number of points
		double area; // Are of polygon
};

// Question 3 c)

size_t Polygon::getSize() { return points.size(); }

// Question 3 d)

Polygon t;
Point p1(0.0, 1.0); t.addVertex(p1);
Point p2(1.0, 1.0); t.addVertex(p2);
Point p3(1.0, 0.0); t.addVertex(p3);

// Question 4

class User {

	private:
		string name;
		vector<Message> messages;
	public:
		User(string name);
		string getName() const;
		vector<Message> getMessages() const;
		vector<Message> getMessages(string subject) const;
		void addMessage(Message message);
};

class Message {
	
	friend ostream& operator<<(ostream& os, Message& message);
	private:
		time_t date; //time_t é um inteiro sem sinal
		string content;
	public:
		Message(time_t timeMsg, string content);
		time_t getDate() const;
		string getContent() const;
};

// Question 4 a)

Message::Message(time_t timeMsg, string content) {

	this->date = timeMsg;
	this->content = content;
}

// Question 4 b)

ostream& operator<< (ostream& os, Message& message) {

	os << message.getDate() << endl;
	os << message.getContent() << endl;
	return os;
}

// Question 4 c)

vector<Message> User::getMessages(string subject) const {
		
	vector<Message> answer;
	for (auto mes : messages) {
		if (mes.getContent().find(subject) <= mes.getContent().size()) {
			answer.push_back(mes);
		}
	}
	return answer;
}

// Question 5

unsigned int NPROJECTS = 10;
typedef vector< vector<unsigned int> > Preferences;
typedef vector<unsigned int> Assignments;

// Question 5 a)

Assignments assignFirstPreference(const Preferences& prefs) {

	Assignments result;
	for (auto p : prefs) {
		result.push_back(p[0]);
	}
	return result;
}

// Question 5 b)

vector<int> assignmentsPerProject(const Assignments& assig) {

	vector<int> histo(NPROJECTS);
	for (auto p : assig) {
		histo[p - 1]++;
	}
	return histo;
}

#include <iostream>
#include <cmath>
#include <array>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <map>
using namespace std;

// Exam PROG 2019-2020 resolution
// Fábio Araújo de Sá

/*
	Question 1
	
	False --> "private" is a reserved word of C++ programming language
	False --> (*p).x or p->x are two correct options to get a x atribute of pointer p
	False --> if (x <= 10 && x >= 0) is the correct syntax
	True
	True
	True
	False --> "PROG" isn't a constant string
	True
	False --> Person is a class and Queue<Person> is a linear/sequence container of Person's objects
	True
	True
	False --> cin.clear() erases the buffer error flag while cin.ignore(1000, '\n') erases the buffer content
	False --> This is a .h definition (header file definition) of a class, not a caller of constructor
	True
	True
	False --> Sets are formed by unique values in linear ascending order
	True
	True
	False --> Methods of Parent Class A are private to Child Class B
	True
*/

// Question 2 a)

vector<int> genRandom (int n, int m) {

	vector<int> result;
	while (result.size() != n) {
		int random_number = rand() % (m + 1);
		result.push_back(random_number);
	}
	return result;
}

// Question 2 b)

int vectorReduce (vector<int> v1, vector<int> &v2) {

	int counter = 0;
	
	for (int i = 0 ; i < v1.size() ; i++ ) {
		for (int j = 0; j < v2.size(); j++ ) {
			if (v1[i] == v2[j]) {
				counter++;
				v2.erase(v2.begin() + j);
			}
		}
	}
	return counter;
}

// Question 2 c)

void showVector(const vector<int>& v) {

	for (int n : v) {
		cout << setw(3) << n;
	}
	cout << endl;
}

int main()
{
	int n, m, counter;
	cout << "n? "; cin >> n;
	cout << "m? "; cin >> m;
	vector<int> v1 = genRandom(n, m);
	vector<int> v2 = genRandom(n, m);
	counter = vectorReduce(v1, v2);
	showVector(v1);
	showVector(v2);
	cout << counter << " elements were removed from 2nd vector" << endl;
	return 0;
}

// Question 2 d)

int* genRandom2(int n, int m) {

	int* p = (int*) malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		p[i] = rand() % (m + 1);
	}
	return p;
}

// Question 3

class Game {
	public:
		Game(const string& filename);
		int neighborMines(int line, int col) const;
	private:
		vector<vector<char>> mines;
};

// Question 3 a)

Game::Game(const string& filename) {

	ifstream file;
	file.open(filename);

	if (file.good()) {

		string current_line;
		char trash;
		int lines, cols;
		getline(file, current_line);
		istringstream s(current_line);
		s >> lines >> trash >> cols;
		
		mines.resize(lines, vector<char>(cols, ' '));

		int x, y;
		while (!file.eof()) {
			getline(file, current_line);
			istringstream n(current_line);
			n >> x >> trash >> y;
			mines.at(x).at(y) = 'M';
		}
	}
	else { cout << "File not exists!" << endl; }
}

// Question 3 b)

int Game::neighborMines(int line, int col) const {
	
	int counter = 0;
	if (mines[line][col] == 'M') { throw runtime_error("Boom") ; }
	else {

		if (line - 1 < 0 || col - 1 < 0 || line + 1 > mines.size() || col + 1 > mines[0].size()) {

			if (mines[line++][col++] == 'M') counter++;
		}
		else {
			if (mines[line++][col] == 'M') counter++;
			if (mines[line][col++] == 'M') counter++;
			if (mines[line++][col--] == 'M') counter++;
			if (mines[line--][col++] == 'M') counter++;
			if (mines[line++][col++] == 'M') counter++;
			if (mines[line--][col--] == 'M') counter++;
			if (mines[line--][col++] == 'M') counter++;
			if (mines[line--][col] == 'M') counter++;
		}
	}
	return counter;
}

// Question 4

class Student {
	public:
		Student(int id = 0, const string& name = "");
		int getId() const;
		string getName() const;
		void enrollCourse(Course* course);
		bool setGrade(int courseId, int grade);
		int getAverageGrade();

	private:
		int id;
		string name;
		vector<Course*> courses;
		map<int, int> grades;
} ;

class Course {

	public:
		Course(int id = 0, const string& name = "");
		int getId() const;
		string getName() const;

	private:
		int id;
		string name;
};

// Question 4 a)

Student::Student(int i, const string& name) {

	this->id = id;
	this->name = name;
}

// Question 4 b)

void Student::enrollCourse(Course* course) {

	courses.push_back(course);
}

// Question 4 c)

bool Student::setGrade(int courseId, int grade) {

	bool answer = false;
	for (auto course : courses) {

		if (course->getId() == courseId) {
			!answer;
			break;
		}
		if (grades.find(courseId) != grades.end()) {
			!answer;
			break;
		}
	}
	if (!answer) {
		grades[courseId] = grade;
	}
	return answer;
}

// Question 4 d)

int id = 1;
string name = "PROG";
Course *c = new Course(id, name);
int id2 = 12345;
string name2 = "Ada";
Student *t = new Student(id2, name2);
t->enrollCourse(c);
t->setGrade(1, 20);

// Question 5 a)

int Student::getAverageGrade() {

	int result = 0;
	for (auto course : courses) {
		result += grades[course->getId()];
	}
	return (int) (result / courses.size() + 0.5);
}

// Question 5 b)

/*
	Usar um tipo de container STL vector para este tipo de dados não é o mais correcto.
	Além de alocar automaticamente a memória, como é um container do tipo linear, com busca O(n) e sequenciável, torna
	a busca / inserção de novas notas computacionalmente mais complexa.
*/

// Question 5 c)

/*
	Escolheria um map, STL container associativo, do tipo map<Course, map<Year, Grade>, que a cada parâmetro associava:
	this-> Course , o curso frequentado
	this-> Year, o ano de frequência
	this-> Grade, a frequência obtida
	A busca/manipulação dos dados seria O(1), log constante, e computacionalmente mais viável.
*/

#include <iostream>
#include <cmath>
#include <array>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <map>
#include <list>
using namespace std;

// Exam PROG 2011-2012 resolution
// Fábio Araújo de Sá

// Question 1 a)

O parâmetro é passado por referência, o que não se justifica uma vez que a função não irá modificá-lo.
Uma possível solução:

unsigned int countZeros(vector<int>& v) {
	
	unsigned int numZeros = 0;
	for (size_t i = 0; i < v.size(); i++)
		if (v[i] == 0) numZeros++;
	return numZeros;
}

// Question 1 b)

string cardRankToSymbol(unsigned int rank) {

	string names[] = { " A"," 2"," 3"," 4"," 5"," 6"," 7"," 8"," 9","10"," J"," Q"," K" };
	return names[rank - 1];

	map<char, string> p;
	for (auto name : names) {
		pair<char, string> current(name, 0);
		p.insert(current);
	}
}

// Question 1 c)

template<class F>
F absolute(F number) {
	
	if (number > 0) {
		return number;
	}
	else {
		return (T)-number;
	}
}

// Question 1 d)

class String {

	friend std::ostream& operator<<(std::ostream& out, const String& right);
	friend bool operator==(const String& left, const String& right);
	friend String operator+(const String& left, const String& right);

	public:
		String();
		String(const char s[]);
		String(const String& right);
		~String();
		String& operator=(const String& right);
		char& operator[](int index);
		char operator[](int index) const;
		int length() const;

	private:
		char* buffer;
		int len;
};

O qualificativo "friend" serve para vincular uma função externa à classe, isto é, que não pertence aos atributos privados e públicos da mesma,
mas que pode ter acesso aos atributos privados do objecto a manipular.
Trata-se essencialmente para facilitismo e flexibilidade na implementação do código.
O destruidor implementou-se pois existe métodos que tratam da alocação dinâmica de memória e, como tal, necessitam que a memória seja desocupada
logo depois da sua utilização (libertação da Heap Memory).

// Question 2 a)

string open() {

	ifstream file;
	string fileName;
	cout << "File name? ";
	cin >> fileName;

	file.open(fileName);

	if (file.good()) {
		
		file.close();
		cout << "Open Successfuly! " << endl;
		return fileName;
	}
	else { cout << "File not exist!" << endl; exit(1); }
}

// Question 2 b)

vector<string> getDict() {

	string fileName = open();
	ifstream file;
	string current_word;
	vector<string> dictionary;

	file.open(fileName);
	while (!file.eof()) {
		getline(file, current_word);
		dictionary.push_back(current_word);
	}
	file.close();

	return dictionary;
}

// Qustion 2 c)

bool match(string pattern, string attemp) {

	if (pattern.size() != attemp.size()) return false;
	else {

		bool answer = true;

		for (int i = 0; i < pattern.size(); i++) {
			if (pattern[i] != '.') {
				answer = answer && pattern[i] == attemp[i];

		return answer;
	}
}

// Question 3

class Card {

	friend ostream& operator<<(ostream& os, const Card& card);

	public:
		Card();
		Card(char suit, unsigned int rank, unsigned int points, bool isFaceUp);
		char getSuit() const; // retorna o naipe
		unsigned int getRank() const; // retorna o valor
		unsigned int getPoints() const; // retorna a pontuação da carta

	private:
		char suit; // o naipe da carta: 'C' - copas, 'E' - espadas, 'O' - ouros, 'P' - paus
		unsigned int rank; // o valor da carta: 1 - ás, 2 - duque, ..., 11 - valete, 12 - dama, 13 - rei
		unsigned int points; // a pontuação da carta: ás - 11, duque - 2, ..., valete/dama/rei - 10
		bool isFaceUp; // true = face virada para cima
};

class Hand {

	public:
		Hand();
		void addCard(Card c); // acrescenta uma carta à mão
		Card getCard(); // retira uma carta da mão
		void show() const; // mostra as cartas da mão, no estado em que cada uma estiver
		unsigned int getPointsTotal() const; // obtém a pontuação total das cartas da mão
	private:
		vector<Card> cards; // o conteúdo da mão
};

// Question 3 a)

Card::Card(char suit, unsigned int rank, unsigned int points, bool isFaceUp) {

	this->suit = suit;
	this->rank = rank;
	this->points = points;
	this->isFaceUp = isFaceUp;
}

// Question 3 b)

ostream& operator<<(ostream& os, const Card& card) {

	if (card->isFacedUp) {
		os << card->rank << "." << card->suit << endl;
	}
	else {
		os << "XXXX" << endl;
	}

	return os;
}

// Question 3 c)

int Hand::getPointsTotal() {

	int points = 0;
	bool as = false;
	for (auto card : cards) {
		points += card->rank;
		if (card->rank == 1) as = true;
	}
	if (points > 21 && as) return points - 10;
	return points;
}

// Question 3 d)

void Hand::show() {
	
	for (auto c : cards) {
		cout << c; // O operador está implementado
	}
}

// Question 4 

class Coin
{
	public:
		Coin(int v, char u);
		void showDescription() const; //mostra descrição da moeda (ex: 1E para um euro ou 2C para 2 cêntimos)
		double getValue() const; //NOTAR o double: retorna o valor da moeda em euros (ex: 0.01 para 1 cênt.)
	private:
		int value;
		char unit; // 'E' para 'euro' ou 'C' para 'cêntimo'
};

// Question 4 a)

#ifndef PURSE_H
#define PURSE_H

Coin::Coin(int v, char u) {

	this->value = v;
	this->unit = u;
}

void Coin::showDescription() const {
	
	cout << value << toupper(unit) << endl;
}

double Coin::getValue() const {
		
	if (unit == 'C') return (double) value / 100.0;
	return (double) value;
}

#endif 

#include <iostream>
#include <cmath>
#include <array>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <map>
#include <list>
using namespace std;

// Exam PROG 2012-2013 resolution
// Fábio Araújo de Sá

// Question 1 a)

O erro está na linha 6 do código. Uma possível solução:

int main()
{
	int n = 1, grade, sum = 0;
	float average;
	cout << "Grade " << n << "? "; cin >> grade;
	while (0 <= grade && grade <= 20)
	{
		sum = sum + grade;
		n++;
		cout << "Grade " << n << "? "; cin >> grade;
	};
	average = sum / n;
	cout << "Average = " << fixed << setprecision(1) << average << endl;
	return 0;
}

// Question 1 b)

A média deveria ser obtida através da instrução:
return (double)sum / (n - 1);

// Question 1 c)

Na linguagem de programação C++, a divisão de dois inteiros resulta num inteiro. Assim, a melhor solução seria:
return (double)sum / (n - 1);

// Question 1 d)

Uma possível solução para resolver o problema.A cada iteração, usar as instruções
cin.clear();
cin.ignore(10000, '\n');

// Question 2 a)

O vector não é passado por referência mas sim por valor, resultando que este é alterado só no scopo da função swap() e não
globalmente. O header da função seria, de forma ideal, o seguinte:
bool swapElems(vector<int>& v, int i, int j);

// Question 2 b)

bool swapElems(int v[], int i, int j);
if (i >= 0 && j < sizeof(v) / sizeof(v[0])));

// Question 2 c)

template<typename T>
bool swapElems(vector<T>& v, int T, int T);

// Question 3 a)

class Time {

	public:
		Time();
		Time(int hour, int minute, int second);
		void show() const;

	private:
		int minute;
		int second;
		int hour;
};

// Question 3 b)

Time::Time() {
	this->minute = 0;
	this->second = 0;
	this->hour = 0;
}

Time::Time(int hour, int minute, int second) {
	this->minute = minute;
	this->second = second;
	this->hour = hour;
}

void Time::show() const {
	cout << hour << ":" << minute << ":" << second << endl;
}

// Question 3 c)

É necessário fazer "overload" do operador "<<" colocando-o, por exemplo, como "friend" da classe Time e implementando-o da seguinte forma:

ostream & operator<< (ostream& os, const Time &t) {
	os << hour << ":" << minute << ":" << second << endl;
	return os;
}

// Question 3 d)

Como terei de indexar dois tipos de dados (string e objecto Time), algumas que até podem ser repetidas, usaria o STL container associativo multimap.
Implementaria da seguinte forma:

#include <map>
multimap<string, Time> act;

// Question 4 a)

bool fileOpen(string fileName, ifstream &file) {
	file.open(fileName);
	return file.good();
}

// Question 4 b)

bool getBets(string filename, vector<vector<int> >& vec)
{
	int contador = 1; bool erro;
	ifstream f;
	stringstream ss;
	string line;
	vector<int> aposta;
	if (!fileopen(filename, f))
		return false;
	while (!f.eof()) {
		getline(f, line);
		if (!line.size()) break;
		stringstream ss(line);
		aposta.clear();
		while (!ss.eof()) {
			int n; ss >> n;
			if (n > 0) aposta.push_back(n);
		}
		if (aposta.size() != 7) {
			cout << "Erro na aposta " << contador++ << endl;
			erro = false;
		}
		else
			vec.push_back(aposta);
	}
	f.close();
	return erro;
}

// Question 4 c)

void printBet(const vector<int>& aposta)
{
	int index = 0;
	for (unsigned int i = 1; i < 46; i++) {
		if (index < 5 && aposta[index] == i) {
			cout << setw(2) << i << " ";
			index++;
		}
		else cout << " "; if ((i % 9) == 0)
			cout << endl;
	}
	cout << endl << endl;
	for (unsigned int i = 1; i < 10; i++)
		if (aposta[index] == i) {
			cout << setw(2) << i << " "; index++;
		}
		else cout << " ";
	cout << endl;

}

// Question 4 d)

void score(const vector<int>& aposta, const vector<int>& chave) {

	unsigned int certas = 0;
	for (unsigned int i = 0; i < 5; i++)
		for (unsigned int j = 0; j < 5; j++) {
			cout << aposta[i] << " " << chave[j] << endl; if(aposta[i] == chave[j])
			certas++;
	else if (aposta[i] < chave[j])
		break;
			}
	cout << certas << " + ";

	certas = 0;
	for (unsigned int i = 5; i < 7; i++)
		if (aposta[i] == chave[5] || aposta[i] == chave[6])
			certas++;
	cout << certas << endl;

}

// Question 5

class Peca {

	public:
		Peca(); // constrói uma "peça vazia"
		Peca(string nome, bool cor);
		string getNome() const; // retorna o nome de Peca
		bool getCor() const; // retorna a cor de Peca
		void setPeca(string nome, bool cor); // atualiza os atributos de Peca
	private:
		string nome; // o nome da peça pode ser: “Rei”, “Rainha”, “Torre”, “Bispo”, “Cavalo”, ou “Peao”
		// a ausência de uma peça é assinalada usando a string vazia no nome
		bool cor; // true para as peças brancas; false para as peças pretas
};

class Tabuleiro {

	public:
		Tabuleiro(); // reserva espaço para um tabuleiro (matriz 8 x 8) e preenche
		// todas as posições com uma "peça vazia" (ver texto acima)
		string getPecaNaPos(string pos) const; //retorna nome da peça na pos. dada
		vector<Peca> torrePodeTomar(unsigned int lin, unsigned int col,
		bool (cor) const; // retorna os nomes das
		// peças que podem ser tomadas pela torre cuja posição e cor é dada
		void pecasTomadas() const; //mostra nome das peças tomadas por cada jogador
	private:
		vector< vector<Peca> > tabuleiro; // tabuleiro de jogo
		set<string> pretasTomadas; // peças pretas tomadas pelas brancas
		set<string> brancasTomadas; // peças brancas tomadas pelas pretas
}; //nota pós-exame: deviam ser multisets; são sets, apenas para simplificar

// Question 5 a)

#define DIMENSAO 8

Tabuleiro::Tabuleiro() {
	for (unsigned int i = 0; i < DIMENSAO; i++) {
		vector<Peca> linha;
		for (unsigned int j = 0; j < DIMENSAO; j++)
			linha.push_back(Peca());
		tabuleiro.push_back(linha);
	}
}

// Question 5 b)

string Tabuleiro::getPecaNaPos(string pos) const {
	int linha, coluna;
	linha = DIMENSAO - (pos[1] –'0');
	coluna = pos[0] – 'A';
	return tabuleiro[linha][coluna].getNome();

}

// Question 5 c)

vector<Peca> Tabuleiro::torrePodeTomar(unsigned int lin, unsigned int col, bool cor) const {
	vector<Peca> tomadas;
	// verificar na coluna para cima
	for (int l = lin - 1; l >= 0; l--)
		if (tabuleiro[l][col].getNome() != "") {
			if (tabuleiro[l][col].getCor() != cor) {
				tomadas.push_back(tabuleiro[l][col]);
				break;
			}
			else break;
		}
	// verificar na coluna para baixo
	for (int l = lin + 1; l < DIMENSAO; l++)
		if (tabuleiro[l][col].getNome() != "") {
			if (tabuleiro[l][col].getCor() != cor) {
				tomadas.push_back(tabuleiro[l][col]);
				break;
			}
			else break;
		}
	// verificar na linha para a esquerda
	for (int c = col - 1; c >= 0; c--)
		if (tabuleiro[lin][c].getNome() != "") {
			if (tabuleiro[lin][c].getCor() != cor) {
				tomadas.push_back(tabuleiro[lin][c]);
				break;
			}
			else break;
		}
	// verificar na linha para a direita
	for (int c = col + 1; c < DIMENSAO; c++)
		if (tabuleiro[lin][c].getNome() != "") {
			if (tabuleiro[lin][c].getCor() != cor) {
				tomadas.push_back(tabuleiro[lin][c]);
				break;
			}
			else break;
		}
	return tomadas;
}

// Question 5 d)

void Tabuleiro::pecasTomadas() const {
	set<string>::iterator it;
	cout << "Tomadas pelas pretas: ";
	for (it = brancasTomadas.begin(); it != brancasTomadas.end(); it++)
		cout << *it << " "; cout << endl;
	cout << "Tomadas pelas brancas: ";
	for (it = pretasTomadas.begin(); it != pretasTomadas.end(); it++)
		cout << *it << " ";
	cout << endl;
}

#include <iostream>
#include <cmath>
#include <array>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <map>
#include <list>
using namespace std;

// Exam PROG 2012-2013 resolution
// Fábio Araújo de Sá

// Question 1 a)

unsigned int countValues(int a[], unsigned int nelem, int value)
{
	unsigned int i, count = 0;
	for (i = 0; i < nelem; i++)
		if (a[i] == value)
			count++;
	return count;
}

// Question 1 b)

template<class T>
unsigned int countValues(T a[], unsigned int nelem, T value)
{
	unsigned int i, count = 0;
	for (i = 0; i < nelem; i++)
		if (a[i] == value)
			count++;
	return count;
}

// Question 1 c)

class Person
{	
	friend bool operator== (Person p1, Person p2);
	public:
		Person();
		Person(string name, unsigned int age);
		string getName() const;
		unsigned int getAge() const;
		
	private:
		string name;
		unsigned int age;
};

bool operator== (Person p1, Person p2) {

	return p1.getAge() == p2.getAge() && p1.getName() == p2.getName();
}

// Question 1 e)

class Player : public Person {

	public:
		Player(string name, unsigned int age, string team);
	private:
		string team;
};

Player::Player(string name, unsigned int age, string team) 
	: Person(name, age) 
	{ 
		this->team = team;  
	}

// Question 1 f)

multimap<string, Player>, que, para cada string função_de_campo, teria um ou mais jogadores da class Player.
Isto é o STL container mais eficiente uma vez que é do tipo associativo e a busca é O(1) --> Funciona por keys.

// Question 2 a)

vector<string> convertResultList(const vector<unsigned int>& number, const vector<string>& name, const vector<float>& grade) {

	vector<string> result;
	for (int i = 0; i < number.size(); i++) {

		string current_number = to_string(number[i]);
		string current_name = name[i];
		string current_grade = to_string(grade[i]);

		while (current_name.size() != "BBBBBBBBBBBBBBBBBBBB".size()) {
			current_name.size() = " " + current_name;
		}

		string compile = current_number + " | " + current_name + " | " + current_grade;
		result.push_back(compile);
	}

	return result;
}

// Question 2 b)

unsigned int countValues(const int a[], unsigned int nelem, int value)
{
	unsigned int i, count = 0;
	for (i = 0; i < nelem; i++)
		if (a[i] == value)
			count++;
	return count;
}

int mode(const int number[], unsigned int numElems) {
	
	int value = 0;
	int size = 0;
	for (int i = 0; i < numElems; i++) {
		int current_number = number[i];
		unsigned int attemp = countValues(number, numElems, current_number);
		if (attemp > size) {
			size = attemp;
			value = current_number;
		}
	}
	return value;
}

// Question 3

class Text {
	public:
		Text(string filename);
		// other methods
		bool existsWord(string word); // 'word' exists in the literary text? 
	private:
		string title; // title of the literary text
		string author; // author of the literary text
		vector<string> text; // contents of the literary text, line by line
};

// Question 3 a)

Text::Text(string filename) {

	ifstream file;
	file.open(filename);
	if (file.is_open()) {

		string title;
		string author;
		string current_line;
		getline(file, title); this->title = title;
		getline(file, author); this->author = author;

		while (!file.eof()) {
			getline(file, current_line);
			this->text.push_back(current_line);
		}

		file.close();
	}
	else {
		cerr << "File not found!" << endl;
		exit(1);
	}
}

// Question 3 b)

bool Text::existsWord(string word) {

	if (author.find(word) < author.size()) return true;
	if (title.find(word) < title.size()) return true;
	for (auto line : text) {
		if (line.find(word) < line.size()) return true
	}
	return false;
}

// Question 3 c)

int main() {

	string word, filename;
	cout << "Filename? "; cin >> filename;
	cout << "Word? "; cin >> word;

	Text t(filename);
	string answer = t.existsWord(word) ? "This word exists!" : "Not found";
	cout << answer << endl;

	return 0;
}

// Question 4

typedef struct {
	string clientBI, dateBegin, dateEnd;
} RentRecord;

// Question 4 a)

class Vehicle {

	public:
		Vehicle();
		Vehicle(string, string, string);
		void pushRecord(RentRecord);
		string getMatricula();
		string getMarca();
		string getModelo();
		
	private:
		vector<RentRecord> records;
		string matricula;
		string marca;
		string modelo;
};

class Client {

	public:
		Client();
		Client(unsigned int, string);
		string getName();
		unsigned int getBI();

	private:
		unsigned int BI;
		string name;
		
};

//Estrutura de dados adequada
vector<Vehicle> v;

// Question 4 b)

void showAvailableVehicles(Vehicle vei) {

	for (auto v : vei)
	{
		if (isAvailable(v)) {
			cout << v.getMatricula() << v.getMarca() << v.getModelo() << endl;
		}
	}
}

#include <iostream>
#include <cmath>
#include <array>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <map>
#include <list>
using namespace std;

// Exam PROG 2014-2015 resolution
// Fábio Araújo de Sá

// Question 1 a)

void get_code_sum(const string& code_grades, int num_grades, string& code, double& sum) {
	
	double partial = 0.0;
	double next;
	istringstream split(code_grades);
	split >> code;
	while (split >> next) {
		partial += next;
	}
	sum = partial;
}

// Question 1 b)

int main()
{
	string file, intro_file_name = ".txt", out_file_name = "_final.txt";
	int num_grades;
	cout << "File Name? ";
	cin >> file; intro_file_name = file + intro_file_name; out_file_name = file + out_file_name;

	ifstream fin;
	fin.open(intro_file_name);
	if (fin.is_open()) {

		ofstream fout;
		fout.open(out_file_name);
		string current_line;

		fin >> num_grades;
		while (!fin.eof()) {
			
			double sum = 0.0;
			string code;
			getline(fin, current_line);
			get_code_sum(current_line, num_grades, code, sum);
			fout << code << " - " << sum << endl;
		}

		fin.close();
		fout.close();

	}
	else {
		cerr << "File not found!" << endl; exit(1);
	}

	return 0;
}

// Question 2

class Student {

	public:
		Student();
		Student(const string& code, const string& name);
		void setGrades(double shortExam, double project, double exam);
		string getCode() const;
		string getName() const;
		int getFinalGrade() const;
		// other get and set methods
		bool isApproved() const; // is the student approved or not ?
		static int weightShortExam, weightProject, weightExam; // weights in percentage (ex:20,30,50)
	private:
		string code; // student code
		string name; // student complete name
		double shortExam, project, exam; // grades obtained by the student in the different components
		int finalGrade;
};

// Question 2 --> Similar ao que fiz nos exercícios passados

// Question 3 a)

double average(int* p, const unsigned int n) {

	// Dinamicamente:
	p = (int*)malloc(n * sizeof(int));

	// Estaticamente:
	const int number = 10;
	int p2[number];
}

// Question 3 b)

Por exemplo, fazendo um try-throw-catch em cada inserção, para garantir a conveniência das operãções

// Question 3 c)

Quando, em tempo de execução, se usa alocação dinâmica de memória (malloc(), new), para libertar o espaço momentaneamente 
ocupado na Heap Memory, suporte essencial do objecto da classe em questão.

// Question 3 d)

Para que o cout (ostream &) receba essa mesma referência, por memória, de modo a conseguir obter o valor
pretendido sem criar cópias desnecessárias

// Question 3 e)

template <class RandomAccessIterator>
void sort(RandomAccessIterator first, RandomAccessIterator last);

bool operator< (Student t1, Student t2) {
	return t1.getName() < t2.getName();
}

Student one, two;
sort(one, two, [](Student b, Student c) -> (bool x) { return b < c; });

// Question 3 f)

usaria o multimap:
multimap<string name, Shap p>, com name = nome do desenho e p qualquer objecto derivado de Shape

#include <iostream>
#include <cmath>
#include <array>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <map>
#include <list>
using namespace std;

// Exam PROG 2015-2016 resolution
// Fábio Araújo de Sá

// Question 1

class Purse
{
	friend bool operator==(Purse, Purse);
	public:
		Purse(); // cria um porta moedas vazio sem dono especificado
		Purse(string owner); // cria um porta moedas vazio cujo dono é "owner"
		void addCoin(float coin); // acrescenta a moeda indicada como parâmetro
		void addCoins(vector<float> coins); // acrescenta as moedas indicadas como parâmetro
		bool removeCoin(float coin); //se existir uma moeda com o valor indicado como parâmetro remove‐a e retorna true, se não retorna false
		... removeAmount(...) ...; // VER DESCRIÇÃO NA ALÍNEA a)
		float tellAmount() const; // retorna o montante total
		vector<float> tellCoins() const; // retorna uma cópia do vetor das moedas
		void show() const; // mostra o dono, as moedas e o montante total
		// ... outros métodos
		static vector<float> possibleCoins; // moedas possíveis: 2, 1, 0.5, 0.2 e 0.1 euro
	private:
		string owner; // o dono do porta‐moedas
		vector<float> coins; // as moedas
		float amount; // o montante total (soma do valor das moedas)
};

// Question 1 a)

Um exemplo de resposta possível:
bool Purse::removeAmount(vector<int> &coins, float amount);

// Questão 1 b)

vector<float> Purse::possibleCoins = { 2, 1, 0.5F, 0.2F, 0.1F };
Neste contexto, o qualificativo static significa que só existe uma instância de possibleCoins para todos os objetos
da classe Purse

// Question 1 c)

Purse::Purse(string owner) {
	this->owner = owner;
	this->amount = 0;
	this->coins.clear();
}

// Question 1 d)

void Purse::addCoins(vector<float> coins) {

	for (auto coin : coins) {
		this->coins.push_back(coin);
		this->amount += coin;
	}
}

// Question 1 e)

bool Purse::removeCoins(float coin) {

	vector<float>::iterator p = find(coins.begin(), coins.end(), coin);
	if (p != coins.end()) {
		coins.erase(p);
		amount -= coin;
		return true;
	}
	return false;
}

// Question 1 f)

bool operator== (Purse one, Purse two) {
	bool answer = one.amount == two.amount;
	sort(one.coins.begin(), one.coins.end());
	sort(two.coins.begin(), two.coins.end());
	for (int i = 0; i < coins.size(); i++) {
		answer = answer && (one.coins[i] == two.coins[i]);
	}
	return answer;
}

// Question 1 g)

int main()
{
	srand((unsigned int)time(NULL)); // não "obrigatório"
	Purse purse1("Ana");
	vector<float> coins1 = { 2, 1, 0.5F, 0.5F, 0.2F, 0.2F, 0.1F };
	purse1.addCoins(coins1);
	purse1.show();
	Purse purse2;
	for (unsigned int i = 1; i <= coins1.size(); i++)
	{
		float coin = Purse::possibleCoins.at(rand() % Purse::possibleCoins.size());
		purse2.addCoin(coin);
	}
	purse2.show();
	if (purse1 == purse2)
		cout << "Porta‐moedas iguais\n":
	else
		cout << "Porta‐moedas diferentes\n";
}

// Question 1 h)

map<float, unsigned int>;

// Question 2 a)

class Board
{
public:
	Board(size_t numLines, size_t numColumns, char emptySymbol);
	size_t getNumLines() const;
	size_t getNumColumns() const;
	char getPieceAt(size_t line, size_t column) const;
	string getLineAt(size_t line) const;
	string getColumnAt(size_t column) const;
	bool setPieceAt(size_t line, size_t col, char piece);
	void show() const;
private:
	vector<string> board; // OU vector<vector<char>> board;
	char emptySymbol;
	size_t numLines;
	size_t numColumns;
};

// Question 2 b)

Board::Board(size_t numLines, size_t numColumns, char emptySymbol) {

	string line(numColumns, emptySymbol);
	for (int i = 0; i < numLines; i++) {
		board.push_back(line);
	}
}

// Question 2 c)

string Board::getColumn(size_t column) const // NOTA: para o utilizador, a 1a coluna é a coluna 1
{
	string colStr;
	for (size_t i = 0; i < numLines; i++)
		colStr = colStr + board.at(i).at(column ‐ 1); // OU ... board[i][column ‐ 1];
	return colStr;
}

// Question 2 d)

bool testSequence(const Board& b, size_t column, char symbol, size_t n)
{
	string colStr = b.getColumnAt(column);
	string pattern = string(n, symbol);
	if (colStr.find(pattern) == string::npos)
		return false;
	return true;
}

// Question 3 a)

Será mostrado 1 - 2

// Question 3 b)

class Point {
	public:
		Point();
		Point(int x, int y);
		Point* setX(int x);
		Point* setY(int y);
	private:
		int x;
		int y;
};

// Question 3 c)

template<class T, class V>
class Point {
public:
	Point();
	Point(T x, V y);
	Point* setX(T x);
	Point* setY(V y);
private:
	T x;
	V y;
};

// Question 3 d)

template <class BidirectionalIterator>
void reverse(BidirectionalIterator first, BidirectionalIterator last);

É possível, uma vez que o STL vector é um container sequencial que permite ter iteradores. A chamada seria definida como:
reverse(v.begin(), v.end());

// Question 3 e)

É possível, embora seja impossível, estaticamente, determinar a que classe derivada pertence cada objecto do vector.
É o chamado "slicing problem" e pode ser resolvido usando apontadores (pointers) de cada tipo de classe child

#include <iostream>
#include <cmath>
#include <array>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <map>
#include <set>
#include <list>
using namespace std;

// Exam PROG 2016-2017 resolution
// Fábio Araújo de Sá

// Question 1 a)

void program() {
	
	string file_in = "people1.txt";
	string file_out = "people2.txt";
	ifstream fin;
	ofstream fout;
	fin.open(file_in);
	fout.open(file_out);

	if (fin.is_open()) {

		string current_line;
		string normalized_name;

		while (!fin.eof()) {

			getline(fin, current_line);
			simplify(current_line, normalized_name);
			fout << normalized_name << endl;
		}

		fin.close();
		fout.close();
	}

	else { 

		cerr << "people1.txt not found!" << endl; 
		exit(1); 
	}
}

// Question 1 b)

void simplify(const string& name, string& sName) {

	string answer, current_word;
	vector<string> words;
	istringstream s(name);
	while (s >> current_word) {
		words.push_back(current_word);
	}
	answer = words.size() > 1 ? words[0] + words[words.size() - 1] : words[0];
	sName = answer;
}

// Question 1 c)

void alphabetic() {

	string file_in = "people1.txt";
	string file_out = "people2.txt";
	ifstream fin;
	ofstream fout;
	fin.open(file_in);
	set<string> names;

	if (fin.is_open()) {

		string current_line;
		string normalized_name;

		while (!fin.eof()) {

			getline(fin, current_line);
			simplify(current_line, normalized_name);
			names.insert(normalized_name);
		}

		fin.close();

		fout.open(file_out);
		for (auto name : names) {
			fout << name << endl;
		}

		fout.close();
	}

	else {

		cerr << "people1.txt not found!" << endl;
		exit(1);
	}
}

// Question 2

class Date
{
	friend istream& operator>>(istream& f, Date& date);
	friend ostream& operator<<(ostream& f, const Date& date);
	friend bool operator<(const Date& left, const Date& right);
	friend bool operator==(const Date& left, const Date& right);
	public:
		Date(int y = 1, int m = 1, int d = 1);
		// ... other methods
	private:
		int y, m, d; // year, month, day
};

// Question 2 a)

Date::Date(int y, int m, int d) {
	this->y = y;
	this->m = m;
	this->d = d;
}

// Question 2 b)

bool operator<(const Date& left, const Date& right) {

	string one = to_string(left.y) + to_string(left.m) + to_string(left.y);
	string two = to_string(right.y) + to_string(right.m) + to_string(right.y);
	return stoi(one) < stoi(two);
}

// Question 2 c)

istream& operator>>(istream& f, Date& date) {

	int y, m, d;
	char barr;
	try {
		f >> y >> barr >> m >> barr >> d;
		throw runtime_error("invalid Date");
		date.d = d;
		date.y = y;
		date.d = m;
	}
	catch (runtime_error) {
		cerr << "invalid Date" << endl;
		exit(1);
	}

	return f;
}

// Question 2 d)

int main()
{
	int y, m, d;
	cout << "Date1 (yyyy:mm:dd)? "; cin >> y, m, d;
	Date d1(y, m, d);
	cout << "Date2 (yyyy:mm:dd)? "; cin >> y, m, d;
	Date d2(y, m, d);

	string one = d1.getDate();
	string two = d2.getDate();
	string result = " is ";
	if (d1 == d2) cout << one + result + " equal " + two;
	else if (d1 < d2) cout << one + result + " before " + two;
	else cout << one + result + " after " + two;
	return 0;
}

// Question 3

class Image {

	public:
		Image(size_t nLins = 0, size_t nCols = 0, int pixVal = 0, vector<vector<int>> img);
		void setPixel(size_t lin, size_t col, int pixVal); 
		bool read(string fileName); 
		Image getRegion(size_t lin, size_t col, size_t nLins, size_t nCols) const;
	private:
		vector < vector<int> > img;

};

// Question 3 a)

int Image::getPixel(int x, int y) const {

	return img.at(x).at(y);
}

// Question 3 b)

Image Image::getRegion(size_t lin, size_t col, size_t nLins, size_t nCols) {

	vector<vector<int>> all_content;
	vector<int> current_line;

	size_t i, j;
	for (i = lin; i < nLins; i++) {
		for (j = col; j < nCols; j++) {
			current_line.push_back(img.at(i).at(j));
		}
		all_content.push_back(current_line);
		current_line.clear();
	}

	Image final(nLins - lin, nCols - col, 0, all_content);
	return final;
}

// Question 3 c)

Usaria um multimap<Date, Image>, em que um object do tipo Date pode ser comum a um ou mais objectos da classe Image.
Um multimap é um STL container associativo, com pesquisa O(1) e portanto é computacionalmente mais viável do que qualquer
2D vector.

// Question 3 d)

int main()
{
	multimap<Date, Image> album;
	int y, m, d;
	string file;
	cout << "Date1 (yyyy:mm:dd)? "; cin >> y, m, d;
	Date d1(y, m, d);

	do {
		cout << "File? ";
		cin >> file;
		if (file.size()) {
			album[d1] = Image(file);
		}

	} while (file.size());

	return 0;
}

// Question 3 e)

template<class F>
class Image {

public:
	Image(size_t nLins = 0, size_t nCols = 0, F pixVal = 0, vector<vector<F>> img);
	void setPixel(size_t lin, size_t col, F pixVal);
	bool read(string fileName);
	Image getRegion(size_t lin, size_t col, size_t nLins, size_t nCols) const;
private:
	vector < vector<F> > img;

};

// Question 4 a)

void readNumber1(const string& msg, int& number) {
	cout << msg;
	cin >> number;
}

int number;
string msg = "Number ja: ";
readNumber1(msg, number);

int readNumber2(const string& msg) {
	int number;
	cout << msg;
	cin >> number;
	return number;
}

string msg = "Number ja: ";
int number = readNumber2(msg);

// Question 4 b)

Sim. O construtor do objecto já admite default values, pelo que é prescindível a utilização de novos valores na declaração
de um novo objecto.

// Question 4 c)

Usaria um pointer **p , usando dynamic memory allocation com o número de linhas e número de colunas já dados no enunciado.

// Question 4 d)

Image::Image() {

	// Alocação dinâmica de memória para um 2D int pointer chamado "img" --> Private atribute of Image Class
	int** img = (int**)malloc(nlines*sizeof(int));
	for (int i = 0; i < nlines; i++) {
		int* l = (int*)malloc(ncols * sizeof(int));
		img[i] = l;
	}
}	

// Question 4 e)

"list" é um SLT container sequencial, que permite inserção de novos elementos pela frente (push_front(item)) e por trás
(push_back(item)). Como tal, é necessário haver dois tipos de apontadores/iteradores, algo que o randomAcessIterator não
é capaz de proporcionar.

// Question 4 f)

A função draw() é declarada como virtual, está presente unicamente na Parent Class e é igualada a zero. Isto quer dizer que, num desenho genérico (vector de
objectos de tipo Shape, vector<Shape*>), quando se coloca a instrução item.draw(), o compilador, em tempo de execução, irá tratar de
invocar o método da classe derivada que manipula. As virtual functions servem essencialmente para declarar métodos a serem implementados,
de facto, só nas funções derivadas (Child Classes).

#include <iostream>
#include <string>
using namespace std;

class Date {
    public:
        Date(int i, int j, int k);
    private:
        int i, j, k;
};

Date::Date(int i, int j, int k) {
    this->i = i;
    this->k = k;
    this->j = j;
}

class Novo {
    public:
        Novo(int i= 3, int j= 8, int k= 9);
    private:
        int i, j, k ;
};

Novo::Novo(int i, int j, int k) {
    this->i = i;
    this->k = k;
    this->j = j;
}

int main ()
{
    Date d;
    return 0;
}

#include <iostream>
#include <cmath>
#include <array>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <map>
#include <algorithm>
#include <set>
#include <list>
using namespace std;

// Exam PROG 2017-2018 resolution
// Fábio Araújo de Sá

// Question 1 a)

void toUpperStr(string &s) {
	
	string result = "";
	for (int i = 0; i < s.size(); i++)
	{
		result += toupper(s[i]);
	}
	s = result;
}

// Questiono 1 b)

bool isLetter(char l) {
	vector<char> letters = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 
								'u', 'v', 'w', 'x', 'y', 'z'};
	for (auto c : letters)
		if (c == l) return true;
	return false;
}

string transformLine(string &s) {

	string all = "";
	for (auto letter : s) {
		if (isLetter(letter) || letter == ' ') {
			all += letter;
		}
		else {
			all += ' ';
		}
	}
	toUpperStr(all);
	return all;
}

// Question 1 c)

void decomposeLine(string& line, vector<string> words) {

	string result = transformLine(line);
	istringstream split(line);
	string current_word;
	while (split >> current_word) {
		words.push_back(current_word);
	}
}

// Question 1 d)

int another_main1()
{
	string in = "C:\\docs\\text.txt";
	string out = "words.txt";
	ifstream file;

	file.open(in);
	if (file.is_open()) {

		vector<string> all_words;
		string current_line;
		while (!file.eof()) {
			getline(file, current_line);
			decomposeLine(current_line, all_words);
		}

		file.close();
		sort(all_words.begin(), all_words.end());

		ofstream file;
		file.open(out);
		
		for (auto word : all_words) {
			file << word << endl;
		}

		file.close();
	}

	else {
		cerr << "File not found!" << endl;
		exit(1);
	}

	return 0;
}

// Question 1 f)

int another_main2()
{
	string in = "C:\\docs\\text.txt";
	string out = "words.txt";
	ifstream file;

	file.open(in);
	if (file.is_open()) {

		set<string> all_words;
		string current_line;
		while (!file.eof()) {
			getline(file, current_line);
			decomposeLine(current_line, all_words);
		}

		file.close();

		ofstream file;
		file.open(out);

		for (auto word : all_words) {
			file << word << endl;
		}

		file.close();
	}

	else {
		cerr << "File not found!" << endl;
		exit(1);
	}

	return 0;
}

// Question 2

struct Position {
	int lin, col;
};

class Ship {

	public:
		Ship(unsigned int identifier, char symbol, Position position, char direction, size_t size);
		unsigned int id() const; //returns identifier
		Position pos() const; //returns position
		char dir() const; //returns direction
		size_t size() const; //returns size
	private:
		unsigned int identifier; // ship id number
};

class Board {
	public:
		Board(size_t numLines = 10, size_t numColumns = 10);
		bool putShip(const Ship& s); //add ship to board, if possible
	private:
		bool canPutShip(Position pos, char dir, size_t size);
		size_t numLines, numColumns;
		vector<vector<int>> board; // each element = ship id or ‐1
		vector<Ship> ships;
};

// Question 2 a)

/*
	Board tem um construtor com default values, isto é, mesmo que não se indique o valor inicial de linhas e colunas (instrução Board b; ) contidas
	no objecto, ele admite por omissão valores nos parâmetros privados da classe pertencente.
	Ship não possui default values, resultando a instrução Ship s num erro de compilação.
*/

// Question 2 b)

Board::Board(size_t numLines, size_t numColumns) {

	this->numColumns = numColumns;
	this->numLines = numLines;

	size_t i, j;
	for (i = 0; i < this->numLines; i++) {
		for (j = 0; j < this->numColumns; j++) {
			board.at(i).at(j) = -1;
		}
	}
}

// Question 2 c)

bool Board::canPutShip(Position pos, char dir, size_t size) {

	bool answer = true;

	switch (dir)
	{
		case 'H':
			answer = answer && (pos.col + size < board[0].size());
			if (answer) {
				for (size_t i = 0; i < size; i++) {
					answer = answer && (board[pos.lin][pos.col + i] == -1);
				}
				return answer;
			}
			return false;
			break;

		case 'V':
			answer = answer && (pos.lin + size < board.size());
			if (answer) {
				for (size_t i = 0; i < size; i++) {
					answer = answer && (board[pos.lin + i][pos.col] == -1);
				}
				return answer;
			}
			return false;
			break;

		default:
			return false;
	}
}

// Question 2 d)

bool Board::putShip(const Ship& s) {

	bool isAvailable = canPutShip(s.pos(), s.dir(), s.size());

	if (isAvailable) {

		unsigned int id = s.id();
		char dir = s.dir();
		int x = s.pos().lin;
		int y = s.pos().col;
		size_t size = s.size();

		switch (dir)
		{
		case 'H':

			for (size_t i = 0; i < size; i++) {
				board[x][y + i] == -1;
			}

		case 'V':

			for (size_t i = 0; i < size; i++) {
				board[x + i][y] == -1;
			}

		default:
			return isAvailable;
		}

		return isAvailable;
	}

	return isAvailable;
}

// Question 2 e)

int another_main3()
{
	Board b = Board(10, 20);

	int id;
	Position xy;
	size_t tamanho;
	char symbol;
	char direction;

	cout << "ID? "; cin >> id;
	cout << "Position x? "; cin >> xy.lin;
	cout << "Position y? "; cin >> xy.col;
	cout << "Tamanho? "; cin >> tamanho;
	cout << "Symbol? "; cin >> symbol;
	cout << "Direction? "; cin >> direction;

	Ship p(id, symbol, xy, direction, tamanho);
	if (!b.canPutShip(xy, direction, tamanho)) {
		throw "Can't put ship!";
	}
	else {
		b.putShip(p);
	}

	return 0;
}

// Question 3 a1)

float average(const int grades[], int numStudents) {

	int result = 0;
	for (int i = 0; i < numStudents; i++) {
		result += grades[i];
	}
	return (float)result / numStudents;
}

// Question 3 a2)

void readGrades(int grades[], int numStudents);

float getResults() {

	int number;
	cout << "Number of students? "; cin >> number;
	int* notas = (int*)malloc(number * sizeof(float));
	readGrades(notas, number);
	return average(notas, number);
}

// Question 3 b)

template <class InputIterator, class T>

/*
	Como um STL vector é um container sequencial que permite ter apontadores/iteradores, então é viável a formação da referida função.
*/

InputIterator find(InputIterator first, InputIterator last, const T& val) {
	

	for (first; first != last; first++) {
		if (first == val) return first;
	}
	return last;
}

int another_main4() {

	string to_search = "31";
	vector<string> all;
	if (find(all.begin(), all.end(), to_search) != all.end()) {
		cout << "Found it!" << endl;
	}
	else {
		cout << "Not found!" << endl;
	}
	return 0;
}

// Question 3 c)

/*
	Um set é um tipo de SLT container associativo que pressupõe a existência de elementos não repetidos. No caso deste problema, 
	não é um bom container uma vez que poderá, numa primeira instância, haver posições repetidas.
	Uma possível solução seria um set de apontadores para objetos da classe Position
	set<Position*>
*/

// Question 3 d)

/*
	A saída do programa seria:
	2 3
	2
	2

	A saída do programa seria:
	2 3
	2
	2

	Daria erro de compilação. Ao substituir por private, a classe Derived já não teria acesso ao atributo "a", resultando num
	erro quando o tentava escrever na consola.
*/