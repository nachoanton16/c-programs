#include <stdio.h>
#include <stdlib.h>


void ver(double a[A][A]){
    printf("\n");
    for (int f=0; f<A; f++){
        for (int c=0; c<A; c++)
            printf("%6.2lf", a[f][c]);
        printf("\n");
    }
    printf("\n");
    system("clear");
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

bool otro_dato = true;


    double *a[][] = NULL;
    for (int i=1; otro_dato; i++){
        a = (double *) realloc(a, i*sizeof(double));
        *(a+i-1) = i;
    }

    double *b[][] = NULL;
    for (int i=1; otro_dato; i++){
        b = (double *) realloc(b, i*sizeof(double));
        *(b+i-1) = i;
    }


    double *c[][] = NULL;

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
