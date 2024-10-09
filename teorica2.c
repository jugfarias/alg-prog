#include <stdio.h>

int main() {
    // imprimir algo na tela
    printf("Hello, World!\n");

    // declarar uma variável
    int x, y, z;
    float a;
    char c;

    // atribuir um valor a uma variável
    x = 10;
    y = 20;
    z = x + y;

    // imprimir o valor de uma variável
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    // ler um valor do teclado
    printf("Digite um valor real: ");
    scanf("%f", &a);

    printf("Valor lido: %f\n", a);

    // print com 2 casas decimais, 5 casas no total e 0s na frente do número
    printf("Valor lido formatado: %05.2f\n", a);

    /* (comentário de múltiplas linhas)
        correção do bug ao ler um caractere: 
        adicionar um espaço antes de %c, 
        assim ele ignora teclas especiais como o Enter
    */ 
    printf("Digite um caractere: ");
    scanf(" %c", &c);

    printf("Valor lido: %c\n", c);

    // endereço de uma variável
    printf("Endereco das variaveis:\n");
    printf("Endereco de x: %p\n", &x);
    printf("Endereco de y: %p\n", &y);
    printf("Endereco de z: %p\n", &z);
    printf("Endereco de a: %p\n", &a);
    printf("Endereco de c: %p\n", &c);

    return 0;
}


