// Questão 6

#include<stdio.h>
#include <math.h>

int main() {
    int ax=0;
    do {
        printf("informar numero:", ax);
        scanf("%d", &ax);

        {
            if (ax % 2 == 0) {
                printf("o numero %d eh par \n");
            } else {
                printf("o numero %d eh impar", ax);
                printf("\n");
            }

        }
    }while (ax != -999);
}