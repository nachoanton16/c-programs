#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x100
int main(){
    char cadena[N];
    char *cadena2;
    int longitud;

    printf("Dime tu nombre:\t");
    fgets(cadena, N, stdin);
    printf("Bienvenido %s", cadena);

    longitud = strlen(cadena)-1;
    cadena2 = (char *) malloc((longitud + 1) * sizeof(char));
    strncpy(cadena2, cadena, longitud);
    free(cadena2);

return EXIT_SUCCESS;
}
