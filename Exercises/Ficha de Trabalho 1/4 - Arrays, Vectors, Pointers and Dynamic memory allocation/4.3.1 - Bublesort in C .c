#include <stdio.h>

int main () {

    int total = 15 ;
    int array[] = {40, 55, 11, 32, 67, 5, 74, 89, 38, 66, 27, 36, 79, 99, 2} ;

    int i, j, swap;

    for ( i = 0 ; i < total - 1 ; i++ ) {   
        for ( j = 0 ; j < total - i ; j++ ) {
            if (array[j] > array[j+1]) {
                swap = array[j+1];
                array[j] = array[j+1];
                array[j+1] = swap;
            }
        }
    }

    int index = 0;
    printf("Ordenado: ");
    while (index != total) {
        printf("%d, ", array[index]);
        index++;
    }
}



