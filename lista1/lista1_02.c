/*
Dado o preço de um produto em reais, converter este valor para o equivalente em dólares. O
programa deverá ler o preço e a taxa de conversão para o dólar
*/

#include <stdio.h>

int main(){

    float reais, dolares, taxa;

    printf("Digite um valor em reais: ");
    scanf("%f", &reais);

    printf("Digite a taxa de conversao de reais para dolar: ");
    scanf("%f", &taxa);

    dolares = reais / taxa;

    printf("R$%.2f reais eh U$%.2f dolares.\n", reais, dolares); 

    return 0;
}