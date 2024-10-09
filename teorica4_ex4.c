/*
Dados um par de valores x e y, que representam as coordenadas de um ponto no plano, determinar a localização do 
ponto: se em um quadrante, em um dos eixos ou na origem.
*/

#include <stdio.h>

int main() {

    int x, y;

    printf("x = ");
    scanf("%d", &x);

    printf("y = ");
    scanf("%d", &y);

    if (x == 0 && y == 0)
        printf("O ponto esta na origem.\n");
    
    if (x == 0 && y != 0)
        printf("O ponto esta no eixo y.\n");

    if (x != 0 && y == 0)
        printf("O ponto esta no eixo x.\n");

    if (x > 0 && y > 0)
        printf("O ponto esta no primeiro quadrante.\n");

    if (x < 0 && y > 0)
        printf("O ponto esta no segundo quadrante.\n");
    
    if (x < 0 && y < 0)
        printf("O ponto esta no terceiro quadrante.\n");
    
    if (x > 0 && y < 0)
        printf("O ponto esta no quarto quadrante.\n");


    return 0;
}