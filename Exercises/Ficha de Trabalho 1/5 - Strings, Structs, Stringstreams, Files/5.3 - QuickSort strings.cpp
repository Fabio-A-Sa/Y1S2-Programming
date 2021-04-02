// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <array>
#include <vector>
#include <string>
using namespace std;

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
