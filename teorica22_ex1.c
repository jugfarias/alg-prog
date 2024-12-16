#include <stdio.h>

#define NRNOTAS 3
#define TAMNOME 15
#define QTDALUNOS 3

typedef struct struct_aluno{
    char nome[TAMNOME];
    float notas[NRNOTAS];
    float media;
    char conceito;
}ALUNO;

void le_alunos(ALUNO alunos[], int qtd){

    for (int i = 0; i < qtd; i++){
        printf("Nome do aluno %d: ", i+1);
        scanf("%s", alunos[i].nome);

        for (int j = 0; j < NRNOTAS; j++){
            printf("Nota %d do aluno %d: ", j+1, i+1);
            scanf("%f", &alunos[i].notas[j]);
        }

        printf("\n");
    }

}

void calcula_media(ALUNO alunos[], int qtd){

    float soma;

    for (int i = 0; i < qtd; i++){
        
        soma = 0;

        for (int j = 0; j < NRNOTAS; j++){
            soma += alunos[i].notas[j];
        }

        alunos[i].media = soma / NRNOTAS;
    }

}

void define_conceito(ALUNO alunos[], int qtd){
    for (int i = 0; i < qtd; i++){
        if (alunos[i].media >= 9){
            alunos[i].conceito = 'A';
        }else if (alunos[i].media >= 7.5){
            alunos[i].conceito = 'B';
        }else if (alunos[i].media >= 6){
            alunos[i].conceito = 'C';
        }else{
            alunos[i].conceito = 'D';
        }
    }
}

void exibe_conceitos(ALUNO alunos[], int qtd){

    printf("Media dos alunos: \n");
    printf("Aluno \t Media \t Conceito \n");

    for (int i = 0; i < qtd; i++){
        printf("%s \t %.2f \t %c\n", alunos[i].nome, alunos[i].media, alunos[i].conceito);
    }


}

int main(){

    ALUNO alunos[QTDALUNOS];

    le_alunos(alunos, QTDALUNOS);
    calcula_media(alunos, QTDALUNOS);
    define_conceito(alunos, QTDALUNOS);
    exibe_conceitos(alunos, QTDALUNOS);


    return 0;
}