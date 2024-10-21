/* Calcular a idade média de um grupo de N pessoas, informando quantas pessoas
do grupo são menores de idade.
*/

#include <stdio.h>

int main(){

    int N, idade, menores = 0;
    float media = 0;

    printf("Quantas pessoas? ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++){
        printf("Idade da pessoa %d: ", i);
        scanf("%d", &idade);
        media += idade;

        if (idade < 18)
            menores++;
    }

    media /= 5.0;

    printf("A media de idade das 5 pessoas eh: %.1f\n", media);
    printf("E %d pessoas sao menores de idade.\n", menores);

    return 0;
}