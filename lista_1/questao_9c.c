/* Calcular	 a	 quantidade	 de	 litros	 de	 combustível	 gasta	 em	 uma	 viagem,	
utilizando	 um	 automóvel	 que	 faz	 12km	 por	 litro.	 Para	 obter	 o	 cálculo,	 o	
usuário	deve	fornecer	o	tempo	gasto	e	a	velocidade	média	durante	a	viagem.	
Desta	forma,	será	possível	obter	a	distância	percorrida	com	a	fórmula:	
Distância =	tempo	x	velocidade
Tendo	 o	 valor	 da	 distância,	 basta	 calcular	 a	 quantidade	 de	 litros	 de	
combustível	utilizada	na	viagem	com	a	fórmula:	Litros	usados =	distância /	
2
O	programa	deve	apresentar	os	valores	da	velocidade	média,	tempo	gasto	na	
viagem,	distância	percorrida	e	a	quantidade	de	litros	utilizada	na	viagem.	*/

#include <stdio.h>

int main (){

    float t = 0, vm = 0, d = 0, l=0;

//Dados de entrada fornecidos pelo usuário
//Recebendo o tempo gasto na viagem pelo automóvel
    printf("Digite o tempo gasto pelo automovel (em horas):");
    scanf("%f",&t);
//Recebendo a velocidade média do automóvel
    printf("Digite a velocidade media do automovel (em km/h):");
    scanf("%f",&vm);

//Processamento, calculo da distância percorrida
    d= t * vm;

// Calculando a quantidade de litros utilizada na viagem
    l = vm/12; //considerando que o carro faz 12 km/litro

// Dados de saída solicitados no enunciado da questão
//Mostrar o valor da velocidade média
    printf("O valor da velocidade media eh: %2.f \n",vm);
//Mostrar o valor do tempo gasto
    printf("O valor do tempo gasto: %2.f\n",t);
//Mostrar o valor do calculo da distância
    printf("O valor do calculo da distancia eh: %2.f \n",d);
//Mostrar o valor de litros usados na viagem usando o valor da distancia
    printf("O valor de litros usados na viagem foi: %2.f \n",l);


    return 0;

}