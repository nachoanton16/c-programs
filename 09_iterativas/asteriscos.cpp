#include <stdio.h>
#include <stdlib.h>

#define A 5
int main(){
/*        for (int s=0; s<A; s++)
            printf("*");
        printf("\n");*/
    for (int s=0; s<A; s++) {
        for (int a=0; a<A; a++)
          printf("*");
        printf("\n");
    }

return EXIT_SUCCESS;
}
