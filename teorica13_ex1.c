/*
Escreva um programa em C que armazena valores fictícios de distâncias em km entre
pares de 4 cidades (sem especificarmos os nomes das cidades). Por exemplo, o valor
da matriz na posição [0,1] representa a distância entre a cidade com índice 0 e a
cidade com índice 1. As distâncias fictícias serão geradas com números aleatórios, no
mínimo 50km e no máximo 300km. Após a geração da matriz, imprima a matriz de
distâncias na tela e imprima também os índices das duas cidades mais distantes
entre si. Observe que a matriz de distâncias é uma matriz simétrica.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIST_MIN 50
#define DIST_MAX 300


int main() {

    int distancias[4][4];
    int maior_distancia = 0, i_maior, j_maior;

    srand(time(NULL));

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (i == j){
                distancias[i][j] = 0;
            }else if(i > j){
                distancias[i][j] = distancias[j][i];
            }else{
                distancias[i][j] = DIST_MIN + rand()%(DIST_MAX - DIST_MIN + 1);
            }
        }
    }

    printf("Matriz de distancias:\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
           printf("%6d", distancias[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
           if (distancias[i][j] > maior_distancia){
                maior_distancia = distancias[i][j];
                i_maior = i;
                j_maior = j;
           }
        }
    }

    printf("A maior distancia esta entre as cidades %d e %d e eh de %dkm", i_maior, j_maior, maior_distancia);

    return 0;

}