#include <stdio.h>

#define N 5
#define NOMEARQ "arquivo.bin"

int main(){

    int num, vetor[N];
    FILE *arq;

    arq = fopen(NOMEARQ, "wb"); // abre o arquivo para escrita

    if (!arq){ // se não abriu
        printf("Erro na abertura do arquivo.\n");
    }else{
        printf("Arquivo aberto para escrita!\n");
        
        for (int i = 0; i < N; i++){
            printf("Numero inteiro %d: ", i+1);
            scanf("%d", &num);

            if (fwrite(&num, sizeof(int), 1, arq) != 1){
                printf("Erro na escrita!\n");
            }
        }
    }

    fclose(arq);

    arq = fopen(NOMEARQ, "rb"); // abre o arquivo para escrita

    if (!arq){ // se não abriu
        printf("Erro na abertura do arquivo.\n");
    }else{
        printf("Arquivo aberto para leitura!\n");

        for(int i = 0; i < N; i++){
            if (fread(&vetor[i], sizeof(int), 1, arq) != 1){
                printf("Erro na leitura!\n");
            }
        }
    }

    fclose(arq);

    printf("Valores lidos do arquivo: \n");
    for (int i = 0; i < N; i++){
        printf("%d \t", vetor[i]);
    }

    return 0;
}