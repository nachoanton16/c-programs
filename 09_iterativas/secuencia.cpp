#include  <stdio.h>
#include <stdlib.h>

#define N 20

int main(){
    int n[N];
    int i=1;
    n[0]=i;
    for(int i2=2; i2<N; i2++){
        n[i2]= n[i2 - 1] + n[i2 - 2];
        printf(" %i", n[i2]);
            printf(",");
    }
    printf("\n");

    return 0;
}
