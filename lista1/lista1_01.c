/* 
Ler as coordenadas de dois pontos no plano cartesiano e imprimir a distância entre estes dois
pontos
*/

#include <stdio.h>
#include <math.h>

int main (){

    float x1, y1, x2, y2, d;

    printf("Informe o valor de x1: ");
    scanf("%f", &x1);

    printf("Informe o valor de y1: ");
    scanf("%f", &y1);

    printf("Informe o valor de x2: ");
    scanf("%f", &x2);

    printf("Informe o valor de y2: ");
    scanf("%f", &y2);

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia entre os pontos (%.1f, %.1f) e (%.1f, %.1f) eh: %.2f\n", x1, y1, x2, y2, d);

    return 0;
}