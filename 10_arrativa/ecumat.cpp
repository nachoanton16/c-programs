#include <stdio.h>
#include <stdlib.h>

#define N 3
#define A 2

void ver(double a[N][N]){
    printf("\n");
    for (int f=0; f<N; f++){
        for (int c=0; c<N; c++)
            printf("%6.2lf", a[f][c]);
        printf("\n");
    }
    printf("\n");
}

void verb(double b[N][N]){
    printf("\n");
    for (int f=0; f<N; f++){
        for (int c=0; c<N; c++)
            printf("%6.2lf", a[f][c]);
        printf("\n");
    }
    printf("\n");
}

void verc(double c[N][N]){
    printf("\n");
    for (int f=0; f<N; f++){
        for (int c=0; c<N; c++)
            printf("%6.2lf", a[f][c]);
        printf("\n");
    }
    printf("\n");
}

int main(){
    double a[A][A] = {
        {2, 3},
        {3, 4}
    },
           coef[N], k;

    double b[A][N] = {
        {1, 3, 6},
        {2, 5, 4}
    };

    double c[A][N] = {
        {0, 0, 0},
        {0, 0, 0}
    };

    int cima = 0;

    ver(a);
    verb(b);

    /* for (int n=0; n<2; n++){
       coef[cima++] = k = a[n][n];
       for (int col=0; col<N; col++)
       a[n][col] *= k;
       for (int f=n+1; f<N; f++){
       k = a[f][n];
       for (int col=0; col<N; col++)
       a[f][col] -= (a[n][col] * k);
       }
       ver(a);
       }*/
    /*
       for (int f=+1; f<N; f++){
       k = a[f][n];
       }*/
    for (int uf=0; uf<2; uf++){
        for (int uc=0; uc<2; uc++){
            for (int dc=0; dc<3; dc++){
                c[uf][dc] = a[uf][uc] * b[uf][dc];
            }
        }
    }

    verc(c);

    return EXIT_SUCCESS;
}
