#include <stdio.h>
#include <stdlib.h>

int main(){

    char nombre[16];
    char hexadecimal[16];
    int num;

    printf("Entero: ");
    scanf(" %i", &num);
    scanf(" %s", nombre);
    printf("[%i] => %s.\n", num, nombre);

    printf("Hexadecimal: ");
    scanf(" %[0-9a-fA-F]", hexadecimal);
    printf("0x%sh\n", hexadecimal);

    scanf(" %[^a-f]", hexadecimal); //Conjunto de seleccion inverso

    scanf(" %[^\n] ", nombre);
    fgets(nombre, 16, stdin); //tuberia de la que se lee

    scanf(" %i/%i%*i", &dia, &mes, &ano); // Caracter sin asignarse
    return EXIT_SUCCESS;
}
