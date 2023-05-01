/* Escrever um algoritmo que solicite a distância em km e o tempo de viagem em horas
de um automóvel e dizer se a velocidade média foi superior ao limite de 110km/h ou não
*/

#include <stdio.h>

int main () {

    float d = 0, temp = 0, vm = 0;

//Recebendo informações de distancia em km
    printf("Digite a distancia (em km):");
    scanf("%f", &d);

//Recebendo informações do tempo em horas
    printf("Digite o tempo de viagem (em horas):");
    scanf("%f", &temp);

//Calculando a velocidade média
    vm = d / temp;

//Aplicando condição de velocidade média considerando o limite de 110km/h ou não
    if (vm > 110) {
        printf("velocidade superior ao limite de 110km/h: %2.f",vm);

    } else {
        printf("velocidade inferior ao limite de 110km/h: %2.f",vm);
    }

    return 0;
}