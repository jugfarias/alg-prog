// Como calcular a média da idade de um grupo de 5 pessoas?

#include <stdio.h>

int main(){

    int idade;
    float media = 0;

    for (int i = 1; i <= 5; i++){
        printf("Idade da pessoa %d: ", i);
        scanf("%d", &idade);
        media += idade;
    }

    media /= 5.0;

    printf("A media de idade das 5 pessoas eh: %.1f\n", media);

    return 0;
}