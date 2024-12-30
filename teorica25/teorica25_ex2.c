#include <stdio.h>

#define NOMEARQ "agenda.txt"

int main(){

    FILE *arq;
    char nome[16];
    int ddd, num, op;

    arq = fopen(NOMEARQ, "w");

    if (arq == NULL){
        printf("Erro ao abrir arquivo para escrita.\n");
    }else{
        do{

            printf("Entre com o nome: ");
            scanf("%s", &nome);
            fprintf(arq, "%s ", nome);

            printf("Entre com o prefixo (DDD): ");
            scanf("%d", &ddd);
            fprintf(arq, "%d ", ddd);

            printf("Entre com o numero de telefone: ");
            scanf("%d", &num);
            fprintf(arq, "%d\n", num);

            printf("Deseja continuar? (1 - S, 2 - N) ");
            scanf("%d", &op);

        }while(op != 2);
    }

    fclose(arq);

    return 0;
}