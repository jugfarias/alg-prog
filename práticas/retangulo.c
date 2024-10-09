#include <stdio.h>

int main(){
    int larg, alt, area;

    printf("Largura: ");
    scanf("%d", &larg); // leitura de um valor inteiro (%d)

    printf("Altura: ");
    scanf("%d", &alt);

    area = larg * alt; // calcula a área do retângulo

    printf("A area de um retangulo de largura %d e altura %d eh %d.",larg, alt, area);

    return 0;
}
