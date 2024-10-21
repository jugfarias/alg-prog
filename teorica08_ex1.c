/*
Faça um programa para ler uma sequência de 5 inteiros que apresente ao final
o maior e o menor valor lidos.
*/

#include <stdio.h>

int main(){
    int num, maior, menor;

    for (int i = 1; i <= 5; i++){
        printf("Digite o valor %d: ", i);
        scanf("%d", &num);

        if(i == 1){
            maior = menor = num;
        }else if (num > maior){
            maior = num;
        }else if (num < menor){
            menor = num;
        }
    }

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;
}