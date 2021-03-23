// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <array>
using namespace std;

// Não funciona --> Verificar mais tarde!

int comparator ( const void *arg1, const void *arg2 ) {
   return  *arg1 - *arg2 ;
}

int main( int argc, char **argv )
{
    int i;
    int arr[5] = {5, 8, 6, 4, 1} ;
    size_t size = 5;
    int base = arr[0];
    size_t num;

    qsort (void* base, size_t num, size_t size, int (*comparator)(const void*,const void*));    

    // Print sorted data
    for( i = 0 ; i < size ; ++i )
        cout << arr[i] << " " ;

}
