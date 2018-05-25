#include <stdlib.h>
#include <stdio.h>
#include <ncurses.h>
#include <time.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include <curses.h>

#define ESC 27
#define ARRIBA 1
#define DERECHA 2
#define ABAJO 3
#define IZQUIERDA 4
#define MAX_LENGTH 5
#define SNAKE_CHARACTER '*'
#define FOOD_CHARACTER '+'
#define WALL_CHAR '='
#define MIN 1
#define POINT 30
#define N 30

int finish = 0;
int row, col;
int direccion;
int snake_length = 1;
int comida = 1;
int score = 0;

struct Coordenadas{
    int x;
    int y;
} snake[MAX_LENGTH], cola, nuevacola, last, last2, food, scored;

void inicio(){
    getmaxyx(stdscr, row, col);
    srand(time(NULL));
}

void inicio_snake(){
    snake[0].x= row/2;
    snake[0].y= col/2;
}

void dibujar_snake(){

    for(int i=0 ; i<snake_length; i++){
        mvprintw(snake[i].x, snake[i].y,"%c", SNAKE_CHARACTER);
    }
}

void dibujar_comida(){
    if((food.y > 1) && (food.x > 1))
        mvprintw(food.x, food.y, "%c", FOOD_CHARACTER);

}

void drawLevel() {
    for (int i=0; i<row; i++) {
        mvaddch(i, 1, WALL_CHAR);
        mvaddch(i, col-1, WALL_CHAR);
    }
    for (int i=1; i<col-1; i++) {
        mvaddch(1, i,WALL_CHAR);
        mvaddch(row-1, i, WALL_CHAR);
    }
}

void drawScore(){
    scored.x = 0;
    scored.y = col/2.5;
    mvprintw(scored.x, scored.y, "Score: %i", score);
}

void comer(){
    if((snake[0].x == food.x)&&(snake[0].y == food.y)){
        cola = snake[snake_length-1];

        nuevacola.x = cola.x+1;
        nuevacola.y = cola.y+1;

        snake[snake_length++] = nuevacola;
        score += POINT;

        food.y = rand()%(col+1);
        food.x = rand()%(row+1);
        dibujar_comida();
    }
}

void obtener_tecla(){
    int tecla = getch();
    switch(tecla){
        case KEY_UP:
            direccion = ARRIBA;
            break;
        case KEY_DOWN:
            direccion = ABAJO;
            break;
        case KEY_LEFT:
            direccion = IZQUIERDA;
            break;
        case KEY_RIGHT:
            direccion = DERECHA;
            break;
    }
}

void cambiar_direccion(){

    last = snake[0];
    switch(direccion){
        case IZQUIERDA:
            snake[0].y--;
            break;
        case ABAJO:
            snake[0].x++;
            break;
        case DERECHA:
            snake[0].y++;
            break;
        case ARRIBA:
            snake[0].x--;
            break;

    }
    if(snake[1].x == snake[0].x && snake[1].y == snake[0].y)
        finish = 2;
    for(int i=1;i<snake_length;i++){
        last2 = snake[i];
        snake[i] = last;
        last = last2;
    }
}

void bienvenida(){
    clear();
    mvprintw(row/2.5, col/2, "Welcome to the Classic Snake Game.\n");
    mvprintw(row/2, col/2, "Press any key to continue.");
    refresh();
}

void pierdes(){
    clear();
    mvprintw(row/2.5, col/2,"Fin de la partida.\n");
    mvprintw(row/2, col/2, "Has perdido.");
    refresh();
}

void ganas(){
    clear();
    mvprintw(row/2.5, col/2, "Fin de la partida.\n");
    mvprintw(row/2, col/2, "Has ganado.");
    refresh();
}

void comprueba(){
    if(snake_length==MAX_LENGTH){
        timeout(-1);
        finish=1;
    }
    else {
        bool collidesnake = false;
        for(int i=1; i<snake_length; i++)
            if(snake[0].x == snake[i].x && snake[0].y == snake[i].y)
                collidesnake = true;


        if((snake[0].x == row) || (snake[0].y == col) || (snake[0].x == 1) || (snake[0].y == 1) || collidesnake){
            timeout(-1);
            finish=2;
        }
    }
}

void guardaNombre(/*FILE *tubo, char nombre*/){
    FILE *tubo = NULL;
    char nombre[N];

    tubo = fopen("scores.txt", "w");
        mvprintw(row/2.5, col/3.5, "Introduzca su nombre para guardar su puntuación: ");
        refresh();
        scanw("%s", &nombre);

        fprintf(tubo, "%s %i\n", nombre, score);
    fclose(tubo);
}

int main(){

    int salir, guarda;
    /*FILE *tubo = NULL;*/

    initscr();
    inicio();
    food.x = MIN+rand()%(row-MIN);
    food.y = MIN+rand()%(col-MIN);
    noecho();
    start_color();
    init_pair(1,COLOR_YELLOW,COLOR_BLUE);
    bkgd(COLOR_PAIR(1));
    drawLevel();
    drawScore();
    keypad(stdscr, TRUE);
    curs_set(0);
    bienvenida();
    getch();
    clear();
    inicio_snake();


    while(finish == 0){
        timeout(50);
        obtener_tecla();
        clear();
        drawLevel();
        drawScore();
        cambiar_direccion();
        comprueba();
        comer();
        drawScore();
        if(!finish) {
            dibujar_snake();
            dibujar_comida();
            refresh();
        }
        usleep(70000);
    }
    if(finish == 1)
        ganas();
    else
        pierdes();
    usleep(70000);

    /*guarda = getch();*/
    /*while(guarda != 10){
        if(finish == 1)
            ganas();
        else
            pierdes();
    }*/
    guarda = getch();
    guardaNombre();

    do {
        salir = getch();
    } while(salir != 10);

    endwin();

    return EXIT_SUCCESS;
}

