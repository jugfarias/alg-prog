/*
Preencher um arranjo A (200 posições) por leitura do teclado
Procurar o maior elemento deste arranjo
Informar o valor do maior elemento e sua posição
*/

#include <stdio.h>

#define TAM 200

int main(){

    int A[TAM], maior, index;

    for (int i=0; i < TAM; i++){
        printf("Valor do elemento %d: ", i);
        scanf("%d", &A[i]);
    }

    maior = A[0];
    index = 0;
    for (int i=1; i < TAM; i++){
        if (A[i] > maior){
            maior = A[i];
            index = i;
        }
    }

    printf("O maior elemento eh %d e esta na posicao %d\n", maior, index);


    return 0;
}