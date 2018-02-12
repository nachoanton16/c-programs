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

void verb(double b[A][N]){
    printf("\n");
    for (int f=0; f<A; f++){
        for (int c=0; c<N; c++)
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

    double b[A][N] = {
        {1, 3, 6},
        {3, 6, 2}
    };

    double c[A][N] = {
    };

    ver(a);
    verb(b);

    for (int uf=0; uf<N; uf++){
        for (int uc=0; uc<N; uc++){
            c[uf][uc]=0;
            for (int dc=0; dc<A; dc++){
                c[uf][uc] += a[uf][dc] * b[dc][uc];
            }
        }
    }

    verb(c);

    return EXIT_SUCCESS;
}
