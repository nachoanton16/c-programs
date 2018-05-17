#include <stdio.h>
#include <stdlib.h>

int main(){
    /*char caracter;*/
    FILE *imprime_tubo;

    imprime_tubo = fopen("libro.txt", "r");

    fseek(imprime_tubo, 100, SEEK_SET);
    /*caracter = */printf("%li\n", ftell(imprime_tubo));

    /*printf("%c\n", caracter);*/

    fclose(imprime_tubo);


return EXIT_SUCCESS;
}
