/*Calcular	 o	 volume	 de	 uma	 lata	 de	 óleo	 utilizando	 a	 fórmula:	 volume	 =	
3.14159	x	r2	x	Altura*/

#include <stdio.h> //biblioteca
#include <math.h>

int main() {
    float a = 0, v = 0, r = 0;

//Recebendo o valor do raio da lata na variável "r"
    printf("Digite o valor raio:");
    scanf("%2.f",&r);

//Recebendo o valo da altura da lata na variável "a"
    printf("Digite a altura da lata:");
    scanf("%2.f",&a);

//Calculo do volume da lata de óleo
    v = 3.14159*pow(r,2)*a;

//Apresentando o calculo do volume da lata
    printf("O volume da lata de oleo eh: %2.f",v);

    return (0);
}