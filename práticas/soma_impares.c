#include <stdio.h>

int main() {

    int maior, menor, i, aux, soma = 0;

    printf("Digite um dos limites do intervalo: ");
    scanf("%d", &menor);

    printf("Digite o outro limite do intervalo: ");
    scanf("%d", &maior);

    if (maior < menor){ // se maior for menor que menor, troca
        aux = maior;
        maior = menor;
        menor = aux;
    }

    for (i = menor; i <= maior; i++){
        if(i%2 != 0){ // se é impar, add a variável soma
            soma += i;
        }
    }

    printf("A soma dos impares no intervalo de %d a %d foi: %d.\n", menor, maior, soma);

    return 0;
}