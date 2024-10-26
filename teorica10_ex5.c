/*
Faça um programa que lê 10 valores inteiros, armazenando-os em um arranjo. A seguir o programa deve ordenar
os valores deste vetor em ordem crescente, de tal forma que o menor valor fique na posição zero, o maior valor
fique na posição 9 e os valores intermediários obedeçam a ordem crescente.
*/

#include <stdio.h>
#define TAM 10

int main(){

    int arr[TAM], trocou, aux;

    for (int i=0; i < TAM; i++){
        printf("Informe o valor (inteiro) %d: ", i);
        scanf("%d", &arr[i]);
    }

    do{
        trocou = 0;
        
        for (int i=0; i < TAM; i++){
            if (arr[i] > arr[i+1]){
                aux = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = aux;
                trocou = 1;
            }
        }
    }while(trocou == 1);

    for (int i=0; i < TAM; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}