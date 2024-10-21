/*
Utilizando o comando iterativo for, faça um algoritmo / programa em C que calcule o
fatorial de um número inteiro positivo informado
*/

#include <stdio.h>

int main(){

    int fat = 1, num;

    printf("Escolha um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num > 0 && (num % 1) == 0) { // se for inteiro positivo
        for (int i = num; i > 1; i--){
            fat *= i;
        }

        printf("Fatorial de %d = %d\n", num, fat);
    }else{
        printf("Valor invalido.\n");
    }

    return 0;
}
