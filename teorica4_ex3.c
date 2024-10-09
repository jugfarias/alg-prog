/*
Processar uma venda de livros em uma livraria. Obter código do tipo de livro vendido (A, B, C) e número de unidades,
calcular e informar valor a pagar.
 Preços: Tipo A: R$ 10,00
 Tipo B: R$ 20,00
 Tipo C: R$ 30,00
Caso tenham sido vendidos mais de 10 livros, emitir uma mensagem.
*/

#include <stdio.h>

#define VALOR_A 10.0
#define VALOR_B 20.0
#define VALOR_C 30.0

int main() {

    char tipo;
    int qtd;
    float total;

    printf("Qual o tipo de livro? (A, B ou C) ");
    scanf(" %c", &tipo);

    printf("Qual a quantidade de livros do tipo %c? ",tipo);
    scanf("%d", &qtd);

    if (tipo == 'A') // uso de aspas simples nas variáveis de tipo char
        total = qtd * VALOR_A;
    
    if (tipo == 'B')
        total = qtd * VALOR_B;

    if (tipo == 'C')
        total = qtd * VALOR_C;

    printf("O total dos %d livros do tipo %c foi de: R$%4.2f\n", qtd, tipo, total);

    return 0;
}