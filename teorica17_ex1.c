/*
Faça um programa que lê as 3 notas de cada aluno (de uma turma de 30 alunos) e escreve a média correspondente
Utilize uma função que recebe as 3 notas e exibe a média
*/

#include <stdio.h>

#define NUM_ALUNOS 3
#define NUM_NOTAS 3

void calcula_media(int aluno, float n1, float n2, float n3){

    float media;

    media = (n1 + n2 + n3) / NUM_NOTAS;

    printf("A media do aluno %d eh de: %.1f\n", aluno + 1, media);

}

int main(){

    float notas[NUM_ALUNOS][NUM_NOTAS];

    for (int i = 0; i < NUM_ALUNOS; i++){
        for (int j = 0; j < NUM_NOTAS; j++){
            printf("Nota da P%d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
        }
        calcula_media(i, notas[i][0], notas[i][1], notas[i][2]);
    }

    return 0;
}
