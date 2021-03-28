#include <stdio.h>

int main () {

    int total = 15 ;
    int array[] = {40, 55, 11, 32, 67, 5, 74, 89, 38, 66, 27, 36, 79, 99, 2} ;

    int index = 0;
    printf("Desordenado: ");
    while (index != total - 1) {
        printf("%d, ", array[index]);
        index++;
    }
    printf("%d", array[total-1]);
    printf("\n");

    int i, j, swap;

    for ( i = 0 ; i < total - 1 ; i++ ) {   
        for ( j = 0 ; j < total - i ; j++ ) {
            if (array[j] > array[j+1]) {
                swap = array[j];
                array[j] = array[j+1];
                array[j+1] = swap;
            }
        }
    }

    index = 0;
    printf("Ordenado: ");
    while (index != total - 1) {
        printf("%d, ", array[index]);
        index++;
    }
    printf("%d", array[total-1]);
}



