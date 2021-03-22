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