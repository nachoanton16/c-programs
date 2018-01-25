#include <stdio.h>
#include <stdlib.h>

#define N 3
int main(){
    //Normalizo la fila n;
    //(Dividir fila n/columna n);
    //Apunto el coeficiente;
    //Busco los ceros en las columnas n de todas las filas inferiores;
    //En la fila i le resto a_in la fila n;

    double coef[N];
    double matriz[N][N] = {
        {2, 6, 4},
        {6, 4, 5},
        {8, 2, 7}
    };
    double matriz1[N][N] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };

    for (int f=0; f<1; f++){
        for (int c=0; c<3; c++){
            matriz1[f][c] = f/c;
        }
    }
    coef[0]=matriz[0][0];
    for (int f=0; f<3; f++){
        for (int c=0; c<3; c++){
            matriz[]
        }
    }

    return EXIT_SUCCESS;
}
