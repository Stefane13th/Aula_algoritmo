/*Questão 4 -  Desenvolver um programa que apresente todos os números divisíveis por 4 que sejam
menores que 200*/

#include<stdio.h>
#include <math.h>

int main() {
    int cont = 1;

    while (cont < 200) {

        if (cont %4==0) {
            printf("apresentar numeros divisiveis por 4: %d", cont);
            printf("\n");
        }
        cont ++;
    }
}