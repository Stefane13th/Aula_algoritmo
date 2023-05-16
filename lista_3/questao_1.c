// 1. Construa um programa que apresente os 100 primeiros números ímpares. 
#include<stdio.h>
#include <math.h>


int main() {
   int cont = 0, impares = 0;


   while (impares <= 100) {
       if (cont %2 == 1) {
           printf("Impar = %d \n", cont);
           impares++;
       }
       cont++;
   }
}
