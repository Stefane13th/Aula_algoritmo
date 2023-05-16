// questão 7

#include<stdio.h>
#include <math.h>

int main() {
    int ax = 0, x1 = 0;
    do {
        printf("informar numero:", ax);
        scanf("%d", &ax);

        if (ax == 10) {
            x1 = x1 + 1;

        }
    } while (ax != 0);
        printf("foram contados %d o 10:", x1);
        printf("\n");
}