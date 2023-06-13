/* Questão 1-Criar um programa para apresentar o quadrado dos números inteiros de 15 até 100.  */

#include <stdio.h>
#include <math.h>

int main () {

    int cont = 15, ax = 0;

  
    do {
        ax = pow(cont,2);
        printf("A potencia de %d eh %d", cont, ax);
        printf("\n");
        cont++;

    } while (cont <= 100);

    return 0;
}