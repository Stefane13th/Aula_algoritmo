/*A partir de dois números fornecidos pelo usuário, escrever uma das seguintes
mensagens: a) Os dois são pares b) Os dois são impares c) O primeiro é par e o segundo é ímpar
d) O primeiro é ímpar e o segundo é par */

#include <stdio.h>

int main ()
{
    int numb = 0, numb1 = 0;

    //Recebendo numeros do usuario em numb e numb1
    printf("Digite um numero inteiro:");
    scanf("%d",&numb);

    printf("Digite um segundo numero inteiro:");
    scanf("%d",&numb1);

    if (numb%2 == 0 && numb1%2 == 0) {
        printf("Os dois numeros sao pares: %d e %d\n",numb, numb1);
    } else if (numb %2 != 0 && numb1%2 != 0) {
        printf("Os dois sao impares: %d e %d\n",numb, numb1);
    } else if (numb %2 == 0 && numb1%2 != 0) {
        printf("O primeiro eh par e o segundo eh impar: %d e %d\n",numb, numb1);
    } else if (numb %2 != 0 && numb1%2 == 0) {
        printf("O primeiro eh impar e o segundo eh par: %d e %d\n",numb, numb1);
    }

    return 0;

   }