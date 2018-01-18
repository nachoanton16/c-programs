#include <stdio.h>
#include <stdlib.h>

void pedirnumeros(double *op1, double *op2){

    printf("Introduce el primer número: ");
    scanf(" %lf", op1);
    printf("Introduce el segundo número: ");
    scanf(" %lf", op2);
}
double suma(double op1, double op2){return op1 + op2;}
int main(){
    double op1, op2, resultado;
    pedirnumeros(&op1, &op2);
    resultado=suma(op1, op2);
    printf("%.2lf\n", resultado);

return EXIT_SUCCESS;
}
