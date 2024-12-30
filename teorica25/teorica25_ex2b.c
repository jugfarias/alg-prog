#include <stdio.h>
#include <string.h>

#define NOMEARQ "agenda.txt"

int main(){

    FILE *arq;
    int encontrou = 0, ddd, num;
    char nome[16], busca[16];

    arq = fopen(NOMEARQ, "r");

    if (arq == NULL){
        printf("Erro ao abrir arquivo para leitura.\n");
    }else{

        printf("Nome a buscar? ");
        scanf("%s", &busca);

        do{
            if (fscanf(arq, "%s %d %d", &nome, &ddd, &num) == 3){
                if (!strcmp(nome, busca)){
                    printf("%s Prefixo: %d Telefone: %d", nome, ddd, num);
                    encontrou = 1;
                }
            }

        }while(encontrou == 0 && !feof(arq)); 
    }

    if(encontrou == 0){
        printf("Nome nao encontrado na agenda.");
    }

    fclose(arq);

    return 0;
}