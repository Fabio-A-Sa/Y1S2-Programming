// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 246 of Lectures Material

#include <iostream>
#include <vector>
#include <array>
#include <algorithm>    // Important!
using namespace std;

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
void show_vectors(vector<U> v, int number) {

    cout << "Size of vector: " << number << endl;
    cout << "Show vector: ";
    for (int i = 0 ; i < number ; i++) {
        cout << v[i] << " ";
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
    
}

int main ()
{   
    //using_iterators();
    //removing_numbers();
    STL_vectors();
    return 0;
}