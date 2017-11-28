#include <stdio.h>
#include <stdlib.h>

int main(){
    char nombre[256];
    char apellido1[256];
    char apellido2[256];

    printf("Dime tu nombre completo: ");
    scanf(" %s%s%s", nombre, apellido1, apellido2);
    printf("Hola, %s %s %s.\n", nombre, apellido1, apellido2);
return EXIT_SUCCESS;
}
