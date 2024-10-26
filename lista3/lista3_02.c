/*
Fazer um programa que leia um valor x e depois calcule e escreva o resultado do seguinte somatório:
x^25/1 - x^24/2 + x^23/3 - x^22/4 + ... + x^1/25
*/

#include <stdio.h>
#include <math.h>

#define IMAX 25

int main(){
    float x, num, somatorio=0;

    printf("x: ");
    scanf("%f", &x);

    for (int i=1; i <= IMAX; i++){
        num = pow(x, (IMAX - i + 1));
        
        if (i % 2 == 0){
            somatorio -= num/i;
        }else{
            somatorio += num/i;
        }
    }

    printf("Somatorio = %.2f\n", somatorio);

    return 0;
}
