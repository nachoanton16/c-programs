#include <stdio.h>
#include <stdlib.h>

int main(){
    char letra;

    printf("Mi moto alpina derrapante.");

    do{
        printf("Introduza la vocal por la que quiere sustituir en la frase:");
        scanf(" %s", &letra);
    }
    while((letra != 'a') || (letra != 'i') || (letra != 'o') || (letra != 'u') || (letra != 'e'));

    switch(letra){
        case 1:
            printf("Ma mata alpana darrapanta.");
            break;
        case 2:
            printf("Mi miti ilpini dirripinti.");
            break;
        case 3:
            printf("Mo moto olpono dorroponto.");
            break;
        case 4:
            printf("Mu mutu ulpunu durrupuntu.");
            break;
        case 5:
            printf("Me mete elpene derrepente.");
            break;
    }

    return EXIT_SUCCESS;
}
