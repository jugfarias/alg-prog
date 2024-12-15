/*
Elaborar um programa que utilize a estrutura Aluno (nome, notas[3], media) para criar um vetor de 20 alunos e preencher as informações
- os nomes dos alunos devem ser obtidos do usuário
- as notas dos alunos nas três avaliações devem ser obtidas do usuário
- as medias devem ser calculadas, armazenadas e exibidas na tela
*/

#include <stdio.h>

#define NALUNOS 3
#define TAMNOME 30
#define NUMNOTAS 3

struct Aluno{
    char nome[TAMNOME];
    float notas[NUMNOTAS];
    float media;
};

void le_alunos(struct Aluno alunos[], int tam){

    for (int i = 0; i < tam; i++){
        printf("Nome do aluno %d: ", i+1);
        scanf("%s", alunos[i].nome);

        for (int j = 0; j < NUMNOTAS; j++){
            printf("Nota %d do aluno %d: ", j+1, i+1);
            scanf("%f", &alunos[i].notas[j]);
        }

        printf("\n");
    }

}

void calcula_media(struct Aluno alunos[], int tam){

    float soma;

    for (int i = 0; i < tam; i++){
        
        soma = 0;

        for (int j = 0; j < NUMNOTAS; j++){
            soma += alunos[i].notas[j];
        }

        alunos[i].media = soma / NUMNOTAS;
    }

}

void exibe_alunos(struct Aluno alunos[], int tam){

    printf("Media dos alunos: \n");
    printf("Aluno \t Media\n");

    for (int i = 0; i < tam; i++){
        printf("%s \t %.2f \n", alunos[i].nome, alunos[i].media);
    }


}

int main(){

    struct Aluno alunos[NALUNOS];

    le_alunos(alunos, NALUNOS);
    calcula_media(alunos, NALUNOS);
    exibe_alunos(alunos, NALUNOS);

    return 0;
}
