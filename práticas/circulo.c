#include <stdio.h>
#define PI  3.14159265359

int main() {

    float r, p; // declaração das variáveis raio e perímetro

    printf("Raio do circulo: ");
    scanf("%f", &r);

    p = 2 * PI * r;

    printf("O perimetro do circulo de raio %.2f eh %.2f",r, p);

    return 0;
}
