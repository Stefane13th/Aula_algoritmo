/*Calcular	 o	 volume	 de	 uma	 lata	 de	 óleo	 utilizando	 a	 fórmula:	 volume	 =	
3.14159	x	r2	x	Altura*/

#include <stdio.h> //biblioteca
#include <math.h>

int main() {
    float a = 0, v, r = 0;
//Recebendo o valo da altura da lata na variável "a"
    printf("Digite o valor da altura:");
    scanf("%f",&a);

//Recebendo o valor do raio da lata na variável "r"
    printf("Digite o valor raio:");
    scanf("%f",&r);

//Calculo do volume da lata de óleo
    v = M_PI * pow(r, 2) * a;

//Apresentando o calculo do volume da lata
    printf("O volume da lata de oleo eh: %2.f",v);

    return 0;
}