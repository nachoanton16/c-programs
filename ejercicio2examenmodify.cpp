#include <stdio.h>
#include <stdlib.h>

#define N 0x100

int main(){
    int matriz[N];
    int cuentadivisores = 0;
    bool primo = false;
    int copianumero;

    do{
        for( int numero = 1; numero<N; numero++){
            for(int numerodivide =  1; numerodivide<numero; numerodivide++){
                if(numero%numerodivide == 0){
                    cuentadivisores++;
                }
                if(cuentadivisores >= 3)
                    primo = false;
                else
                    for(int c=0; c<N; c++){
                        matriz[c] = numero;
                        primo = true;
                    }

            }
            copianumero = numero;
        }
    }

    while(copianumero <= N);
    /*       for(int numero = 1; numero<N; numero++){
             for(int numerodivide =  1; numerodivide<numero; numerodivide++){
             if(numero%numerodivide == 0){
             cuentadivisores++;
             }

             if(cuentadivisores >= 3)
             primo = false;
             else
             for(int c=0; c<N; c++){
             matriz[c] = numero;
             primo = true;
             }
             }
             }*/
    for(int c=0; c<N; c++)
        printf("%i\n", matriz[c]);

    return EXIT_SUCCESS;
}
