// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <cmath>
#include <assert.h>
using namespace std;

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

/* 
A função retorna um valor aleatório entre 1 e 6. 
A função assert verifica se a expressão "high >= low" é verdadeira.
Caso seja, então o programa continua normalmente. Caso contrário, então para imediatamente a execução das tarefas.
*/