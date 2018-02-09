#include <stdio.h>
#include <stdlib.h>

#define N 3

void ver(double a[N][N]){
    printf("\n");
    for (int f=0; f<N; f++){
        for (int c=0; c<N; c++)
            printf("%6.2lf", a[f][c]);
        printf("\n");
    }
    printf("\n");
}

int main(){
    double a[N][N] = {
        {4, 7, 1},
        {6, 2, 3}
    },
           coef[N], k;
    int cima = 0;
    double primero, y, segundo, tercero, x; 

    // Normalizo la fila n
    // Apunto el coeficiente n
    // Busco los 0's en las filas inferiores
    //    Resto a la fila i la fila n multiplicada por ain


    primero = a[0][0];

    ver(a);

    for (int n=0; n<1; n++){
        coef[cima++] = k = a[n][n];
        for (int col=0; col<N; col++)
            a[n][col] /= k;
        for (int f=n+1; f<N; f++){
            k = a[f][n];
            for (int col=0; col<N; col++)
                a[f][col] -= (a[n][col] * k);
        }
        ver(a);
    }

    y = a[1][1] / a[1][2];
    segundo = (a[0][1] * primero) * y;
    tercero = a[0][2] * primero;
    x = ((-1) * segundo) / tercero;


    printf("La incógnita x vale: %lf\n", x);
    printf("La incógnita y vale: %lf\n", y);


    return EXIT_SUCCESS;
}
