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

int main(){
    double a[N][N] = {
        {2, 3, (-1)},
        {3, 4, 0}
    },
           coef[N], k;
    int cima = 0;
    double y, segundo, tercero, x;

    // Normalizo la fila n
    // Apunto el coeficiente n
    // Busco los 0's en las filas inferiores
    //    Resto a la fila i la fila n multiplicada por ain

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

     /*for (int f=+1; f<N; f++){
          k = a[f][n];
     }*/

    y = a[1][2] / a[1][1];
    segundo = (a[0][1]) * y;
    tercero = a[0][2];
    x = ((((-1) * segundo) + tercero) / a[0][0]);


    printf("La incógnita x vale: %lf\n", x);
    printf("La incógnita y vale: %lf\n", y);


    return EXIT_SUCCESS;
}
