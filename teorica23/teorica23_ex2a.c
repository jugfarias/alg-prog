#include <stdio.h>

#define TAMNOME 30
#define ARQ "atletas.bin"
#define QUANT 3

typedef struct struct_atleta{
    char nome[TAMNOME];
    int idade;
    float altura;
}ATLETA;

int main(){

    FILE *arq;
    ATLETA atleta;

    arq = fopen(ARQ, "wb");

    if(!arq){
        printf("Erro ao abrir arquivo!");
    }else{
        for (int i = 0; i < QUANT; i++){
            printf("Nome do atleta %d: ",i+1);
            scanf("%s", &atleta.nome);

            printf("Idade do atleta %d: ", i+1);
            scanf("%d", &atleta.idade);

            printf("Altura do atleta %d: ", i+1);
            scanf("%f", &atleta.altura);

           if(fwrite(&atleta, sizeof(ATLETA), 1, arq) == 1){
                printf("Atleta %d cadastrado com sucesso.\n", i+1);
           }
        }
    }

    fclose(arq);

    return 0;
}