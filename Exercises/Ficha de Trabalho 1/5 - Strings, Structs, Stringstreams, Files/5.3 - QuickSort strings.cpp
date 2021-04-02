// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <array>
#include <vector>
#include <string>
using namespace std;

int comparator ( const void *arg1, const void *arg2 ) {

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

    qsort (example, 5, sizeof(char), comparator);    

    for(int i = 0 ; i < 5 ; i++ )
        cout << example[i] << " " ;

}
