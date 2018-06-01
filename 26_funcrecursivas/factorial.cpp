#include <stdio.h>
#include <stdlib.h>

long factorial(long n){
    if(n == 0){
        return 1;
    }

    return n * factorial(n-1);
}

int main(){

    long n;
    printf("Introduzca un número entero: ");
    scanf("%ld", &n);
    printf("%ld\n", factorial(n));

    return EXIT_SUCCESS;
}
