#include <stdio.h>
#include <stdlib.h>

#define N 16
#define MAX 6//0x100

#ifndef NODEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#else
#define DEBUG(...)
#endif

int error = 0;
const char *mssg[] = {
	"Todo OK.",
	"Pila vacía.",
	"Pila llena."
};

typedef struct {
	char nombre[N];
	double (*op)(double, double);
} Operacion;

typedef struct {
	int data[MAX];
	int cima;
} Pila;


enum {
	suma,
	resta,
	multiplica,
	division,
	OPERA
};

bool push(int dato, Pila *pila){
	if (pila->cima >= MAX){
		error = 2;
		return false;
	}
	error = 0;
	pila->data[pila->cima++] = dato;
	return true;
}

int pop(Pila *pila) {
	if (pila->cima == 0){
		error = 1;
		return 0;
	}
	error = 0;
	
	pila->cima--;
	DEBUG("<- %i\n", pila->data[pila->cima]);
	return pila->data[pila->cima];
}

double sum(double op1, double op2) { return op1 + op2; }
double res(double op1, double op2) { return op1 - op2; }
double mul(double op1, double op2) { return op1 * op2; }
double div(double op1, double op2) { return op1 / op2; }

int main(){

	Pila op, datos;
	double op1, op2;
	char opera;
	bool acaba = true;
	Operacion catalogo[] = {
		{"suma",  &sum},
		{"resta", &res},
		{"multiplica", &mul},
		{"division", &div}
	};

	while(acaba == true){
		printf("Operacion: ");
		scanf(" %lf %c %lf", &op1, &opera, &op2);
		acaba = push(op2, &datos);
		acaba = push(op1, &datos);

		if(acaba == true){
			switch(opera) {
				case '+':
					push(suma, &op);
					break;
				case '-':
					push(resta, &op);
					break;
				case '*':
					push(multiplica, &op);
					break;
				case '/':
					push(division, &op);
					break;
			}
		}
	}

	for(int i=0; i<MAX-3; i++){
		int operador = pop(&op);
		/*printf("%s\n", catalogo[operador].nombre);*/
		double resultado = catalogo[operador].op((double) pop(&datos), (double) pop(&datos));
		/*printf("%s\n", catalogo[operador].nombre);*/
		printf("%5.2lf\n", resultado);
	}

	return EXIT_SUCCESS;
}

