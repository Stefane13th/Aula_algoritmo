// Questão 1

#include<stdio.h>
#include <math.h>

int main() {
    int cont=0, x1=0;
    for ( cont = 15; cont <= 100; cont ++) {

        x1 = pow(cont, 2);
        printf("Potencia de %d eh =%d", cont, x1);
        printf("\n");

    }
}