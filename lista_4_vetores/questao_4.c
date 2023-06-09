/* Leia um vetor de 12 valores do tipo inteiro e em seguida ler também
dois valores X e Y quaisquer correspondentes a duas posições no vetor.
Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.
*/
#include <stdio.h>

int main() {
   int vetor[12], i, x, y, soma;

    //Criando o vetor para armazenar os valores
   for (i = 0; i < 12; i++) {
       printf("Digite um valor inteiro %d para armazenar:", i + 1);
       scanf("%d", &vetor[i]);
   }

    // Lendo os dois valores de x e y que correspondem a duas posições do vetor 
   printf("Digite o valor de X (entre 1 e 12): ");
   scanf("%d", &x);

   printf("Digite o valor de Y (entre 1 e 12): ");
   scanf("%d", &y);

    // Fazendo a soma dos valores encontrados nas respectivas posições X e Y
   soma = vetor[x - 1] + vetor[y - 1];

    // Apresentando o valor da soma dos valores na tela
   printf("A soma dos valores de X e Y eh: %d", soma);

   return 0;
}

