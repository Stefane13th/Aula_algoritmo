/*Escreva um algoritmo que leia elementos para uma matriz quadrada de
ordem 2*/

#include <stdio.h>

int main () {

    float mat[2][2];
    int i, j ;

    //Lendo a matriz quadradada de ordem 2
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Ler valores da matriz:");
            scanf("%f", &mat[i][j]);
        }
    }

    //Imprimindo na tela a minha matriz de ordem 2
    printf("Valores da matriz quadrada:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%2.f", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}