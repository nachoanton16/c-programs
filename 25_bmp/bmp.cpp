#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

typedef struct {
    char      signature[2];
    unsigned  size;
    unsigned short reserved1;
    unsigned short reserved2;
    unsigned  data_offset;
} BMPHeader;

typedef struct{
    unsigned int size;
    int width;
    int height;
    unsigned short int planes;
    unsigned short int bits;
    unsigned int compression;
    unsigned int imagesize;
    int xresolution;
    int yresolution;
    unsigned int ncolours;
    unsigned int importantcolours;
}InformationHeader;

void show(BMPHeader header) {
    printf("Signature:       %c%c\n",     header.signature[0], header.signature[1]);
    printf("Tamaño:          %i\n",       header.size);
    printf("Datos de imagen: %i (%Xh)\n", header.data_offset, header.data_offset);
}

void showing(InformationHeader header) {
    printf("Tamaño cabecera:          %c\n",     header.size);
    printf("Ancho:                    %i\n",       header.width);
    printf("Alto:                     %i\n",       header.height);
    printf("Planos:                   %i\n",       header.planes);
    printf("Bits:                     %i\n",       header.bits);
    printf("Compresión:               %i\n",       header.compression);
    printf("Tamaño en bytes:          %i\n",       header.imagesize);
    printf("Resolución X:             %i\n",       header.xresolution);
    printf("Resolución Y:             %i\n",       header.yresolution);
    printf("Número de colores en la paleta:             %i\n",       header.ncolours);
    printf("Número de colores usados:                   %i\n",       header.importantcolours);
}

int main(){
    const char *filename= "a.bmp";
    FILE *pbmp = NULL;
    BMPHeader header;

    if (!(pbmp = fopen(filename, "r"))){
        fprintf( stderr, "No he encontrado el fichero.\n"  );
        return EXIT_FAILURE;
    }
    fread(&header, sizeof(BMPHeader), 1, pbmp);
    fclose(pbmp);

    show(header);

    return EXIT_SUCCESS;
}
