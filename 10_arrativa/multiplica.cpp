#include <stdio.h>
#include <stdlib.h>

#define N 3
#define A 2

void ver(double a[A][A]){
    printf("\n");
    for (int f=0; f<A; f++){
        for (int c=0; c<A; c++)
            printf("%6.2lf", a[f][c]);
        printf("\n");
    }
    printf("\n");
}

void verb(double b[N][A]){
    printf("\n");
    for (int f=0; f<N; f++){
        for (int c=0; c<A; c++)
            printf("%6.2lf", b[f][c]);
        printf("\n");
    }
    printf("\n");
}

int main(){
    double a[A][A] = {
        {2, 3},
        {3, 4}
    };
 //          coef[N], k;

    double b[N][A] = {
        {1, 3},
        {2, 5},
        {3, 6}
    };

    double c[N][A] = {
    };

//    int cima = 0;

    ver(a);
    verb(b);

    /* for (int n=0; n<2; n++){
     *        coef[cima++] = k = a[n][n];
     *               for (int col=0; col<N; col++)
     *                      a[n][col] *= k;
     *                             for (int f=n+1; f<N; f++){
     *                                    k = a[f][n];
     *                                           for (int col=0; col<N; col++)
     *                                                  a[f][col] -= (a[n][col] * k);
     *                                                         }
     *                                                                ver(a);
     *                                                                       }*/
    /*
     *        for (int f=+1; f<N; f++){
     *               k = a[f][n];
     *                      }*/
    for (int uf=0; uf<A; uf++){
        for (int uc=0; uc<A; uc++){
            c[uf][uc]=0;
            for (int dc=0; dc<N; dc++){
                c[uf][uc] = a[uf][dc] * b[dc][uc];
            }
        }
    }

    verb(c);

    return EXIT_SUCCESS;
}
