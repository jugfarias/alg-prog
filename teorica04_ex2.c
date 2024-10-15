// Programa que lê um valor inteiro e avisa se ele for igual a 10

#include <stdio.h>

int main() {

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num == 10)
        printf("Numero igual a 10.\n");

    return 0;

}