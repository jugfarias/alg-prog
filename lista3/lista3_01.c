/*
Elaborar um programa que:
a) calcule e escreva o valor aproximado da série abaixo, parando de incluir termos quando o termo
a ser incluído for menor do que 0,01.
b) indique quantos termos foram usados.
*/

#include <stdio.h>

int main(){
    
    int n = 1;
    float num = 1, den = 1, termo, serie = 0;

    do{
        termo = num/den; // calcula o valor do termo
        
        if (termo >= 0.01){
            serie += termo;  // adiciona o termo à serie
            n ++;    // aumenta 1 no contador de termos na série
        }
        
        num = (2 * n - 1);
        den = n*n;

        printf("serie: %f\n", serie);

    }
    while(termo >= 0.01);

    printf("quantidade de termos: %n\n", n);

    return 0;
}