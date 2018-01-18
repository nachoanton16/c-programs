#include <stdio.h>
#include <stdlib.h>

int es_par(int num){
    return !(num%2);
}

/*void pedir(int * n1){
    printf("Escribe un número entero: ");
    scanf(" %i", n1);
}
*/
int main(){
/*    int n1;*/

    if(es_par(2))
        printf("Es par. \n");
    else
        printf("Es impar. \n");

return EXIT_SUCCESS;
}
