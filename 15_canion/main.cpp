#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <curses.h>
#include <ncurses.h>
#include <unistd.h>
#include <signal.h>


#define N_MOVES 1
#define M 0x10
#define N 0x40
#define MAX_VIDAS 3
#define VIDAS 3
#define POS_VACIA " "
#define POS_LLENA "🛸"
#define J1 "🎮"
#define RAYO "|"
#define POS_VACIADISP ""
#define POS_LLENADISP "🛸"

enum {ACTUAL, NUEVA, PANTALLAS};

int x = 0, y = 0, dx = 0, dy = 0;

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
            printf("%s", matriz[f][c]? POS_LLENA : POS_VACIA);
    }

}

/*void pintar_disp(int matriz[M][N]){
    for(int f=0; f<M; f++){
        for(int c=0; c<N; c++)
            printf("%s", matriz[f][c]? POS_LLENADISP : POS_VACIADISP);
    }
}
*/
void muerete_nave(int x, int y){
if(x == navx)

if(y == navy)
}

void changecords(int nx, int ny) {
    int x, y;
    x = nx;
    y = ny;
    move (x, y);
    }

void movimiento_nave(){
    int ch = getch();
    switch(ch) {
        case KEY_LEFT:
            changecords(x - N_MOVES, y);
            break;
        case KEY_RIGHT:
            changecords(x + N_MOVES, y);
            break;
    }
}

void movimiento_disparo(){
    int ch = getch();
    switch(ch) {
        case KEY_LEFT:
            changecords(x, y - N_MOVES);
            break;
        case KEY_RIGHT:
            changecords(x, y + N_MOVES);
            break;
    }
}

void dispara(){
int tec = getch();
switch(tec) {
    case /*ESPACIADORA*/:
        changecords(dx, dy);

case /*ESPACIADORA*/:
}
}

int main(){

    int x = 0, y = 0;
    int pantalla[PANTALLAS][M][N];
    int (*actual)[M][N] = &pantalla[ACTUAL];
    int (*nueva)[M][N] = &pantalla[NUEVA];
    int (*temporal)[M][N];

    bzero(pantalla[ACTUAL], sizeof(pantalla[ACTUAL]));

    //system("toilet --gay -fpagga ♪ Welcome to the CANION ♪ ");

    initscr();
    keypad(stdscr, TRUE);
    noecho();
    /*
       while(VIDAS >= 1){
       pintar(pantalla[ACTUAL]);
       */
    move(x, y);
    refresh();

return EXIT_SUCCESS;
}
