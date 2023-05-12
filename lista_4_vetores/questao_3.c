/*Faça um programa que lê um conjunto de 10 valores. Após a leitura, coloque em 2 vetores 
conforme forem pares ou ímpares. Mostre o vetor com os elementos pares e em seguida 
aquele com os elementos ímpares. Cuide para imprimir somente os elementos válidos destes vetores. */

#include <stdio.h>

int main () {

    int vet[10], i, va[10], vb [10], ip = 0, ii = 0;

    //Criando o vetor para armazenar os valores
    for (i = 0; i < 10; i++) {
        printf("Digite um valor %d para ser armazenado no vetor:", i + 1);
        scanf("%d", &vet[i]);
        printf("\n");
    }
    
    //Criando os vetores para fazer a busca do impar e par
    for (i = 0; i < 10; i++) {
        if (vet[i]%2 == 0) {
            va [ip] = vet [i];
            ip++;
        } else {
            vb[ii] = vet [i];
            ii++;
        }
    }
    //Apresentando os valores pares do va[ip]
    printf("Os valores pares sao:\n");
    for (i = 0; i < ip; i++) {
        printf("va[%d] = %d  \n", i, va[i]);
    }
    //Apresentando os valores pares do vb[ii]
    printf("Os valores impares sao:\n");
        for (i = 0; i < ii; i++) {
        printf("vb[%d] = %d  \n", i, vb[i]);
    }
}