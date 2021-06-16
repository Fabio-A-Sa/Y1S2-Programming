// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 246 of Lectures Material

#include <iostream>
#include <vector>
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
    //numbers.erase(remove(numbers.begin(), numbers.end(), 0), numbers.end());
    remove(numbers.begin(), numbers.end(), 0);
    for (int n : numbers) 
        cout << n << " ";
    cout << endl;

    cout << "Final size: " << numbers.size() << endl;
}

int main ()
{   
    //using_iterators();
    removing_numbers();
    return 0;
}