#include <stdio.h>
#include <stdlib.h>

double factorial(double n){
    if(n == 0){
        return 1;
    }

    return n * factorial(n-1);
}

double valore(int e){
    /*e = (1 / factorial());*/
    if(e == 4){
        return 1/factorial(e);
    }
    return (1/factorial(e)) + valore(e+1);
}

int main(){

    long n;
    printf("Introduzca un número entero: ");
    scanf("%ld", &n);
    printf("%.2lf\n", valore(n));

    return EXIT_SUCCESS;
}
