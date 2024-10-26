/*
Faça um programa que:
- lê do teclado o número de alunos de uma turma (assumir <= 60)
- lê a nota e o código de cada aluno
- informa os códigos e as notas dos alunos com nota menor do que a média.
*/

#include <stdio.h>
#define MAXALUNOS 60

int main(){

    int tam_turma, codigos[MAXALUNOS];
    float notas[MAXALUNOS], media=0;

    do{
        printf("Informe o tamanho da turma: ");
        scanf("%d", &tam_turma);
    }while(tam_turma < 1 || tam_turma > MAXALUNOS);

    for (int i=0; i < tam_turma; i++){
        printf("Codigo do aluno %d: ", i+1);
        scanf("%d", &codigos[i]);

        printf("Nota do aluno %d: ", codigos[i]);
        scanf("%f", &notas[i]);

        media += notas[i];
    }

    media /= tam_turma;
    printf("A media da turma foi: %.1f\n", media);

    for (int i=0; i < tam_turma; i++){
        if (notas[i] < media){
            printf("%d \t %.1f\n", codigos[i], notas[i]);
        }
    }

    return 0;
}