#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero, numeroaleatorio = 0;

	/*Se genera un número aleatorio para que nunca sea el mismo*/
	numeroaleatorio = rand() % 101; /*De esta manera para el usuario habrá 100 números*/

	printf("Introduce un número entre el 0 y el 100: ");
	scanf("%i", &numero);

	while(numero!=numeroaleatorio){

		if(numero>numeroaleatorio)
			printf("\nEl número introducido es mayor que el número que se debe adivinar.\n");
		else
			printf("\nEl número introducido es menor que el número que se debe adivinar.\n");

		printf("\nIntroduce un número entre el 0 y el 100: ");
		scanf("%i", &numero);
	}

	printf("Has acertado el número elegido era %i \n", numeroaleatorio);



	return EXIT_SUCCESS;
}




