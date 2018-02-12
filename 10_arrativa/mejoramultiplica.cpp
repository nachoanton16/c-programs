#include <stdio.h>
#include <stdlib.h>

int G, H, I, J;

void ver(double a[G][H]){
    printf("\n");
    for (int f=0; f<G; f++){
        for (int c=0; c<H; c++)
            printf("%6.2lf", a[G][H]);
        printf("\n");
    }
    printf("\n");
}

void verb(double b[I][J]){
    printf("\n");
    for (int f=0; f<I; f++){
        for (int c=0; c<J; c++)
            printf("%6.2lf", b[I][J]);
        printf("\n");
    }
    printf("\n");
}

void verc(double c[H][I]){
    printf("\n");
    for (int f=0; f<H; f++){
        for (int c=0; c<I; c++)
            printf("%6.2lf", c[H][I]);
        printf("\n");
    }
    printf("\n");
}

int main(){
    double a[G][H] = {
    };

    double b[I][J] = {
    };

    double c[H][I] = {
    };

    int g, h, i, j;

    printf();
    scanf();

    g
    h
    i
    j
        

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
