/* Questão 2. Desenvolver um algoritmo que leia um número inteiro e apresente a tabuada da
multiplicação no seguinte formato:
Exemplo:
valor lido: 2
2 x 0=0
2 x 1=1
...
2 x 10 = 20 */

#include<stdio.h>
#include <math.h>

int main() {
    int y = 0, cont = 0, x1 = 0;

    printf("informe o valor lido - c:");
    scanf("%d", &x1);

    while (cont <= 10) {
        y = cont * x1;
        printf("%d x %d = %d \n", x1, cont, y);
        cont ++;

    }
}
