/*Escreva um programa que contenha um vetor A para receber 5 elementos do tipo inteiro. 
Construir um vetor B do mesmo tipo observando a seguinte regra de formação: se o índice for par, 
o valor deve ser multiplicado por 5. Caso o índice seja ímpar, deve ser somado com 5. 
Ao final, mostrar o conteúdo do vetor B*/ 

#include <stdio.h>

int main () {

    int va[5], vb[5], i;

    // Criando o vetor para leitura do usuário
    for (i =0 ; i < 5; i++) {
        printf("Informe o numero inteiro:");
        scanf("%d", &va[i]);
        printf("\n");
    }

    for(i = 0; i < 5; i++) {
        if (va[i]%2 == 0) {
            vb[i] = va[i] * 5;
        }else {
            vb[i] = va[i] + 5;
        }
    }

     for(i = 0; i < 5; i++) {
    printf("vb[%d] = %d", i,vb[i]);
    printf("\n");
}

}