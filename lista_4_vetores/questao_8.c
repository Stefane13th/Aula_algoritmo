/*8. Faça um programa em C para ler um vetor de 10 números. Após isto, ler
mais um número qualquer, calcular e escrever quantas vezes esse número
aparece no vetor.*/ 

#include <stdio.h>

int main () {

    int vet[30], i, numb, count = 0;

    // Leitura dos valores do vetor pelo usuário
    for (i = 0; i <30; i++) {
        printf("Digite os valores do vetor:");
        scanf("%d", &vet[i]);
    } 

    // Leitura do valor do fornecido pelo usuário
    printf("\nDigite um numero qualquer:\n");
    scanf("%d", &numb);

    // Criando um loop para verificação da ocorrência do número no vetor
    for (i = 0; i <30; i++) {
        if (vet[i] == numb) {
            count++;
        }
    } 

    // Impressão do resultado
    printf("O numero %d aparece %d vezes no vetor.", numb, count);

    return(0);
}

