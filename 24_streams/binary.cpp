#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 0x1234;

    FILE *pf = fopen("b.int", "wb");
    fwrite(&num, sizeof(int), 1, pf);
    /*fread*/

    fclose(pf);

return EXIT_SUCCESS;
}
