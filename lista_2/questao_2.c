/*Ler a temperatura de uma pessoa doente e mostrar uma mensagem “ESTÁ COM
FEBRE” ou “Não está com febre” considerando o valor base de 37.5ºC.
*/

#include <stdio.h>

int main () {
    float t = 0;

//Recebendo a leitura da temperatura da pessoa
    printf("Digite o valor da temperatura");
    scanf("%f",&t);

//Aplicando a condição considerando o valor base de 37.5ºC
    if (t > 37.5) {
        printf("Está com febre %1.f",t);
    } else {
        printf("Não está com febre %1.f",t);
    }

    return 0;
}