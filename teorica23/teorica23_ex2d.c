#include <stdio.h>
#include <string.h>

#define TAMNOME 30
#define ARQ "atletas.bin"

typedef struct struct_atleta{
    char nome[TAMNOME];
    int idade;
    float altura;
}ATLETA;

int main(){

    ATLETA atleta;
    FILE *arq;
    int op = 0;

    arq = fopen(ARQ, "ab");

    if (arq == NULL) {
        printf("Erro: arquivo não está aberto.\n");
        return 1;
    }

    if(!arq){
        printf("Erro na abertura para adicionar atletas.\n");
    }else{
        do{
            printf("Nome: ");
            fgets(atleta.nome, TAMNOME, stdin);
            atleta.nome[strcspn(atleta.nome, "\n")] = '\0';

            printf("Idade: ");
            scanf("%d", &atleta.idade);
            while (getchar() != '\n');

            printf("Altura: ");
            scanf("%f", &atleta.altura);
            while (getchar() != '\n');

            if (fwrite(&atleta, sizeof(ATLETA), 1, arq) != 1){
                printf("Erro ao adicionar atleta.\n");
            }else{
                printf("Atleta %s adicionado com sucesso.\n");
            }

            printf("Deseja adicionar outro atleta? \n");
            printf("1- Adicionar outro atleta\n");
            printf("2- Encerrar\n");
            scanf("%d", &op);
            while (getchar() != '\n');

        }while (op != 2);

        fclose(arq);
    }

    return 0;
}