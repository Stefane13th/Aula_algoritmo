/*Um usuário deseja um algoritmo onde possa escolher que tipo de média deseja calcular
a partir de três notas. Faça um programa que leia as notas, a opção escolhida pelo usuário
e calcule a média.
1. Média aritmética
2. Média ponderada (pesos 3, 3 e 4)*/

#include <stdio.h>

int main () {

    float nota1 = 0, nota2 = 0, nota3 = 0, media_a = 0, media_p = 0; 
    int opcao = 0;

    printf("Digite a primeira nota:");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:");
    scanf("%f", &nota2);
    printf("Digite a terceira nota:");
    scanf("%f", &nota3);
    //Lendo a opcao para o switch e apresentando as opcoes
    printf("Escolha uma opcao:\n");
    printf("1. Media aritmetica\n");
    printf("2. Media ponderada\n opcao escolhida:");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1 /* constant-expression */:
            media_a = (nota1 + nota2 + nota3)/3;
            printf("Resultado da media aritmetica eh: %2.f",media_a);/* code */
        break;
    case 2 /* constant-expression */:
            media_p = ((nota1*3 + nota2*3 + nota3*4)/(3 + 3 + 4));
            printf("Resultado da media ponderada eh: %2.f",media_p);/* code */
        break;
    default:
        printf("Operacao invalida");
        break;
    }

}