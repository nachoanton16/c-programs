#include <stdio.h>
#include <stdlib.h>

int main(){
    int bit1, bit2, decimal;


    printf("Bit 1: ");
    scanf(" %i", &bit2);

    if (bit2 != 1 && bit2 != 0){
        printf("Debe introducir un 0 o un 1: ");
        scanf(" %i", &bit2);
    }

    printf("Bit 2: ");
    scanf(" %i", &bit1);

    if (bit1 != 1 && bit1 != 0){
        printf("Debe introducir un 0 o un 1: ");
        scanf(" %i", &bit1);
    }

    if (bit1 == 1){
        decimal = 2;
    }
    else {
        decimal = 0;
    }

    if (bit2 == 1){
        decimal++;
    }

    printf("El numero es %i.\n", decimal);
    return EXIT_SUCCESS;
}
