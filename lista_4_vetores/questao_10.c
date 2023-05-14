/*10.Elaborar um programa que leia 8 valores dos vetores A e B. O Vetor A deve aceitar apenas a entrada 
de valores que sejam divisíveis por 2 e 3, enquanto o  vetor B deve aceitar apenas valores múltiplos de 5. 
Esta validação não deve ser feita pelo usuário, mas sim pelo programa. Feito isso, crie um terceiro vetor 
que armazene todos os elementos dos dois vetores (16 posições) e apresente esses valores na tela.*/  

#include <stdio.h>

int main () {

    int va[8], vb[8], vc[16], i, j=0;

    // Lê os valores do vetor A
    for (i = 0; i < 8; i++) {
        printf("Digite um valor divisivel por 2 e 3 para armazenar no vetor A (va):");
        scanf("%d", &va[i]);
        printf("\n");
        // Valida se o valor é divisível por 2 e 3, caso contrário pede para digitar novamente
        while (va[i] % 2 != 0 || va[i] % 3 != 0) {
            printf("Valor invalido, digite novamente um valor divisivel por 2 e 3:");
            scanf("%d", &va[i]);
            printf("\n");
        }
        // Armazena o valor no vetor C
        vc[j] = va[i];
        j++;
    }

    // Lê os valores do vetor B
    for (i = 0; i < 8; i++) {
        printf("Digite um valor multiplo de 5 para armazenar no vetor B (vb):");
        scanf("%d", &vb[i]);
        printf("\n");
        // Valida se o valor é múltiplo de 5, caso contrário pede para digitar novamente
        while (vb[i] % 5 != 0) {
            printf("Valor invalido, digite novamente um valor múltiplo de 5:");
            scanf("%d", &vb[i]);
            printf("\n");
        }
        // Armazena o valor no vetor C
        vc[j] = vb[i];
        j++;
    }

    // Exibe os valores do vetor C
    printf("Valores armazenados no vetor C:\n");
    for (i = 0; i < 16; i++) {
        printf("vc[%d] = %d\n", i, vc[i]);
    }

    return 0;
}
