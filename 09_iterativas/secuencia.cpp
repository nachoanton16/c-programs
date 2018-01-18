#include <stdio.h>
#include <stdlib.h>

#define N 20

int suma(int n){
    return n+n-3;
}
int main(){

    for (int n=1; n<N; n++){
        printf(" %i", suma(n));
    }
    printf("\n");

    return EXIT_SUCCESS;
}
