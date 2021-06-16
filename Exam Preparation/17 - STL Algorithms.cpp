// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 246 of Lectures Material

#include <iostream>
#include <iomanip>
#include <cstddef>
#include <string>
#include <vector>
#include <array>
#include <list>
#include <map>              // For map and multimap
#include <utility>          // For pair
#include <algorithm>        // For begin(), end(), erase(), insert() ... and others iterator's methods
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
    random_shuffle(n3.begin(), n3.end());
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
    map<string, int> phoneList;
    phoneList.insert(pair<string, int> ("Mary", 99999999));
    phoneList.insert(pair<string, int> ("John", 516599999));
    for (auto l : phoneList) {
        cout << l.first << " - " << l.second << endl;
    }
}

int main ()
{   
    //using_iterators();
    //removing_numbers();
    //STL_vectors();
    //STL_lists();
    //STL_map();

    int a[] = { 30, 50, 10, 40, 20 };
    sort(a, a + 5); // TRY WITH remove(a, a+5, 50);
    for (auto x : a)
        cout << x << endl;
        
    return 0;
}