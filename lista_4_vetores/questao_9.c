/*9. Crie um programa que leia 15 elementos de um vetor A. Construir um vetor B
de mesmo tipo, observando a seguinte lei de formação: Todo elemento de B
deve ser o quadrado do elemento de A correspondente. Apresentar os 2
vetores.*/

#include <stdio.h>
#include <math.h>

int main () {

    int va [15], vb[15], i;

    // Criando o vetor que lê os 15 elementos digitados pelo usuário e os armazena no vetor A
    for (i = 0; i <15; i++) {
        printf("Digite o valor para armazenar no vetor:");
        scanf("%d", &va[i]);
        printf("\n");
    }

    /*Criando outro loop for que percorre os 15 elementos do vetor A e, para cada elemento,
    calcula o seu quadrado e armazena no vetor B na posição correspondente*/
    for (i = 0; i < 15; i++) {
        vb[i] = pow(va [i],2);
        }
    //Criando  loop for para exibir o vetor A
    printf("Os valores do vetor a (va):");
     for (i = 0; i < 15; i++) {
        printf("va[%d] = %d \n", i, va[i]);
        
    }
    //Criando  loop for para exibir o vetor B
    printf("Os valores do vetor a (vb):");
     for (i = 0; i < 15; i++) {
        printf("vb[%d] = %d \n", i, vb[i]);
        
    }
    
    return(0);
}