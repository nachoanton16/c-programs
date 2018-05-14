#include <stdio.h>
#include <stdlib.h>

#ifndef DEBUG
  #define DEBUG(...) printf(__VA_ARGS__);
#else
  #define DEBUG(...)
#endif

#define N 20

typedef struct{
    double x;
    double y;
} Coor2;

typedef struct{
    Coor2 pos;
    Coor2 vel;
    Coor2 acc;
    void (*haz)();
} Coordenadas;

typedef struct{
    Coordenadas data[N];
    int cima;
} Pila;

void push(Coordenadas dato, Pila *que_pila){
  que_pila->data[que_pila->cima++] = dato;
}
Coordenadas pop(Pila *que_pila){
    return que_pila->data[--que_pila->cima];
}

void haz_primero(){
    printf("Esta es la primera función\n");
}
void haz_segundo(){
    printf("Esta es la segunda función\n");
}

void haz_tercero(){
    printf("Esta es la tercera función\n");
}

void haz_cuarto(){
    printf("Esta es la cuarta función\n");
}

void haz_quinto(){
    printf("Esta es la quinta función\n");
}

int main(){
    Pila datos;
    datos.cima = 0;

    Coordenadas dato1 = {{0,0}, {1,1}, {2, 2}, haz_primero}, dato2 = {{0,0}, {1,1}, {2, 2}, haz_segundo}, dato3 = {{0,0}, {1,1}, {2, 2}, haz_tercero}, dato4 = {{0,0}, {1,1}, {2, 2}, haz_cuarto}, dato5 = {{0,0}, {1,1}, {2, 2}, haz_quinto};

    push(dato1, &datos);
    push(dato2, &datos);
    push(dato3, &datos);
    push(dato4, &datos);
    push(dato5, &datos);

    while(datos.cima != 0){
        Coordenadas devuelve = pop(&datos);
        devuelve.haz();
    }

    return EXIT_SUCCESS;
}
