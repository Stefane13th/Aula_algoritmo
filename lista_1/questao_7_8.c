#include <stdio.h>

int main () {

    int c = 0, quant = 0;

    float valor = 0, total_compra=0;

// Identificando os dados de entrada do algoritmo
    //Recebendo o código do produto
    printf("Codigo do produto:");
    scanf("%d",&c);
    //Recebendo o valor do produto
    printf ("Digite o valor do produto:");
    scanf("%f", &valor);
    //Recebendo a quantidade de itens do produto
    printf("Digite a quantidade de itens:");
    scanf("%d",&quant);

    //Dados de processamento, calculo do valor total de compra.
    total_compra=valor*quant;

    //Dados de saída, mostrar o valor total calculado e codigo do produto.
    printf("O total de compra eh %f e o codio eh %d", total_compra,c);
}