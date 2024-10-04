#include <stdio.h>

int main() {

    int num1, num2, quo, resto;

    printf("Numero 1: ");
    scanf("%d", &num1);

    printf("Numero 2: ");
    scanf("%d", &num2);

    if (num2 != 0) { // se o segundo número não for 0
        quo = num1/num2; // calcula a divisão inteira
        resto = num1 % num2; // resto da divisão inteira

        printf("Quociente de %d por %d = %d\n", num1, num2, quo);
        printf("Resto da divisao inteira de %d por %d = %d\n", num1, num2, resto);
    }else{
        printf("ERRO: nao eh possivel dividir por zero.");
    }

    return 0;
}
