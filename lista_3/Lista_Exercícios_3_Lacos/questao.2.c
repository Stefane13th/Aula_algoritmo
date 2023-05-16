// Questão 2

#include<stdio.h>
#include <math.h>

int main() {
    int y = 0, cont = 0, x1 = 0;

    printf("informe o valor lido - c:");
    scanf("%d", &x1);

    while (cont <= 10) {
        y = cont * x1;
        printf("%d x %d = %d \n", x1, cont, y);
        cont ++;

    }
}
