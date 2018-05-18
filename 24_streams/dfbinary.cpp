#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    FILE *pf = fopen("b.int", "rb");
    fread(&num, sizeof(int), 1, pf);
    /*fread*/
    fclose(pf);

    printf("%i\n", num);

return EXIT_SUCCESS;
}
