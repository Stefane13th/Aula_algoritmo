/*Ler dois valores	para as	variáveis A	 e	B,e	 efetuar a troca dos valores de	
forma que a variável A	passe a	possuir	 o	valor	 da	 variável B	e a	 variável B	
passe	a possuir o valor da variável A. Apresentar	os	valores	trocados. */

#include <stdio.h>

int main () {

    int a =0, b = 0, a1 = 0, b1 = 0;

//Dados de entrada fornecidos pelo usuário
//Recebendo o valor de a
    printf("Digite um valor para a variavel a:");
    scanf("%d",&a);
//Recebendo o valor de b
    printf("Digite um valor para a variavel b:");
    scanf("%d",&b);

/*Processamento, para realizar a troca deve-se declarar duas variaveis 
auxiliares que guardaram os valors de a e b*/
//Variaveis auxiliarem a1 e b1
    a1 = b;
    b1 = a;
    a = a1;
    b = b1;

//Dados de saída, apresentar os valores trocados de a e b
    printf("Valor trocado de a eh:%d \n",a);
    printf("Valor trocado de b eh:%d \n",b);

return 0;

}