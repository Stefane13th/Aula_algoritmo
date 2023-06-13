/*Exercício 1 • Escreva um programa para ler 5 valores inteiros e armazená-los em um vetor. 
Apresenta os valores e a posição no vetor em que os elementos se encontram.*/ 
 
#include <stdio.h>

int main () {

    int vetor[5], i;

    //Criando o vetor para a leitura do valores fornecidos pelo usuário
    for (i = 0; i < 5; i++) {
        printf("Informe um numero:");
        scanf("%d", &vetor[i]);
        printf("\n");
    }

    // Criando um loop para apresentar os valores (vetor[i]) e as suas posições (i)
    for (i = 0; i < 5;i++) {
        printf("vetor[%d] = %d", i, vetor[i]);
        printf("\n");
    }
  
 }