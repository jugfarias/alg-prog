/*
Uma loja tem um conjunto de tipos de produtos, cada qual com um código, que varia de 10 a 99
Faça um programa que lê o valor de cada tipo de produto
A seguir, o programa deve ler um valor e informar qual é o código do tipo de produto que possui aquele valor
(Assumir que todos os produtos tem preços diferentes)
*/

#include <stdio.h>

#define TAMVET 10

int main(){

    float valores[TAMVET], valor_buscado;
    int achou = 0, j = 0;

    for (int i = 0; i < TAMVET; i++){
        printf("Informa o preco do produto de código %d: R$", (i + 10));
        scanf("%f", &valores[i]);
    }

    printf("Qual valor deseja buscar? R$");
    scanf("%f", &valor_buscado);


    do{
        if (valores[j] == valor_buscado){
            printf("O produto com valor %.2f eh o de codigo %d.\n", valor_buscado, (j+10));
            achou = 1;
        }

        j++;
    }while(achou != 1);

    return 0;
}