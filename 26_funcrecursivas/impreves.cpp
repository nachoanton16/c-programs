#include <stdio.h>
#include <stdlib.h>

void imprime(char *letra){
    if(*letra=='\0')
        return;

    imprime(letra+1);
    printf("%c", *letra);
}

int main(){
    char frase[] = "Mi moto alpina derrapante\n";
    char *letra = frase;
    imprime(letra);

    return EXIT_SUCCESS;
}
