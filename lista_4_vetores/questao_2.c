#include <stdio.h>

int main () {
    
    //Dando entrada as variaveis do problema
    int vet[10], i, y = 0;

    //Armazenando os valores no vetor vet[i]
    for (i = 0; i < 10; i++) {
        printf("Digite o %d valor inteiro para armazenar: ", i+1);
        scanf("%d", &vet[i]);
    }
    //Fazendo uma varedura dos valores que são iguais ao último valor da posiçao 9
    for (i = 0; i < 10; i++) {
        if (vet[9] == vet[i]) {
            y++;
        }
    }
    //Apresentando os valores que são iguais ao últmo elemento do vetor
    printf("Existem %d valores iguais ao ultimo elemento do vetor.\n", y);
    return 0;
}
