#include <stdio.h>
#include <stdlib.h>

int main(){
    double lado,
        area,
        perimetro;

    system("toilet --gay -fpagga CUADRADO");

    /* Entrada de datos */
    printf("Lado:");
    scanf(" %lf", &lado);

    /*  Calculos */
    area= lado * lado;
    perimetro= 4 * lado;

    /* Salida de datos */
    printf( "Area: %8.2f\n"
            "Perimetro: %8.2f\n",
            area, perimetro );

    return EXIT_SUCCESS;
}
