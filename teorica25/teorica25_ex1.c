#include <stdio.h>

#define NOMEARQ "numeros.txt"
#define QTD 5

int main(){

    FILE *arq;
    int vetor[QTD], num;

    arq = fopen(NOMEARQ, "w");

    if (arq == NULL){
        printf("Erro ao abrir arquivo para escrita.\n");
    }else{
        for (int i = 0; i < QTD; i++){
            printf("%do numero: ", i+1);
            scanf("%d", &num);
            fprintf(arq, "%d\n", num);
        }
    }

    fclose(arq);

    arq = fopen(NOMEARQ, "r");

    if(arq == NULL){
        printf("Erro ao abrir arquivo para leitura.\n");
    }else{
        for (int i = 0; i < QTD; i++){
            if(fscanf(arq, "%d", &num) == 1){
                vetor[i] = num;
                printf("Numero %d adicionado ao vetor. \n", num);
            }
        }
    }

    printf("Vetor lido do arquivo: ");
    for (int i = 0; i < QTD; i++){
        printf("%d \t", vetor[i]);
    }

    printf("\n");

    fclose(arq);


    return 0;
}