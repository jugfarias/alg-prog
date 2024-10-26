/*
Uma loja tem um conjunto de tipos de produtos, cada qual com um código, informado pelo usuário
Faça um programa que lê o valor de cada tipo de produto e seu respectivo código
A seguir, o programa deve ler um valor e informar qual é o código do tipo de produto que possui aquele valor
(Assumir que todos os produtos tem preços diferentes)
*/

#include <stdio.h>

#define TAMVET 5

int main(){

    float valores[TAMVET], valor_buscado;
    int achou = 0, j = 0, codigos[TAMVET];

    for (int i = 0; i < TAMVET; i++){
        printf("Informe o codigo do produto: ");
        scanf("%d", &codigos[i]);
        printf("Informa o preco do produto de codigo %d: R$", codigos[i]);
        scanf("%f", &valores[i]);
    }

    printf("Qual valor deseja buscar? R$");
    scanf("%f", &valor_buscado);

    do{
        if (valores[j] == valor_buscado){
            printf("O produto com valor %.2f eh o de codigo %d.\n", valor_buscado, codigos[j]);
            achou = 1;
        }

        j++;
    }while(achou != 1);

    return 0;
}