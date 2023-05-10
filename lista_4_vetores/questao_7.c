/*7. Faça um programa em C que leia um vetor de 20 posições e 
apresente o menor e o maior valor e as posições que eles se encontram. 
*/

#include <stdio>

int main () {
    int vet[10], menor = 999, maior = 0;
    
    for (i = 0; i < 20; i++) {
        printf("Digite o %d valor para armazenar:",i + 1);
        scanf("%d",&vet[i]);
    }
}