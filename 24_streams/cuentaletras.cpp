#include <stdio.h>
#include <stdlib.h>

int main(){
    char caracter;
    bool fin;
    int contador = 0;
    FILE *leer_tubo;

    leer_tubo = fopen("libro.txt", "r");

    do{
        fin = feof(leer_tubo);
        fscanf(leer_tubo, "%c", &caracter);

        if(caracter == 'i')
            contador++;
    }
    while(!fin);
    printf("Hay %i letras 'i' en el texto.\n", contador);

    fclose(leer_tubo);

    return EXIT_SUCCESS;
}
