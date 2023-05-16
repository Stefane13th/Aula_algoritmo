// Questão 3

#include<stdio.h>
#include <math.h>

int main() {
    int cont = 0;
    float nota1= 0, nota2=0, nota3=0, media=0;

    while (cont <= 20) {
        printf("informe a nota do aluno - nota1: ");
        scanf("%f", &nota1);
        printf("informe a nota do aluno - nota2: ");
        scanf("%f", &nota2);
        printf("informe a nota do aluno - nota3: ");
        scanf("%f", &nota3);
        media = (nota1+nota2+nota3)/3;
        printf("media aritmetica = %f\n", media);

        cont ++;

    }
}