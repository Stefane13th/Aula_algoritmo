/*Questão 5 - Apresentar os resultados das potências de 3, variando do expoente 0 até o expoente 15*/

#include<stdio.h>
#include <math.h>

int main() {
    int cont = 0, x1=0;

    while (cont <= 15) {

        x1 = pow(3, cont);
        printf("resultado da potencia eh: %d", x1);
        printf("\n");
        cont ++;
        }

}