#include <stdio.h>

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
    int i = 1;

    arq = fopen(ARQ, "rb");

    if(!arq){
        printf("Erro na abertura do arquivo.\n");
    }else{
        while(!feof(arq)){
            if(fread(&atleta, sizeof(ATLETA), 1, arq) == 1){
                printf("Leitura do atleta %d realizada com sucesso: \n", i);
                printf("Nome: %s\n", atleta.nome);
                printf("Idade: %d anos\n", atleta.idade);
                printf("Altura: %.2fm\n", atleta.altura);
            }else{
                printf("Erro na leitura do atleta %d.\n", i+1);
            }

            i++;
        }
    }

    fclose(arq);

    return 0;
}