/* 6. Desenvolva um algoritmo que leia os 5 elementos de um vetor A e
transfira-os para o vetor B.*/

#include <stdio.h>

int main() {
   int va[5], vb[5], i;

//Leitura dos valores do vetor pelo usuário, utilizando um loop for que percorre os índices de 0 a 4
   printf("Informe os elementos do vetor\n");
   for (i = 0; i < 5; i++) {
       printf("va[%d]:", i + 1);
       scanf("%d", &va[i]);
   }
// Criando um loop que percorre os índices de 0 a 4 do vetor vb
   for (i = 0; i < 5; i++) {
       vb [i] = va[i]; /*Atribui-se o valor do índice i do vetor va para o índice i do vetor vb, 
       transferindo os elementos de um vetor para o outro*/
    
    //Imprime-se na tela o valor do índice i do vetor vb
       printf("vb[%d]: %d\n",i, vb[i]);
   }

}
