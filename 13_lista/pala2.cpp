#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x100

int main(){

    char **l;
    char buffer[N];
    int len;

    printf("Nombre: ");
    scanf(" %[^\n]", buffer);
    len = strlen(buffer);

    l = (char **) malloc(sizeof(char *));

    *l = (char *) malloc (len + 1);
    strncpy(*l, buffer, N);

    printf("Nombre: ");
    scanf(" %[^\n]", buffer);
    len = strlen(buffer);

    l = (char **) realloc(l, 2*sizeof(char *));
    *(l+1) = (char *) malloc (len + 1);
    strncpy(*(l+1), buffer, N);

    printf("Nombre: ");
    scanf(" %[^\n]", buffer);
    len = strlen(buffer);

    l = (char **) realloc(l, 3*sizeof(char *));
    *(l+2) = (char *) malloc (len + 1);
    strncpy(*(l+2), buffer, N);

    printf("Nombre: ");
    scanf(" %[^\n]", buffer);
    len = strlen(buffer);

    l = (char **) realloc(l, 4*sizeof(char *));
    *(l+3) = (char *) malloc (len + 1);
    strncpy(*(l+3), buffer, N);

    printf("Nombre: ");
    scanf(" %[^\n]", buffer);
    len = strlen(buffer);

    l = (char **) realloc(l, 5*sizeof(char *));
    *(l+4) = (char *) malloc (len + 1);
    strncpy(*(l+4), buffer, N);

 
 
    printf(" Hola, %s\n", *l);
    printf(" Hola, %s\n", *(l+1));
    printf(" Hola, %s\n", *(l+2));
    printf(" Hola, %s\n", *(l+3));
    printf(" Hola, %s\n", *(l+4));



    free(*l);
    free(*(l+1));
    free(*(l+2));
    free(*(l+3));
    free(*(l+4));
    free(l);

    return EXIT_SUCCESS;
}


