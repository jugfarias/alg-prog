/*
Faça um programa que lê dois valores, o primeiro servindo de indicador de operação e o segundo correspondendo ao 
raio de uma circunferência. 
– Caso o primeiro valor lido seja igual a 1, calcular e imprimir a área delimitada pela circunferência.
– Se o valor lido for 2, calcular e imprimir o perímetro da circunferência.
– E se o valor lido for diferente destes dois valores, imprimir uma mensagem dizendo que o indicador de operação 
está incorreto. 
*/

#include <stdio.h>

#define PI 3.1415

int main() {

    int escolha;
    float raio, area, perimetro;

    printf("[ 1 ] \t Calcular a area\n");
    printf("[ 2 ] \t Calcular o perimetro\n");
    printf("Escolha (1 ou 2): ");
    scanf("%d", &escolha);

    printf("Valor do raio (em m): ");
    scanf("%f", &raio);

    switch(escolha){
        case 1:
            area = PI * raio * raio;
            printf("Area: %.1fm^2.\n", area);
            break;
        case 2:
            perimetro = 2 * PI * raio;
            printf("Perimetro: %.1fm.\n", perimetro);
            break;
        default:
            printf("Valor invalido.\n");
    
    }

    return 0;
}