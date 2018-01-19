#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    printf("De que tamaño quiere el lado: ");
    scanf(" %i",&n);
    printf("\n");

    for(int f=0; f<n; f++){
        for(int c=n; c>f; c--)
            printf("*");
        printf("\n");
    }
        return EXIT_SUCCESS;
    }
