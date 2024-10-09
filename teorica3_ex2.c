/*
Faça um algoritmo que:
– leia um valor inteiro;
– calcule o menor número de notas necessárias para completar este valor. Lembre que as notas correntes no real são 
100,50,20,10,5, 2 e 1 (incluindo aqui também a moeda).
*/ 

#include <stdio.h>

int main() {
    int valor, qtd_notas;

    printf("Valor: ");
    scanf("%d", &valor);

    qtd_notas = valor/100;
    printf("notas de 100: %d\n", qtd_notas);
    valor %= 100;

    qtd_notas = valor/50;
    printf("notas de 50: %d\n", qtd_notas);
    valor %= 50;

    qtd_notas = valor/20;
    printf("notas de 20: %d\n", qtd_notas);
    valor %= 20;

    qtd_notas = valor/10;
    printf("notas de 10: %d\n", qtd_notas);
    valor %= 10;

    qtd_notas = valor/5;
    printf("notas de 5: %d\n", qtd_notas);
    valor %= 5;

    qtd_notas = valor/2;
    printf("notas de 2: %d\n", qtd_notas);
    valor %= 2;

    qtd_notas = valor;
    printf("moedas de 1: %d\n", qtd_notas);

    return 0;
}