/*Exercício 01 - Escreva um algoritmo que leia elementos para uma matriz quadrada de ordem 2.*/

#include <stdio.h>

int main () {

    int matriz[2][2], i = 0, j = 0;

//Lendo a matriz com while
    while ( i < 2) {
        while (j < 2) {
        printf("Informe o valor:");
        scanf("%d", &matriz[i][j]);
            j++;
        }
        i++;
        j = 0; // Reinicia j para a próxima linha da matriz
    }

//Imprimir os valores na tela
    i = 0; // Reinicia i para percorrer a matriz novamente
    while (i < 2) {
        while (j < 2) {
            printf("%d  ", matriz[i][j]);
            j++;
        }
        i++;
        printf("\n");
    }
    
    return 0;
}