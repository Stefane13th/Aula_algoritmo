/*5. Escrever um algoritmo que lê um vetor N[20] e o escreve. Troque, a seguir, o 1º elemento com 11º, 
o 2º com o 12º, etc., até o 10º com o 20º e escreva o vetor assim modificado.  
*/

#include <stdio.h>

int main() {
   int vetor[20], i, aux, y;
   printf("Informe os elementos do vetor\n");

    /*Leitura dos valores do vetor pelo usuário, utilizando um loop for que percorre os índices de 0 a 19 
    e utiliza a função scanf() para armazenar os valores digitados pelo usuário no vetor.*/
   for (i = 0; i < 20; i++) {
       printf("vetor[%d]:", i + 1);
       scanf("%d", &vetor[i]);
   }
    /*o algoritmo exibe os elementos do vetor original através de um novo loop for que percorre 
    novamente o vetor e utiliza a função printf() para imprimir os valores na tela.*/ 
   printf("Elementos do vetor\n");
   for (i = 0; i < 20; i++) {
       printf("vetor[%d]: %d \n", i + 1, vetor[i]);
   }
    /*Criando um novo loop "for" que percorre os primeiros 10 elementos do vetor e realiza a troca com 
    os últimos 10 elementos correspondentes. Para isso, é utilizada uma variável auxiliar "aux" 
    que armazena temporariamente o valor do elemento atual antes de fazer a troca.*/ 
    for (i = 0; i < 10; i++) { 
       aux = vetor [i];//Dentro do loop, na linha 19, o valor do elemento "vetor[i]" é armazenado na variável auxiliar "aux"
       vetor[i] = vetor [i+10] ;//O valor do elemento "vetor[i+10]" é copiado para o elemento "vetor[i]"
       vetor[i+10] = aux;/*O valor armazenado na variável auxiliar  "aux" é copiado para o elemento "vetor[i+10]". 
       Dessa forma, a posição do elemento "vetor[i]" é trocada com a posição "vetor[i+10]".*/  
   }

   /*É exibido o vetor modificado através de um novo loop for que percorre novamente o vetor e 
   utiliza a função printf() para imprimir os valores na tela*/
   printf("Vetor modificado\n");
   for (i = 0; i < 20; i++) {
       printf("vetor[%d]: %d \n", i + 1, vetor[i]);
   }
}

/*Em resumo, o algoritmo cria um vetor de tamanho 20, realiza a leitura dos seus elementos, exibe o vetor original, 
realiza a troca de posição dos elementos e exibe o vetor modificado.*/