#include<stdio.h>

int main() {
    char op;
    float num1, num2, resultado;
    
    printf("Primeiro numero: ");
    scanf("%f", &num1);
    printf("Segundo numero: ");
    scanf("%f", &num2);    
    
    printf("[ + ] Adicao\n");
    printf("[ - ] Subtracao\n");
    printf("[ x ] Multiplicacao\n");
    printf("[ / ] Divisao\n");
    printf("Escolha uma das operacoes: ");
    scanf(" %c", &op);
    
    switch(op){
    case '+' :
        resultado  = num1 + num2;
        printf("%.1f + %.1f = %.1f\n", num1, num2, resultado);
        break;
    case '-' :
        resultado  = num1 - num2;
        printf("%.1f - %.1f = %.1f\n", num1, num2, resultado);
        break;
    case 'x' :
        resultado  = num1 * num2;
        printf("%.1f x %.1f = %.1f\n", num1, num2, resultado);
        break;
    case '/' :
        resultado  = num1 / num2;
        printf("%.1f / %.1f = %.1f\n", num1, num2, resultado);
        break;    
    default:
        printf("Operacao invalida!\n");
    }
    
    return 0;
}



    