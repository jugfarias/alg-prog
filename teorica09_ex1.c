/* 
elaborar um algoritmo para ler um conjunto de números positivos não nulos informados pelo usuário
e avaliar se cada número é par ou ímpar
o algoritmo deve parar de ler e avaliar números quando o usuário digitar um número igual ou menor que zero
*/

#include <stdio.h>

int main(){

    int num;

    printf("====== EH PAR OU EH IMPAR? =======\n");
    printf("Para sair digite um numero igual ou menor que 0.\n");
    printf("Escolha um numero inteiro positivo para ser analisado: ");
    scanf("%d", &num);

    while (num > 0){
        if (num % 2 == 0){
            printf("O numero %d eh par.\n", num);
        }else{
            printf("O numero %d eh impar.\n", num);
        }

        printf("Escolha um numero inteiro positivo para ser analisado: ");
        scanf("%d", &num);
    }


    return 0;
}