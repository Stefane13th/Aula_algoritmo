/* Desenvolva o  algoritmo e a codificação para os  seguintes programas (português estruturado ou  C):
 a. Ler	a temperatura	em	graus	Celsius	e apresentá-la	convertida	em	Fahrenheit.  
 A fórmula de conversão é: Fahrenheit = ( Celsius*1,8)*/

#include <stdio.h>

int main () {

    float cel = 0, fah = 0;

    printf("Digite a temperatura em graus Celsius:");
    scanf("%f",&cel);

    fah = cel*1.8;

    printf("Mostre o valor convertido %f", fah);
    scanf("%f",&fah);
}