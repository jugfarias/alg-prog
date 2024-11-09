/*
Escreva um algoritmo que leia um inteiro N (0<N <=15, fazer validação) e mostre os N
primeiros termos dessa série. Em princípio você não precisa usar arrays para resolver o
problema.
*/

#include <stdio.h>

#define MAX 15

int main(){

    int N, num, num_1, num_2;

    do{
        printf("Entre com o valor de N (entre 1 e 15): ");
        scanf("%d", &N);

        if (N <= 0 || N > MAX)
            printf("Valor invalido!\n");

    }while (N <= 0 || N > MAX);

    for (int i = 1; i < N + 1; i++){
        if (i == 1){
            num = 0;
        }else if (i == 2){
            num_1 = num;
            num = 1;
        }else{
            num_2 = num_1;
            num_1 = num;
            num = num_1 + num_2;
        }

        printf("%d ", num);
    }

    printf("\n");

    return 0;
}