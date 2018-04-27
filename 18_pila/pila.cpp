#include <stdio.h>
#include <stdlib.h>

#ifndef NDEBUG
  #define DEBUG(...) printf(__VA_ARGS__);
#else
  #define DEBUG(...)
#endif

#define N 0x100

typedef struct{
    int datos[N];
    int cima;
}Pila;

void push(int dato, Pila *que_pila){
    que_pila->datos[que_pila->cima] = dato;
    DEBUG("-> %5i\n", que_pila->datos[que_pila->cima]);
    que_pila->cima++;
}

int pop(Pila *que_pila){

    DEBUG("<- %5i\n", que_pila->datos[--que_pila->cima]);
    return que_pila->datos[que_pila->cima];
}

int main(){

    Pila numeros;
    numeros.cima = 0;

    push(3, &numeros);
    push(7, &numeros);
    pop(&numeros);
    push(8, &numeros);

return EXIT_SUCCESS;
}
