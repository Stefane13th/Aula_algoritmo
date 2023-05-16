// Questão 4

#include<stdio.h>
#include <math.h>

int main() {
    int cont = 1;

    while (cont < 200) {

        if (cont %4==0) {
            printf("apresentar numeros divisiveis por 4: %d", cont);
            printf("\n");
        }
        cont ++;
    }
}