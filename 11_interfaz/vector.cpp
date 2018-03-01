#include <stdio.h>
#include <stdlib.h>

int main(){

    //leer el vector
    //leer pero no guardar corchetes ni parentesis
    //leer la primera coord
    //leer pero no guardar coma
    //leer la segunda coord
    //leer pero no guardar corchetes ni parentesis
    //vector nuevo o fin de introduccion de datos
    //imprimir todos los vectores introducidos

    int coordenada = 0;
    int mirar;
    bool ultimo = false;
    double nueva_coordenada;
    double *vector = NULL;
    char term;
    printf("Ejemplo [1, 3, 8]\n");
    printf("Introduce tu vector:\n");

    do{
        do{
            scanf(" %*1[([]");
            scanf(" %lf %*1[,.]", &nueva_coordenada);
            coordenada++;
            vector = (double *) realloc(vector, (coordenada+1) * sizeof(double));
            vector[coordenada++] = nueva_coordenada;
        } while(scanf(" %1[])]", &term) == 0);

        mirar = getc(stdin);
        if (mirar == '\n'){
            mirar = getc(stdin);
            if(mirar == '\n')
                ultimo = true;
        }

        ungetc(mirar, stdin);

    } while(!ultimo);

    printf("\n");
for (int comp=0; comp<coordenada; comp++)
      printf("%7.2lf", vector[comp]);
    printf("\n");

    return EXIT_SUCCESS;
}
