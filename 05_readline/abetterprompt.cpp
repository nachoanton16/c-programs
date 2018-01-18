#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

#define N 0x100

int main(){

    char buffer[N];

    printf("Nombre: ");
    fgets(buffer, N, stdin);

    readline("Nombre: ");


return EXIT_SUCCESS;
}
