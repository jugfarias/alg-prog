/*
Fazer o algoritmo e o programa C para calcular e informar as raízes (reais) de uma equação do 2º grau. 
Os valores das variáveis a, b e c devem ser fornecidos via teclado.
*/

#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a == 0){
        printf("Nao eh uma equacao do 2o grau.\n");
        return 0;
    }else{
        printf("Equacao do 2o grau: %.2fx^2 + %.2fx + %.2f = 0\n", a, b, c);
        delta = b*b - 4*a*c;

        if (delta < 0){
            printf("Nao possui raizes reais.\n");
            return 0;
        }else if (delta == 0){
            x1 = -1*b/(2*a);
            printf("x = %.2f\n", x1);
        }else{
            x1 = (-1*b + sqrt(delta))/(2*a);
            x2 = (-1*b - sqrt(delta))/(2*a);

            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }

        
    }  

    return 0;
}