#include <stdio.h>
#include <stdlib.h>

#define N 3

int main(){

    int i;
    printf("Cuantos cuadrados quiere: ");
    scanf(" %i", &i);

    for (int f=0; f<N; f++){
        for (int r=0; r<i; r++){
            for(int c=r? 1:0; c<N; c++){
                if (r%2==0){
                    if (f==c){
                        printf("*");
                    }
                    else
                        printf(" ");
                }
                else{
                    if (f+c == N)
                        printf("*");
                    else
                        printf(" ");
                }
            }
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
