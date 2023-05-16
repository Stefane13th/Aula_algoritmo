/* 3. Construa um algoritmo que, dado um conjunto de valores inteiros e positivos, 
determine qual o menor e o maior valor do conjunto. 
O final do conjunto de valores é conhecido através do valor -1 , que não deve ser considerado.*/ 
#include<stdio.h>
#include <math.h>


int main() {
   int valor = 0, maior = 0, menor = 9999;


   do {
       printf("Digite o numero inteiro e positivo:");
       scanf("%d", &valor);
       printf("\n");
       if (valor >= 0) { //se o valor for positivo, atualizando o maior e o menor
           if (valor > maior) {
               maior = valor;
           }
           if (valor < menor) {
               menor = valor;
           }
       }


       } while (valor != -1); //O loop termina quando digita -1
           printf("O maior valor eh: %d \n", maior);
           printf("O menor valor eh: %d \n", menor);
}
