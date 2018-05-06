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
#define MAX_COINS 20
#define BOAT_CHARACTER '*'
#define COIN_CHARACTER '+'
#define WALL_CHARACTER '='

int finish = 0;
int row, col;
int direccion;
int coins_count = 0;
int coins = 1;

struct Coordenadas{
	int x;
	int y;
} boat, /*cola, nuevacola, last, last2,*/ coin;




void inicio(){
	getmaxyx(stdscr, row, col);
	srand(time(NULL));
}

void inicia_boat(){
	boat.x= row/2;
	boat.y= col/2;
}

void dibujar_boat(){

	mvprintw(boat.x, boat.y,"%s", BOAT_CHARACTER);
}

void dibujar_coin(){
	if((coin.y > 1) && (coin.x > 1))
		mvprintw(coin.x, coin.y, "%s", COIN_CHARACTER);

}

void dibujar_nivel() {
	for (int i=0; i<row; i++) {
		mvaddch(i, 0, WALL_CHARACTER);
		mvaddch(i, col-1, WALL_CHARACTER);
	}
	for (int i=1; i<col-1; i++) {
		mvaddch(0, i,WALL_CHARACTER);
		mvaddch(row-1, i, WALL_CHARACTER);
	}
	/*    for (int i=25; i<55; i++) {
	      mvaddch(row/4, i, ROW_CHAR);
	      mvaddch((row/4)*3, i, ROW_CHAR);
	      }*/
}

void comer(){
	if((boat.x == coin.x)&&(boat.y == coin.y)){

		/**/
		coins_count++;

		coin.y = rand()%(col+1);
		coin.x = rand()%(row+1);
		dibujar_coin();
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

	/*last = snake[0];*/
	switch(direccion){
		case IZQUIERDA:
			boat.y--;
			break;
		case ABAJO:
			boat.x++;
			break;
		case DERECHA:
			boat.y++;
			break;
		case ARRIBA:
			boat.x--;
			break;

	}
	/*if(snake[1].x == snake[0].x && snake[1].y == snake[0].y)
	  finish = 2;*/
	/*for(int i=1;i<snake_length;i++){
	  last2 = snake[i];
	  snake[i] = last;
	  last = last2;
	  }*/
}

void bienvenida(){
	clear();
	mvprintw(row/2.5, col/2, "Welcome to the Boat Game.\n");
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
	if(coins_count==MAX_COINS){
		timeout(-1);
		finish=1;
	}
	/*else {
	  bool collidesnake = false;
	  for(int i=1; i<snake_length; i++)
	  if(snake[0].x == snake[i].x && snake[0].y == snake[i].y)
	  collidesnake = true;*/


	if((boat.x == row) || (boat.y == col) || (boat.x == 0) || (boat.y == 0)){
		timeout(-1);
		finish=2;
	}
}

int main(){

	int salir;

	/*setlocale(LC_ALL, "");*/
	initscr();
	inicio();
	coin.x = rand()%(row-1);
	coin.y = rand()%(col-1);
	noecho();
	start_color();
	init_pair(1,COLOR_YELLOW,COLOR_BLUE);
	bkgd(COLOR_PAIR(1));
	dibujar_nivel();
	keypad(stdscr, TRUE);
	curs_set(0);
	bienvenida();
	getch();
	clear();
	inicia_boat();


	while(finish == 0){
		timeout(50);
		obtener_tecla();
		clear();
		dibujar_nivel();
		cambiar_direccion();
		comprueba();
		comer();
		if(!finish) {
			dibujar_boat();
			dibujar_coin();
			refresh();
		}
		usleep(70000);
	}
	if(finish == 1)
		ganas();
	else
		pierdes();

	do {
		salir = getch();
	} while(salir != 10);

	endwin();

	return EXIT_SUCCESS;
}


