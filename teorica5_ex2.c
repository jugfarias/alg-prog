/*
Tendo como dados de entrada o sexo (M ou F) e a altura de uma pessoa (em metros), informe o peso ideal (em kg), 
sabendo que para homens o peso ideal é obtido por altura x 72,7 - 58 e, para mulheres, por altura x 62,1 - 44,7.
*/

#include <stdio.h>

int main() {

    float peso_ideal, altura;
    char sexo;

    printf("Informe sua altura (em m): ");
    scanf("%f", &altura);

    printf("Informe seu sexo biologico [M/F]: ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm'){
        peso_ideal = altura * 72.7 - 58;
        printf("Seu peso ideal eh de: %.2fkg.\n", peso_ideal);
    }else if (sexo == 'F' || sexo == 'f'){
        peso_ideal = altura * 62.1 - 44.7;
        printf("Seu peso ideal eh de: %.2fkg.\n", peso_ideal);
    }else{
        printf("Valor invalido.\n");
    }

    return 0;
}