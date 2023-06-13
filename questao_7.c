/*7. Faça um algoritmo que leia o número de alunos de uma turma, o número de
matricula (inteiro) e duas notas (reais) de cada aluno da turma (cada turma pode
ter no máximo 40 alunos). Após, o algoritmo deve apresentar um relatório
formatado da seguinte forma, com a informação de aprovado, em exame ou
reprovado (de acordo com a média final).*/ 


#include <stdio.h>

int main () {

    int cont = 0, numb = 0;
    float  nota1, nota2, media;

    while (cont < 3)
    {
        printf("informe a matricula:");
        scanf("%d", &numb);
        printf("informe a nota1:");
        scanf("%f", &nota1);
        printf("informe a nota2:");
        scanf("%f", &nota2);

        media = (nota1+nota2)/2;

        
        printf("Matrícula: %d\n", numb);
        printf("Média: %.2f\n", media);

        if (media > 7) {
            printf("Aprovado\n");
        } else if (media >= 4) {
            printf("Em exame\n");
        } else {
            printf("Reprovado\n");
        }

        cont++;
    } 
    
}