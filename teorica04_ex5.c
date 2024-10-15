/*
John gosta de correr todos os dias. Ele conta o número de passos que ele dá no primeiro minuto da corrida e o 
número de passos que ele dá no último minuto da corrida. John faz então uma média dos passos para os 2 instantes 
e assume que este é o número médio de passos para toda a corrida. Escreva um programa em C que lê o número de 
passos do primeiro minuto, o número de passos do último minuto e o número de horas e minutos total que John correu. 
Calcule e apresente a distância em km que John percorreu neste tempo. Considere que cada passo de John mede 70cm.
*/

#include <stdio.h>

#define TAM_PASSO_CM 70
#define CM_EM_1KM 100000
#define TAM_PASSO_KM TAM_PASSO_CM/CM_EM_1KM
#define MIN_EM_1H 60

int main() {

    int passos1, passos2, minutos;
    float media_passos, distancia, horas;

    printf("Passos no primeiro minuto: ");
    scanf("%d", &passos1);

    printf("Passos no ultimo minuto: ");
    scanf("%d", &passos2);

    printf("Quantas horas: ");
    scanf("%f", &horas);

    printf("Quantos minutos: ");
    scanf("%d", &minutos);

    media_passos = (passos1 + passos2)/2.0; // 2.0 para que vire um float e não corte as casas decimais
    media_passos *= MIN_EM_1H; // converte para x passos/HORA
    printf("passos em 1h: %.1f\n", media_passos);
    
    horas += (float)minutos/MIN_EM_1H; // converte os minutos para horas e soma às horas
    printf("horas totais: %.1f\n", horas);

    distancia = media_passos * horas * TAM_PASSO_KM;

    printf("Ao total foi percorrido %.2fkm.\n", distancia);

    return 0;
}
