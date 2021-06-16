// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 246 of Lectures Material

#include <iostream>
#include <vector>
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

    // Reverse iterators
    vector<string>::reverse_iterator m;
    for (m = names.rbegin() ; m != names.rend() ; m++ ) {
        cout << *m << endl;
    }
}

int main ()
{   
    using_iterators();
    return 0;
}