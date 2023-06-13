/*4. Faça um programa que calcula a associação em paralelo de dois resistores R1 e
R2 digitados pelo usuário via teclado. O programa fica pedindo estes valores e
calculando até que o usuário entre com um valor de resistência igual a zero.
Fórmula: R=R1*R2/ (R1+R2).*/

#include <stdio.h>

int main () {
    float r1, r2, r;

    while (r1!=0 && r1!=0) {

        printf("Digite valor de R1:");
        scanf("%f", &r1);
        printf("\n");
        printf("Digite valor de R2:");
        scanf("%f", &r2);
        printf("\n");

        if (r1!=0 && r1!=0) {
        r=r1*r2/(r1+r2);
        printf("Valor da resistencis %f",r);
        printf("\n");
        }
        
    }

    return 0;

}