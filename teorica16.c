#include <stdio.h>

void menu_de_opcoes(){
    printf("Opcoes disponiveis: \n");
    for (int i = 0; i < 20; i++){
        printf("-");
    }
    printf("\n\n");

    printf("1 - soma de dois valores reais\n");
    printf("2 - se eh divisor do numero\n");
    printf("3 - sequencia de numeros pares\n");
    printf("4 - se numero eh perfeito\n");
}

int main(){

    int escolha;

    do{
        menu_de_opcoes();
        printf("faca sua escolha: ");
        scanf("%d", &escolha);
    }while(escolha < 1 || escolha > 4);

    return 0;
}