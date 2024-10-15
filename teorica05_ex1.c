/*
Escrever trecho de um programa C que, quando o conteúdo da variável salario for superior a 1000, atualize este 
conteúdo em 5% a mais do valor inicial e que, em caso contrário (salario igual ou inferior a 1000), some a este 
conteúdo o equivalente a 7% do conteúdo original.
*/

#include <stdio.h>

#define AUMENTO_ACIMA_DE_MIL 5.0
#define AUMENTO_ABAIXO_OU_IGUAL_A_MIL 7.0

int main() {

    float salario;

    printf("Salario atual: ");
    scanf("%f", &salario);

    salario += salario * (salario > 1000 ? AUMENTO_ACIMA_DE_MIL/100 : AUMENTO_ABAIXO_OU_IGUAL_A_MIL/100);

    printf("Novo salario: RS%.2f\n", salario);

    return 0;
}

