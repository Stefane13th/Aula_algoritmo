/*Ler 10 valores inteiros e os armazene em um vetor. O programa deve
percorrer o vetor e contar a quantidade de números pares e a quantidade de
números ímpares. Apresente como resultado as quantidades encontradas e as posições.*/

#include <stdio.h>

int main () {
    //Dando entrada as variaveis do problema
    int vet[10], i, y = 0, y2 = 0;

    printf("Digite 10 valores para armazenar no vetor:\n");
    //Armazenando os valores inteiros no vetor vet[i]
    for (i = 0; i < 10; i++) {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &vet[i]);
        printf("\n");
    }
    //Fazendo uma varedura dos valores que são par e impar
    for (i = 0; i < 10; i++) {
        if (vet[i] % 2 == 0) {
            y++;
        } else {
            y2++;
        }
    }
    //Apresentando a quantidade de pares e imparas
    printf("A quantidade de pares eh %d e a quantidade de impares eh %d", y, y2);
}