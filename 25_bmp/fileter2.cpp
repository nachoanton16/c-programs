#include <stdio.h>
#include <stdlib.h>
#include "bmp.h"

#define UMBRAL 130

const char *source= "a.bmp";
const char *destin= "b.bmp";


int main(){
    FILE *pbmp = NULL;
    Header header;
    Color imagen[1280 * 697];
    int pixels = 1280 * 697;

    /* Leer el original */
    if (!(pbmp = fopen(source, "r"))){
        fprintf( stderr, "No hay imagen a.bmp de partida.\n" );
        return EXIT_FAILURE;
    }
    fread(&header, sizeof(Header), 1, pbmp);
    fseek(pbmp, header.bmp.data_offset, SEEK_SET);
    fread(imagen, sizeof(Color), pixels, pbmp);
    fclose(pbmp);

    /* Escala de grises */
    for (int i=0; i<pixels; i++){
        char media = imagen[i].r + imagen[i].g + imagen[i].b / 3;
        i++;
        char mediasig = imagen[i].r + imagen[i].g + imagen[i].b / 3;
        i = i-2;
        char medianant = imagen[i].r + imagen[i].g + imagen[i].b / 3;
        i++;
        char error = (mediasig-(char)UMBRAL)+(medianant-(char)UMBRAL);
        if((media+error)<(char)UMBRAL)
            media = (char)0;
        else
            media = (char)255;
        imagen[i].r = imagen[i].g = imagen[i].b = (media+medianant+mediasig);
    }

    /* Escribir la imagen */
     if (!(pbmp = fopen(destin, "r+"))){
        fprintf( stderr, "No hay imagen b.bmp de destino.\n" );
        return EXIT_FAILURE;
    }
    fseek(pbmp, header.bmp.data_offset, SEEK_SET);
    fwrite(imagen, sizeof(Color), pixels, pbmp);
    fclose(pbmp);

    return EXIT_SUCCESS;
}
