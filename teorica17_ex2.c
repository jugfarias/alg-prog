/*
Escreva uma função em C que receba o sexo de uma pessoa (M ou F), a altura da pessoa (em metros) e imprima na tela o peso ideal (em kg) de acordo com a tabela abaixo
sexo        peso ideal
feminino    altura * 62,1 - 44,7
masculino   altura * 72,7 - 58
*/

#include <stdio.h>
#include <ctype.h>

void peso_ideal(char sexo, float altura){
    
    float peso_ideal;

    if (sexo == 'M'){
        peso_ideal = altura * 72.7 - 58;
    }else{
        peso_ideal = altura * 62.1 - 44.7;
    }

    printf("O seu peso ideal eh: %.2fkg", peso_ideal);
}

int main(){

    char sexo;
    float altura;

    do{
        printf("Qual seu sexo? (M ou F) ");
        scanf(" %c", &sexo);
        sexo = toupper(sexo);
    }while(sexo != 'M' && sexo != 'F');

    do{
        printf("Qual sua altura? ");
        scanf("%f", &altura);
    }while(altura < 0.0);
    
    peso_ideal(sexo, altura);

    return 0;
}