/*Ler um número inteiro e imprimir uma mensagem informando se ele é par e divisível por 3*/
#include <stdio.h>

int main () {

    int numb = 0;

    //Recebendo o numero inteiro
    printf("Digite o valor inteiro:");
    scanf("%d",&numb);

    //Aplicando a condição informando se ele é par e divisível por 3
    if (numb%2 ==0) {
        printf("O valor %d eh par \n",numb);
    } else {
        printf("O valor %d nao eh par \n",numb);
    }
    if (numb%3 == 0) {
        printf("O valor %d eh divisivel por 3 \n",numb);
    } else {
        printf("O valor %d nao eh divisivel por 3 \n",numb);
    }

    return 0;
}