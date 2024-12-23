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
    char procurado[TAMNOME];
    int encontrado = 0, op = 0;

    arq = fopen(ARQ, "rb");

    if(!arq){
        printf("Erro na abertura do arquivo.\n");
    }else{

       do{

            rewind(arq); 
            encontrado = 0;
            printf("Nome a ser buscado:");
            gets(procurado);

            while(!feof(arq) && encontrado == 0){
                if(fread(&atleta, sizeof(ATLETA), 1, arq) == 1){
                    if(!strcmp(atleta.nome, procurado)){
                        printf("Altura do atleta %s: %.2fm\n", atleta.nome, atleta.altura);
                        encontrado = 1;
                    }
                }else{
                    printf("Erro na leitura.\n");
                }
            }

            if(!encontrado){
                printf("Atleta nao foi encontrado.\n");
            }

            printf("1- Buscar outro atleta\n");
            printf("2- Encerrar\n");
            scanf("%d", &op);
            getchar();
            

        }while(op != 2);

        fclose(arq);
    }

    return 0;
}