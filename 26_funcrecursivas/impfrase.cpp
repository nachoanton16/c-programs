#include <stdio.h>
#include <stdlib.h>

void imprime(char *letra){
    if(*letra=='\0')
        return;

    printf("%c", *letra);
    imprime(letra+1);
}

int main(){
    char frase[] = "Mi moto alpina derrapante\n";
    char *letra = frase;
    imprime(letra);

    return EXIT_SUCCESS;
}
