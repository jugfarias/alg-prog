/*
Dadas duas palavras (strings) com no máximo 15 caracteres, verificar se uma é uma
rotação à esquerda da outra, não importando se os caracteres individuais são
maiúsculos ou minúsculos. Para se obter a rotação à esquerda de uma string,
transfere-se o primeiro caractere do início para o fim da mesma, o segundo caractere
para a primeira posição e assim sucessivamente. Por exemplo, para a palavra AMORA,
a rotação para a esquerda é MORAA.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 15

int main () {

    char palavra1[MAX], palavra2[MAX], rotacao[MAX], primeira;
    int i;

    printf("Digite a primeira palavra: ");
    fgets(palavra1, MAX, stdin);

    printf("Digite a segunda palavra: ");
    fgets(palavra2, MAX, stdin);

    for (int i = 0; i < strlen(palavra1); i++){
        palavra1[i] = tolower(palavra1[i]);
        palavra2[i] = tolower(palavra2[i]);
    }

    primeira = palavra1[0];

    for (i = 0; i < strlen(palavra1) - 1; i++){
        rotacao[i] = palavra1[i + 1];
    }
    
    rotacao[i] = primeira;

    printf("palavra 1: %s\n", palavra1);
    printf("palavra 2: %s\n", palavra2);
    printf("rotacao: %s\n", rotacao);

    return 0;
}
