#include <stdio.h>
#include <math.h>
#define VALOR 120
#define M2PORLATA 95

int main() {
    int qtd_chapas;
    float larg, comp, area, latas, total;

    printf("Quantidade de chapas: ");
    scanf("%d", &qtd_chapas);

    printf("Largura (m): ");
    scanf("%f", &larg);

    printf("Comprimento (m): ");
    scanf("%f", &comp);

    area = larg * comp * qtd_chapas; // calcula a área total a ser pintada

    latas = ceil(area / M2PORLATA); // calcula e arredonda para cima quantas latas são necessárias
    printf("%.0f latas necessarias.\n", latas);

    total = latas * VALOR; // calcula o valor total da compra

    printf("Valor total: R$%.2f\n", total);

    return 0;
}
