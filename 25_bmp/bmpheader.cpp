#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

typedef struct {
  char signature[2];
  int size;
  char reserved1[2];
  char reserved2[2];
  int offset;
} BMPHeader;

void imprime(BMPHeader header){
    printf("%c %c\n", header.signature[0], header.signature[1]);
    printf("%i\n", header.size);
    printf("%c %c\n", header.reserved1[0], header.reserved1[1]);
    printf("%c %c\n", header.reserved2[0], header.reserved2[1]);
    printf("%i\n", header.offset);
}

int main(){

    FILE *bmp = NULL;
    BMPHeader header;

    if (!(bmp = fopen("imagen.bmp", "r"))){
      fprintf(stderr, "No se ha encontrado el fichero.\n");
      return EXIT_FAILURE;
    }
    fread(&header, sizeof(BMPHeader), 1, bmp);
    fclose(bmp);

    imprime(header);

    return EXIT_SUCCESS;
}
