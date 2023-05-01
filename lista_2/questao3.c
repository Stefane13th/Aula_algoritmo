/*Criar um programa que lê um número inteiro e exibe a
mensagem dizendo se ele é múltiplo de 7 ou não */

#include <stdio.h>

int main () {

    int numb = 0;

//Recebendo o valor inteiro
    printf("Digite um numero inteiro:");
    scanf("%d",&numb);

//Aplicando a condição que exibe a mensagem dizendo se ele é múltiplo de 7 ou não
/*A condição significa que o valor de numb é um número que quando dividido por 7 tem
não tem resto, ou seja, é múltiplo de 7*/
    if (numb %7== 0) {
        printf("O valor %d eh multiplo de sete",numb);
    } else {
        printf("O valor %d nao eh multiplo de sete",numb);
    }
}