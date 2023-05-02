/*Criar um algoritmo que leia um número inteiro e diga a qual mês do ano o mesmo corresponde. 
Se o valor for maior que doze ou menor que um, diga que o valor não corresponde a nenhum mês*/

#include <stdio.h>

int main () {

int opcao = 0;

    printf("Digite o numero que corresponde ao mes do ano:");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1 /* constant-expression */:
        printf("Mes de janeiro \n",opcao);/* code */
        break;
        
    case 2 /* constant-expression */:
        printf("Mes de fevereiro \n",opcao);/* code */
        break;
    
    case 3 /* constant-expression */:
    printf("Mes de marco \n",opcao);/* code */
    break;

    case 4 /* constant-expression */:
    printf("Mes de abril \n",opcao);/* code */
    break;

    case 5 /* constant-expression */:
    printf("Mes de maio \n",opcao);/* code */
    break;

    case 6 /* constant-expression */:
    printf("Mes de junho \n",opcao);/* code */
    break;

    case 7 /* constant-expression */:
    printf("Mes de julho \n",opcao);/* code */
    break;

    case 8 /* constant-expression */:
    printf("Mes de agosto \n",opcao);/* code */
    break;

    case 9 /* constant-expression */:
    printf("Mes de setembro \n",opcao);/* code */
    break;

    case 10 /* constant-expression */:
    printf("Mes de outubro \n",opcao);/* code */
    break;

    case 11 /* constant-expression */:
    printf("Mes de novembro \n",opcao);/* code */
    break;

    case 12 /* constant-expression */:
    printf("Mes de dezembro \n",opcao);/* code */
    break;

    default:

    printf("O valor nao corresponde a nenhum mes,tende novamente. \n");
        break;
    }

}

    