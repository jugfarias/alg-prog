#include <stdio.h>
#define IMC_MIN 18.6
#define IMC_MAX 24.9

int main() {

    float peso, altura, imc;

    printf("Peso (em kg): ");
    scanf("%f", &peso);

    printf("Altura (em m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura); // cálculo do IMC

    printf("IMC = %3.1f\n", imc);

    if (imc > IMC_MIN && imc < IMC_MAX) { // se está entre IMC mínimo e máximo
        printf("Esta dentro do peso ideal.\n");
    }else{
        printf("Nao esta dentro do peso ideal.\n");
    }

    return 0;
}
