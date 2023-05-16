/*6. Obtenha um número digitado pelo usuário e repita a operação de multiplicar ele
por três (imprimindo o novo valor) até que ele seja maior do que 100.
Ex: se o usuário digita 5, devemos observar na tela a seguinte sequência: 5 15 45 135 */

#include <stdio.h>

int main () {
    int numb = 0, i = 0;

    printf("Forneca um numero:");
    scanf("%d", &numb);
    i = numb;
    
    do {

        i=i*3;
        printf("%d \n",i);
        

    } while (i<100);
    
    return 0;
}