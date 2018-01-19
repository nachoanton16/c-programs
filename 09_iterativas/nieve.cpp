#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=3;
    int i;

    printf("Cuantos cuadrados quiere: ");
    scanf(" %i", &i);

    for (int f=0; f<n; f++){
        for (int r=0; r<i; r++){
            for(int c=r? 1:0; c<n; c++){
                if (c==f)
                    printf("*");
                else
                    printf(" ");
            }


        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
