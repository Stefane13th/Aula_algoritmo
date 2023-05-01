/* Escrever um algoritmo que solicite a distância em km e o tempo de viagem em horas
de um automóvel e dizer se a velocidade média foi superior ao limite de 110km/h ou não
*/

#include <stdio>

int main () {

    float d = 0, temp = 0, vm = 0;

    printf ("Digite a distancia (em km):");
    scanf("%f", &d);

    printf ("Digite o tempo de viagem (em horas):");
    scanf("%f", &temp);

    vm = d / temp;

    if (vm > 110) {
        printf ("velocidade superior ao limite de 110km/h",vm);

    } else {
        printf ("velocidade inferior ao limite de 110km/h",vm);
    }

    return 0;
}