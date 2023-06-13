//2. Calcular e imprimir a soma dos N primeiros números pares onde N é um número inteiro, que deve ser lido pelo teclado. 

#include<stdio.h>
#include <math.h>


int main() {
   int N = 0, cont = 0, cont_par = 0, soma = 0;


   printf("Digite o numero inteiro:");
   scanf("%d",&N);
   printf("\n");


   while (cont_par < N) {
       if ( cont %2 ==0) {
           printf("Eh par = %d \n", cont);
           soma = soma + cont;
           cont_par++;
   };
       cont++;
   }
   printf("Soma totais de numeros inteiros: %d \n",soma);
}
