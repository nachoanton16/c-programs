#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x100
int main(){

    char array[N];
    char *array2 = NULL;
    int longitud;

    printf("Dime tu nombre:\t");
    fgets(array, N, stdin);
    printf("Hola %s", array);

    longitud = strlen(array)-1;

    array2 = (char *) malloc((longitud + 1) * sizeof(char));

    strncpy(array2, array, longitud);

    free(array2);

    return EXIT_SUCCESS;
}
