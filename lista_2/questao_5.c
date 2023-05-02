/*Crie um algoritmo que leia o sexo de uma pessoa (‘M’ ou ‘F’) 
e exiba a mensagem “Masculino” ou “Feminino”.*/

#include <stdio.h>

int main () {
    char sexo;

    //Recebendo o sexo da pessoa
    printf("Digite M para masculino e F para feminino:");
    scanf("%c",&sexo);

    //Aplicando a condição para exibir a mensagem “Masculino” ou “Feminino”
    if (sexo == 'M' || sexo == 'm') {
        printf("Masculino\n");
    } else {
        printf("Feminino\n");
    }

    //Incluindo uma verificação adicional para garantir que a entrada do usuário seja um dos valores esperados
    if (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
       
    printf("Entrada invalida: por favor, digite 'M' ou 'F'.\n");
    
    return 1;
    }

}