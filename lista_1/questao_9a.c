/* Desenvolva o  algoritmo e a codificação para os  seguintes programas (português estruturado ou  C):
 a. Ler	a temperatura	em	graus	Celsius	e apresentá-la	convertida	em	Fahrenheit.  
 A fórmula de conversão é: Fahrenheit = ( Celsius*1,8)*/

#include <stdio.h>

int main () {

//Identificando as variaveis em Celsius = Cel e Fahrenheit = Fah
    float cel = 0, fah = 0;
// Recebendo a temperatura em graus Celsisus
    printf("Digite a temperatura em graus Celsius:");
    scanf("%.2f",&cel);

// Processamento dos dados, convertendo a temperatura para Fahrenheit
    fah = (cel*1.8)+32;

// Saídas de dados, apresentando a temperatura em Fahrenheit
    printf("Mostre o valor convertido para Fahrenheit : %.2f", fah);

}