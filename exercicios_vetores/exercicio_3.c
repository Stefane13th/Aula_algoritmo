/*Faça um algoritmo para ler os valores gastos em cheque por uma pessoa durante um mês, e depois imprimir: 
a lista com todos os valores, o maior valor, o menor valor e a média de todos os valores. 
No início do algoritmo o usuário deve informar quantos cheques foram usados; estabeleça um número máximo de cheques.*/ 

#include <stdio.h>

#define MAX_CHEQUES 100

int main() {
    int n_cheques;
    float cheques[MAX_CHEQUES], maior = -999, menor = 999, media = 0;

    // Pedindo ao usuário a quantidade de cheques usados
    printf("Quantos cheques foram usados? (maximo %d): ", MAX_CHEQUES);
    scanf("%d", &n_cheques);

    // Lendo os valores gastos em cada cheque e armazenando no vetor
    printf("Digite os valores gastos em cada cheque:\n");
    for (int i = 0; i < n_cheques; i++) {
        printf("Cheque %d: ", i + 1);
        scanf("%f", &cheques[i]);

        // Atualizando o maior e menor valor
        if (cheques[i] > maior) {
            maior = cheques[i];
        }
        if (cheques[i] < menor) {
            menor = cheques[i];
        }

        // Somando o valor do cheque para calcular a média
        media += cheques[i];
    }

    // Imprimindo a lista com todos os valores gastos
    printf("\nLista de valores gastos:\n");
    for (int i = 0; i < n_cheques; i++) {
        printf("%.2f ", cheques[i]);
    }

    // Calculando e imprimindo a média
    media /= n_cheques;
    printf("\n\nMedia de todos os valores: %.2f\n", media);

    // Imprimindo o maior e menor valor
    printf("Maior valor gasto: %.2f\n", maior);
    printf("Menor valor gasto: %.2f\n", menor);

    return 0;
}
