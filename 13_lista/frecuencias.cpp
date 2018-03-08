#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

int main(){

    int mirar;
    char contadora = 0;
    char contadorb = 0;
    char contadorc = 0;
    char contadord = 0;
    char contadore = 0;
    char contadorf = 0;
    char contadorg = 0;
    char contadorh = 0;
    char contadori = 0;
    char contadorj = 0;
    char contadork = 0;
    char contadorl = 0;
    char contadorm = 0;
    char contadorn = 0;
    char contadoro = 0;
    char contadorp = 0;
    char contadorq = 0;
    char contadorr = 0;
    char contadors = 0;
    char contadort = 0;
    char contadoru = 0;
    char contadorv = 0;
    char contadorw = 0;
    char contadorx = 0;
    char contadory = 0;
    char contadorz = 0;
    /*    int longitud;*/
    int cuenta;
    int nuevo_contadora;
    int nuevo_contadorb = 0;
    int nuevo_contadorc = 0;
    int nuevo_contadord = 0;
    int nuevo_contadore = 0;
    int nuevo_contadorf = 0;
    int nuevo_contadorg = 0;
    int nuevo_contadorh = 0;
    int nuevo_contadori = 0;
    int nuevo_contadorj = 0;
    int nuevo_contadork = 0;
    int nuevo_contadorl = 0;
    int nuevo_contadorm = 0;
    int nuevo_contadorn = 0;
    int nuevo_contadoro = 0;
    int nuevo_contadorp = 0;
    int nuevo_contadorq = 0;
    int nuevo_contadorr = 0;
    int nuevo_contadors = 0;
    int nuevo_contadort = 0;
    int nuevo_contadoru = 0;
    int nuevo_contadorv = 0;
    int nuevo_contadorw = 0;
    int nuevo_contadorx = 0;
    int nuevo_contadory = 0;
    int nuevo_contadorz = 0;
    printf("Escribe un texto: ");


    do{
        mirar = getc(stdin);
        if (mirar == 'a' || mirar == 'A'){
            /*ungetc(mirar, stdin);*/
            /*scanf(" %*1[aA]");*/
            /*strchr();*/
            contadora++;
        }

        if (mirar == 'b' || mirar == 'B'){
            ungetc(mirar, stdin);
            scanf(" %*1[bB]");
            contadorb++;
        }

        if (mirar == 'c' || mirar == 'C'){
            ungetc(mirar, stdin);
            scanf(" %*1[cC]");
            contadorc++;
        }

        if (mirar == 'd' || mirar == 'D'){
            ungetc(mirar, stdin);
            scanf(" %*1[dD]");
            contadord++;
        }

        if (mirar == 'e' || mirar == 'E'){
            ungetc(mirar, stdin);
            scanf(" %*1[eE]");
            contadore++;
        }

        if (mirar == 'f' || mirar == 'F'){
            ungetc(mirar, stdin);
            scanf(" %*1[fF]");
            contadorf++;
        }

        if (mirar == 'g' || mirar == 'G'){
            ungetc(mirar, stdin);
            scanf(" %*1[gG]");
            contadorg++;
        }

        if (mirar == 'h' || mirar == 'H'){
            ungetc(mirar, stdin);
            scanf(" %*1[hH]");
            contadorh++;
        }

        if (mirar == 'i' || mirar == 'I'){
            ungetc(mirar, stdin);
            scanf(" %*1[iI]");
            contadori++;
        }

        if (mirar == 'j' || mirar == 'J'){
            ungetc(mirar, stdin);
            scanf(" %*1[jJ]");
            contadorj++;
        }

        if (mirar == 'k' || mirar == 'K'){
            ungetc(mirar, stdin);
            scanf(" %*1[kK]");
            contadork++;
        }

        if (mirar == 'l' || mirar == 'L'){
            ungetc(mirar, stdin);
            scanf(" %*1[lL]");
            contadorl++;
        }

        if (mirar == 'm' || mirar == 'M'){
            ungetc(mirar, stdin);
            scanf(" %*1[mM]");
            contadorm++;
        }

        if (mirar == 'n' || mirar == 'N'){
            ungetc(mirar, stdin);
            scanf(" %*1[nN]");
            contadorn++;
        }

        if (mirar == 'o' || mirar == 'O'){
            ungetc(mirar, stdin);
            scanf(" %*1[oO]");
            contadoro++;
        }

        if (mirar == 'p' || mirar == 'P'){
            ungetc(mirar, stdin);
            scanf(" %*1[pP]");
            contadorp++;
        }

        if (mirar == 'q' || mirar == 'Q'){
            ungetc(mirar, stdin);
            scanf(" %*1[qQ]");
            contadorq++;
        }

        if (mirar == 'r' || mirar == 'R'){
            ungetc(mirar, stdin);
            scanf(" %*1[rR]");
            contadorr++;
        }

        if (mirar == 's' || mirar == 'S'){
            ungetc(mirar, stdin);
            scanf(" %*1[sS]");
            contadors++;
        }

        if (mirar == 't' || mirar == 'T'){
            ungetc(mirar, stdin);
            scanf(" %*1[tT]");
            contadort++;
        }

        if (mirar == 'u' || mirar == 'U'){
            ungetc(mirar, stdin);
            scanf(" %*1[uU]");
            contadoru++;
        }

        if (mirar == 'v' || mirar == 'V'){
            ungetc(mirar, stdin);
            scanf(" %*1[vV]");
            contadorv++;
        }

        if (mirar == 'w' || mirar == 'W'){
            ungetc(mirar, stdin);
            scanf(" %*1[wW]");
            contadorw++;
        }

        if (mirar == 'x' || mirar == 'X'){
            ungetc(mirar, stdin);
            scanf(" %*1[xX]");
            contadorx++;
        }

        if (mirar == 'y' || mirar == 'Y'){
            ungetc(mirar, stdin);
            scanf(" %*1[yY]");
            contadory++;
        }

        if (mirar == 'z' || mirar == 'Z'){
            ungetc(mirar, stdin);
            scanf(" %*1[zZ]");
            contadorz++;
        }
    }
    while(mirar!='\n');

    cuenta = contadora + contadorb + contadorc + contadord + contadore + contadorf + contadorg + contadorh + contadori + contadorj + contadork + contadorl + contadorm + contadorn + contadoro + contadorp + contadorq + contadorr + contadors + contadort + contadoru + contadorv + contadorw + contadorx + contadory + contadorz;

    nuevo_contadora = (contadora * 100) / cuenta;
    nuevo_contadorb = (contadorb * 100) / cuenta;
    nuevo_contadorc = (contadorc * 100) / cuenta;
    nuevo_contadord = (contadord * 100) / cuenta;
    nuevo_contadore = (contadore * 100) / cuenta;
    nuevo_contadorf = (contadorf * 100) / cuenta;
    nuevo_contadorg = (contadorg * 100) / cuenta;
    nuevo_contadorh = (contadorh * 100) / cuenta;
    nuevo_contadori = (contadori * 100) / cuenta;
    nuevo_contadorj = (contadorj * 100) / cuenta;
    nuevo_contadork = (contadork * 100) / cuenta;
    nuevo_contadorl = (contadorl * 100) / cuenta;
    nuevo_contadorm = (contadorm * 100) / cuenta;
    nuevo_contadorn = (contadorn * 100) / cuenta;
    nuevo_contadoro = (contadoro * 100) / cuenta;
    nuevo_contadorp = (contadorp * 100) / cuenta;
    nuevo_contadorq = (contadorq * 100) / cuenta;
    nuevo_contadorr = (contadorr * 100) / cuenta;
    nuevo_contadors = (contadors * 100) / cuenta;
    nuevo_contadort = (contadort * 100) / cuenta;
    nuevo_contadoru = (contadoru * 100) / cuenta;
    nuevo_contadorv = (contadorv * 100) / cuenta;
    nuevo_contadorw = (contadorw * 100) / cuenta;
    nuevo_contadorx = (contadorx * 100) / cuenta;
    nuevo_contadory = (contadory * 100) / cuenta;
    nuevo_contadorz = (contadorz * 100) / cuenta;


    /*Imprimir los contadores*/
    printf("El %i%% de letras del texto son 'a'.\n", nuevo_contadora);
    printf("El %i%% de letras del texto son 'b'.\n", nuevo_contadorb);
    printf("El %i%% de letras del texto son 'c'.\n", nuevo_contadorc);
    printf("El %i%% de letras del texto son 'd'.\n", nuevo_contadord);
    printf("El %i%% de letras del texto son 'e'.\n", nuevo_contadore);
    printf("El %i%% de letras del texto son 'f'.\n", nuevo_contadorf);
    printf("El %i%% de letras del texto son 'g'.\n", nuevo_contadorg);
    printf("El %i%% de letras del texto son 'h'.\n", nuevo_contadorh);
    printf("El %i%% de letras del texto son 'i'.\n", nuevo_contadori);
    printf("El %i%% de letras del texto son 'j'.\n", nuevo_contadorj);
    printf("El %i%% de letras del texto son 'k'.\n", nuevo_contadork);
    printf("El %i%% de letras del texto son 'l'.\n", nuevo_contadorl);
    printf("El %i%% de letras del texto son 'm'.\n", nuevo_contadorm);
    printf("El %i%% de letras del texto son 'n'.\n", nuevo_contadorn);
    printf("El %i%% de letras del texto son 'o'.\n", nuevo_contadoro);
    printf("El %i%% de letras del texto son 'p'.\n", nuevo_contadorp);
    printf("El %i%% de letras del texto son 'q'.\n", nuevo_contadorq);
    printf("El %i%% de letras del texto son 'r'.\n", nuevo_contadorr);
    printf("El %i%% de letras del texto son 's'.\n", nuevo_contadors);
    printf("El %i%% de letras del texto son 't'.\n", nuevo_contadort);
    printf("El %i%% de letras del texto son 'u'.\n", nuevo_contadoru);
    printf("El %i%% de letras del texto son 'v'.\n", nuevo_contadorv);
    printf("El %i%% de letras del texto son 'w'.\n", nuevo_contadorw);
    printf("El %i%% de letras del texto son 'x'.\n", nuevo_contadorx);
    printf("El %i%% de letras del texto son 'y'.\n", nuevo_contadory);
    printf("El %i%% de letras del texto son 'z'.\n", nuevo_contadorz);


    return EXIT_SUCCESS;
}
