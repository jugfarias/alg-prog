/*
Dados três valores, calcular e imprimir as médias aritmética e harmônica destes valores. 
*/

#include <stdio.h>

int main(){

    float num1, num2, num3, mediaA, mediaH;

    printf("Valor 1: ");
    scanf("%f", &num1);

    printf("Valor 2: ");
    scanf("%f", &num2);

    printf("Valor 3: ");
    scanf("%f", &num3);

    mediaA = (num1 + num2 + num3) / 3;

    mediaH = (1/num1) + (1/num2) + (1/num3);
    mediaH = 3 / mediaH;

    printf("Media aritmetica: %.2f\n", mediaA);
    printf("Media harmonica: %.2f\n", mediaH);

    return 0;
}