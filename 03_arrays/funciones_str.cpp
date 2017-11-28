#include <stdio.h>
#include <stdlib.h>

#define N 0x100

int main(){

    const char *p = "The wolrd is "; //Constante tipo cadena
    /*  Pequeña lección sobre punteros
    char const *p; // Puntero (dirección de memoria) a un constante Forma coherente de decir que el char es const.
    char * const p; //Puntero constante (fijo).
char const* const p; //Puntero fijo a una constante.
*/

//Puntero: Es una variable que contiene una dirección de memoria.

    char frase[N] = "a vampire.\n"; //Inicialización
    char *d = &frase[0];
    char *d = frase;


    d = &frase[2] //puntero apunta a v

    frase[2] == 'v'; //Notacion de matrices El contenido de frase[2] es 'v'
    *d == 'v'; //Notacion de punteros El contenido de la variable d es 'v'
    *(d+2) == 'm'; //El 2 está en aritmetica de punteros +2 char (el valor de la variable)

    printf(" d ocupa %lu bytes.\n", sizeof(d));

return EXIT_SUCCESS;
}
