#include <stdio.h>
#include <stdlib.h>

void perfectnum(int num, int divisor){
    if(num % divisor == 1){
        printf("0\n");
    }

    if(divisor == 1){
        printf("0\n");
        return;
    }

    if(num % divisor == 0){
        printf("%i\n", divisor);
    }
    return perfectnum(num, divisor-1);
}

int main(){
    int num = 0, divisor = 0;
    printf("Introduzca un número para conocer sus divisores: ");
    scanf("%i", &num);
    divisor = num-1;
    perfectnum(num, divisor);

    return EXIT_SUCCESS;
}
