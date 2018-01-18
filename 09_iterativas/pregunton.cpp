#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#define MAX 3

int main(){
    int numero = 0;
    int oportunidades = MAX;

/*    while(numero<1 || numero>3){
        printf("Escribe un número del 1 al 3: ");
        scanf(" %i", &numero);
    }*/

    do{
        __fpurge(stdin); /*Limpiar el tubo de entrada de letras*/
        printf("Escribe un número del 1 al 3: ");
        scanf(" %i", &numero);
        oportunidades--;
    } while((numero<1 || numero>3) && oportunidades);

    return EXIT_SUCCESS;
}
