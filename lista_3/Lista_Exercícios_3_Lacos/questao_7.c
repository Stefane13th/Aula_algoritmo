/*questão 7- Fazer um algoritmo que leia diversos números e mostre quantas vezes o número 10 foi
digitado. O valor 0 (zero) é o código de fim de entrada. */

#include<stdio.h>
#include <math.h>

int main() {
    int ax = 0, x1 = 0;
    do {
        printf("informar numero:", ax);
        scanf("%d", &ax);

        if (ax == 10) {
            x1 = x1 + 1;

        }
    } while (ax != 0);
        printf("foram contados %d o 10:", x1);
        printf("\n");
}