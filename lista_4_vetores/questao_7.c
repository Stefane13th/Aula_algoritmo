/*7. Faça um programa em C que leia um vetor de 20 posições e 
apresente o menor e o maior valor e as posições que eles se encontram. 
*/

#include <stdio.h>

int main () {
    int vet[10], i, menor = 999, maior = -999, ax, ax1;
    
    //Leitura dos valores do vetor pelo usuário, utilizando um loop for que percorre os índices de 0 a 19
    for (i = 0; i < 20; i++) {
        printf("Digite o %d valor para armazenar:",i + 1);
        scanf("%d",&vet[i]);
        printf("\n");
    }

    //Loop for é utilizado para percorrer todo o vetor e identificar o maior e o menor valor e suas posições.
    for (i = 0; i <20; i++) {
        if (vet[i] > maior) { // Se for maior, o valor é armazenado na variável "maior"
            maior = vet [i];
            ax = i; //A posição do maior valor é armazenada na variável auxiliar "ax"
        }
        if (vet[i] < menor) {
            menor = vet [i]; //Se for menor, o valor é armazenado na variável "menor"
            ax1 = i; //A posição do menor valor é armazenada na variável auxiliar "ax1"
        }
    }
    //Impressão dos resultados
        printf("O valor maior eh: %d (posicao %d) \n", maior, ax);
        printf("O valor menor eh:  %d (posicao %d) \n", menor, ax1);

        return (0); //o valor 0 para indicar que a execução foi concluída com sucesso.
}