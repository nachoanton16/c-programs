#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <strings.h>

int main(){

    char nombre[256];
    char nom[256];
    int mes;

    system("toilet --gay -fpagga ZODIAC");
    sleep(1);
    printf("%s",getenv("USER"));
    sleep(2);

    printf(", escriba su nombre: ");
    fgets(nombre, 256, stdin);
    sprintf(nom, "Hola %s\n",nombre);
    printf("%s\n", nom);
    sleep(2);

    /*Table month's*/
    printf("Pulsa 1 si naciste entre el 20 de enero y el 18 de febrero.\n");
    printf("Pulsa 2 si naciste entre el 19 de febrero y el 20 de marzo.\n");
    printf("Pulsa 3 si naciste entre el 21 de marzo y el 19 de abril.\n");
    printf("Pulsa 4 si naciste entre el 20 de abril y el 20 de mayo.\n");
    printf("Pulsa 5 si naciste entre el 21 de mayo y el 20 de junio.\n");
    printf("Pulsa 6 si naciste entre el 21 de junio y el 22 de julio.\n");
    printf("Pulsa 7 si naciste entre el 23 de julio y el 22 de agosto.\n");
    printf("Pulsa 8 si naciste entre el 23 de agosto y el 22 de septiembre.\n");
    printf("Pulsa 9 si naciste entre el 23 de septiembre y el 22 de octubre.\n");
    printf("Pulsa 10 si naciste entre el 23 de octubre y el 21 de noviembre.\n");
    printf("Pulsa 11 si naciste entre el 22 de noviembre y el 21 de diciembre.\n");
    printf("Pulsa 12 si naciste entre el 22 de diciembre y le 19 de enero.\n");

    printf("\nDígame el período en el que nació según la tabla: ");
    scanf(" %i", &mes);

   switch(mes){
        case 1:
            printf("Su signo del zodiaco es acuario ♒.\nSigno de aire.\n");
            break;

        case 2:
            printf("Su signo del zodiaco es piscis ♓.\nSigno de agua. \n");
            break;

        case 3:
            printf("Su signo del zodiaco es aries ♈.\nSigno de fuego. \n");
            break;

        case 4:
            printf("Su signo del zodiaco es tauro ♉.\nSigno de tierra.\n");
            break;

        case 5:
            printf("Su signo del zodiaco es géminis ♊.\nSigno de aire.\n");
            break;

        case 6:
            printf("Su signo del zodiaco es cáncer ♋.\nSigno de agua. \n");
            break;

        case 7:
             printf("Su signo del zodiaco es leo ♌.\nSigno de fuego. \n");
            break;

        case 8:
            printf("Su signo del zodiaco es virgo ♍.\nSigno de la tierra.\n");
            break;

        case 9:
            printf("Su signo del zodiaco es libra ♎.\nSigno de aire.\n");
            break;


        case 10:
            printf("Su signo del zodiaco es escorpio ♏.\nSigno de agua. \n");
            break;

        case 11:
            printf("Su signo del zodiaco es sagitario ♐.\nSigno de fuego.\n");
            break;

        case 12:
            printf("Su signo del zodiaco es capricornio ♑.\nSigno de tierra \n");
            break;

    }
return EXIT_SUCCESS;
}
