#include <stdio.h>
#include <math.h>

int main() {

    int N, i;
    float num, maior, desvio;
    float media = 0, quadrados = 0;

    printf("Digite o numero de valores considerados: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++){
        printf("informe o valor %d: ", i);
        scanf("%f", &num);

        if (i == 1 || num > maior){
            maior = num;
        }

        media += num;
        quadrados = quadrados + num*num;

    }

    media /= N;

    desvio = (quadrados/N) - media*media;
    desvio = sqrt(desvio);

    printf("maior valor: %.2f\n", maior);
    printf("media: %.2f\n", media);
    printf("desvio padrao: %.2f\n", desvio);

    return 0;
}