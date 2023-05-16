/*Elaborar um programa que leia 6 valores dos vetores A e B. O Vetor A deve
aceitar apenas a entrada de valores que sejam divisíveis por 2 e 3, enquanto o
vetor B deve aceitar apenas valores múltiplos de 5. Esta validação não deve ser
feita pelo usuário, mas sim pelo programa. Feito isso, crie um terceiro vetor que
armazene todos os elementos dos dois vetores (12 posições) e apresente esses
valores na tela.*/ 


/*Elaborar um programa que leia 6 valores dos vetores A e B. O Vetor A deve
aceitar apenas a entrada de valores que sejam divisíveis por 2 e 3, enquanto o
vetor B deve aceitar apenas valores múltiplos de 5. Esta validação não deve ser
feita pelo usuário, mas sim pelo programa. Feito isso, crie um terceiro vetor que
armazene todos os elementos dos dois vetores (12 posições) e apresente esses
valores na tela.*/ 


#include <stdio.h>

int main () {

    int va [6], vb [6], vc[12], i, j;

    // Lendo o vetor A
    for (i = 0; i <6; i++) {
        printf("Informe um valor que seja divisivel por 2 e 3:");
        scanf("%d", &va[i]);
        printf("\n");

        // condição do vetor A

        while (va[i]%2==0 && va[i]%3==0) {
            printf("Valor invalido! Tende de novo.");
            scanf("%d", &va[i]);
            printf("\n");
        }

        // Armazenar em c
            vc[j] = va[i];
            j++;

    }

    // Lendo o vetor B
    for (i = 0; i <6; i++) {
        printf("Informe um valor que seja divisivel por 5:");
        scanf("%d", &vb[i]);
        printf("\n");

        // condição do vetor b

        while (vb[i]%5==0) {
            printf("Valor invalido! Tende de novo.");
            scanf("%d", &vb[i]);
            printf("\n");
        }

        // Armazenar em c
            vc[j] = vb[i];
            j++;

    }

    // Valores armazenados no vetor C
    printf("Valores armazenados no vetor C:");
     for (i = 0; i < 12; i++) {
        printf("Valores do vc[%d]=%d", i, vc[i]);
        printf("\n");
    }
    return 0;
}