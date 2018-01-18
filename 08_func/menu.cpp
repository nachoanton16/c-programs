#include <stdio.h>
#include <stdlib.h>

void menu(int *opcion) {
    printf("1.Pedidos.\n");
    printf("2.Lista de deseos.\n");
    printf("3.Atención al cliente.\n");
    printf("Elija una opcion: ");
    scanf("%i", opcion);

    while (*opcion > 3){
        printf("Opcion invalida.");
        scanf(" %i", opcion);

  }
}
int main(){
   int opcion;
   menu(&opcion);
   printf("Ha elegido la opcion %i.\n", opcion);

return EXIT_SUCCESS;
}
