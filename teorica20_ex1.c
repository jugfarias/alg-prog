/*
Suponha que devemos criar um programa onde:
○ Um vetor de inteiros deve ser lido e depois todos os seus elementos
devem ser exibidos na tela, um ao lado do outro.
○ Suponha que o vetor tem um tamanho N no programa.
    ■ Vamos assumir N como 5 por conveniência, mas o programa deve
funcionar para qualquer valor de N.
○ O programa deve usar duas funções: uma para ler o vetor e outra para
exibir o vetor.
*/

#include <stdio.h>

#define N 5

void le_vetor(int vetor[], int tam){

    for(int i = 0; i < tam; i++){
        printf("vetor[%d] = ", i);
        scanf("%d", &vetor[i]);
    }

}

void exibe_vetor(int vetor[], int tam){

    printf("Vetor digitado: ");

    for(int i = 0; i < tam; i++){
        printf("%d \t", vetor[i]);
    }
}

int main(){

    int vetor[N];

    le_vetor(vetor, N);
    exibe_vetor(vetor, N);

    return 0;
}
