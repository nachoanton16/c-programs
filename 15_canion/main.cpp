#include <stdio.h>
#include <stdlib.h>
#include <strings.h>


#define M 0x10
#define N 0x40
#define MAX_VIDAS 3
#define VIDAS 3
#define POS_VACIA " "
#define POS_LLENA "🛸'"
#define J1 "🎮"

enum {ACTUAL, NUEVA, PANTALLAS};

void rellena(int matriz[M][N]){
    system("clear");
    int x, y;

    for(int n = 0; n<2; n++){
        x = rand() % M;
        y = rand() % N;
        matriz[x][y] = 1;

    }
}

void pintar(int matriz[M][N]){
    for(int f=0; f<M; f++){
        for(int c=0; c<N; c++)
            printf("%s", matriz[f][c]? POS_LLENA);
    }

}

int main(){

    int pantalla[PANTALLAS][M][N];
    int (*actual)[M][N] = &pantalla[ACTUAL];
    int (*nueva)[M][N] = &pantalla[NUEVA];
    int (*temporal)[M][N];
    bzero(pantalla[ACTUAL], sizeof(pantalla[ACTUAL]));

    system("toilet --gay -fpagga Welcome to the CANION");

    while(VIDAS >= 1){
        system("clear");
        pintar(pantalla[ACTUAL]);


    }


    return EXIT_SUCCESS;
}
