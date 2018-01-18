#include <stdio.h>
#include <stdlib.h>

#define N 3
int main(){
    int pregunto;
    printf ("Cuantos cuadrados quiere: ");
    scanf (" %i", &pregunto);
    for (int cuadrado=0; cuadrado<pregunto; cuadrado++){
        for (int f=0; f<N; f++){
            for (int c=0; c<N; c++){
                printf ("*");
            }
            for (int c1=4; c1<7; c1++){
                printf (" ");
            }
            for (int c2=8; c2<11; c2++){
                printf ("*");
            }
            printf ("\n");
        }
        for (int f1=0; f1<N; f1++){
            for (int c=0; c<N; c++){
                printf (" ");
            }
            for (int c1=4; c1<7; c1++){
                printf ("*");
            }
            for (int c2=8; c2<11; c2++){
                printf (" ");
            }
            printf ("\n");
        }
        for (int f=0; f<N; f++){
            for (int c=0; c<N; c++){
                printf ("*");
            }
            for (int c1=4; c1<7; c1++){
                printf (" ");
            }
            for (int c2=8; c2<11; c2++){
                printf ("*");
            }
            printf ("\n");
        }
    }
    return EXIT_SUCCESS;
}
