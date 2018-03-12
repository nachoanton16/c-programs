#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>

#define N 0x100

int main(){

	char buffer[N];
	char **lista = NULL;
	int longitud;
	int n_palabras;
	char mirar;
	bool sigue = false;
	int continuo;

	for (int c_palabras=0; sigue == false; c_palabras++){
		__fpurge(stdin);

		printf("Palabra: ");
		fgets(buffer, N, stdin);
		n_palabras++;

		lista = (char **) realloc(lista, (c_palabras+1) * sizeof (char *));

		longitud = strlen(buffer);
		*(lista + c_palabras) = (char *) malloc(longitud);
		strncpy(*(lista + c_palabras), buffer, longitud);
		*(*(lista + c_palabras) + longitud - 1 ) = '\0';

		printf("¿Quiere introducir otra palabra?");
		printf("1. Si\n2. No\n");
		printf("Opcion: ");
		scanf(" %i", &continuo);

		if(continuo == 1)
			sigue == false;
		if(continuo == 2)			
			sigue == true;
	}

	for (int c_palabras=0; c_palabras<n_palabras; c_palabras++)
		printf("%s\n", *(lista + c_palabras));

	for (int c_palabras=0; c_palabras<n_palabras; c_palabras++)
		free(*(lista + c_palabras));

	free(lista);
	return EXIT_SUCCESS;
}

