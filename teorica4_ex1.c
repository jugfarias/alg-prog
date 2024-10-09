// Programa que lê a idade de uma pessoa e exibe uma mensagem, caso ela seja maior de idade.

#include <stdio.h>

int main () {

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) // não precisa de {} se é só um comando interno ao if
        printf("Voce tem %d anos, ja eh maior de idade.\n", idade);
    
    return 0;
}