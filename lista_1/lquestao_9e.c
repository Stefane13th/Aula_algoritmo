/*Ler	quatro	valores	numéricos inteiros	e	apresentar	o	resultado	das	adições	e	
das	 multiplicações	 utilizando	 a propriedade	 distributiva	 para	 a	 máxima	
combinação	possível entre	as	quatro	variáveis.	Por	exemplo, considerando	o	
uso	 das variáveis	A,  B, C e D, devem	 ser feitas	 seis adições e	 seis	
multiplicações,	ou	seja, deve	ser	combinada	a	variável	A	com	B,	A	com	C	e	A	
com	D.	Depois	é necessário combinar a	variável B	com	a	C	e	a	B	com	a	D.	Por	
último	combinar C	com	D.*/

#include <stdio.h>

int main () {

    int a = 0, b = 0, c = 0, d = 0;
    int soma, soma1, soma2, soma3, soma4, soma5;
    int mult, mult1, mult2, mult3, mult4, mult5;

    printf("Digite um numero inteiro para variavel a:");
    scanf("%d",&a);
    printf("Digite um numero inteiro para variavel b:");
    scanf("%d",&b);
    printf("Digite um numero inteiro para variavel c:");
    scanf("%d",&c);
    printf("Digite um numero inteiro para variavel d:");
    scanf("%d",&d);

    soma = a + b;
    soma1 = a + c;    
    soma2 = a + d;
    soma3 = b + c;
    soma4 = b + d;
    soma5 = c + d;

    mult = a * b;
    mult1 = a * c;    
    mult2 = a * d;
    mult3 = b * c;
    mult4 = b * d;
    mult5 = c * d;

    printf("\nO resultado da primeira combinacao da adicao eh: %d",soma);
    printf("\nO resultado da segunda combinacao da adicao eh: %d",soma1);
    printf("\nO resultado da terceira combinacao da adicao eh: %d",soma2);
    printf("\nO resultado da quarta combinacao da adicao eh: %d",soma3);
    printf("\nO resultado da quinta combinacao da adicao eh: %d",soma4);
    printf("\nO resultado da sexta combinacao da adicao eh: %d",soma5);

    printf("\nO resultado da primeira combinacao da multiplicacao eh: %d",mult);
    printf("\nO resultado da segunda combinacao da multiplicacao eh: %d",mult1);
    printf("\nO resultado da terceira combinacao da multiplicacao eh: %d",mult2);
    printf("\nO resultado da quarta combinacao da multiplicacao eh: %d",mult3);
    printf("\nO resultado da quinta combinacao da multiplicacao eh: %d",mult4);
    printf("\nO resultado da sexta combinacao da multiplicacao eh: %d",mult5);

    return 0;

}