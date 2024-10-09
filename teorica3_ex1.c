/*
Um funcionário recebe uma comissão por cada venda efetuada. Faça um algoritmo e o programa em C que:
- leia valor de uma venda e o percentual de comissão (número inteiro correspondente ao percentual)
- calcule a comissão a ser recebida
- mostre a comissão a ser recebida
*/

#include <stdio.h>

int main() {
    float total, comissao;
    int porcentagem;

    printf("Total da compra: ");
    scanf("%f", &total);

    printf("Comissao (em %): ");
    scanf("%d", &porcentagem);

    comissao = total * porcentagem / 100;

    printf("A comissao de %d%% da compra de R$%.2f foi de: %.2f\n", porcentagem, total, comissao);

    return 0;
}