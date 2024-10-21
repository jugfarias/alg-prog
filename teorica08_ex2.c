/*
Escreva um programa em C que tenha como entrada o número N de
termos da sequência de Fibonacci e que exibe os N primeiros termos da
sequência.
*/

#include <stdio.h>

int main(){

    int N, fibN, fibN1, fibN2;

    printf("Quantos termos da sequencia de Fibonacci? ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++){
        if (i == 1){
            fibN = 1;
        }else if (i == 2){
            fibN = 2;
            fibN1 = 1;       
        }else{
            fibN2 = fibN1;
            fibN1 = fibN;
            fibN = fibN1 + fibN2;
        }

        printf("%d ", fibN);

    }

    return 0;
}