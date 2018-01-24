#include <stdio.h>
#include <stdlib.h>

#define N 3
#define A 18

int main(){

    int num, num1, num2, num3, num4, num5, numfin, numfin1, numfinal;
    int n[A];
    int a[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int desplaz=0; desplaz<N; desplaz++){
        for (int elem=0; elem<N; elem++){
            n[elem] = a[elem%N][(desplaz+elem)%N];
        }
        printf("%i", n[0]);
        printf("%i", n[1]);
        printf("%i", n[2]);

        num = n[0] * n[1] * n[2];
        num1 = n[3] * n[4] * n[5];
        num2 = n[6] * n[7] * n[8];

        for (int elem=0; elem<N; elem++){
            n[elem] = a[elem%N][(N-1-(desplaz+elem))%N];
        }
        printf("%i", n[9]);
        printf("%i", n[10]);
        printf("%i", n[11]);

        printf("\n");
        num3 = n[9] * n[10] * n[11];
        num4 = n[12] * n[13] * n[14];
        num5 = n[15] * n[16] * n[17];
    }

    numfin = num + num1 + num2;
    numfin1 = num3 + num4 + num5;
    numfinal = numfin - numfin1;

    printf("%i", numfinal);

    printf("\n");



    return EXIT_SUCCESS;
}
