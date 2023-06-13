/*Exercício 02 - Escreva um algoritmo que, através de laços de repetição, leia valores para uma matriz 4x5.
*/

#include <stdio.h>

int main () {
    int mat[4][5], i, j;

    //Lendo matriz 4x5
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("Informe o valor:");
            scanf("%d", &mat[i][j]);
        }
    }
    //Imprimindo valores da matriz 4x5
    printf("Matriz 4x5:");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
    return 0;

}