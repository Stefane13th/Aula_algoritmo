// Exemplo 1
#include<stdio.h>
int main() 
{
    int y = 0, cont = 0, c = 0;

        printf("informe o valor inteiro e positivo da tabuada:");
        scanf("%d", &c);
        for ( cont = 0; cont <= 10; cont ++)
    {
        y = cont * c;
        printf("Valor da tabuada %d * %d = %d \n", cont, c, y);

    }

}