/*
Tendo como dados de entrada o tipo de conversão desejada (1- temperaturas, 2 – unidades de medidas, 3 - encerrar o 
programa) e unidade (C para Celcius, F para Fahrenheit, P para polegadas e M para milímetros) e valor a ser 
convertido (admitindo aqui também a opção de encerrar programa), efetuar o atendimento da ação solicitada. 
Por exemplo, se o usuário selecionar 1 na primeira opção, isso indica que ele quer converter temperaturas, 
se ele informar a seguir C e 36, significa que ele quer converter 36 graus Celcius para Fahrenheit. 
Caso ele tivesse informado F e 36, isso indicaria que ele quer converter 36 graus Fahrenheit para Celcius.
*/

#include <stdio.h>

int main (){

    int escolha;
    char escolha2;
    float C, F, P, M;

    printf("[ 1 ] Conversao de temperatura\n");
    printf("[ 2 ] Conversao de unidades de medida\n");
    printf("[ 3 ] Encerrar o programa\n");
    printf("Faca sua escolha: ");
    scanf("%d", &escolha);

    switch(escolha)
    {
        case 1 :
            printf("[ C ] Converter de Celsius para Fahrenheit\n");
            printf("[ F ] Converter de Fahrenheit para Celsius\n");
            printf("Faca sua escolha: ");
            scanf(" %c", &escolha2);

            switch(escolha2)
            {
                case 'C' :
                    printf("Temperatura em C: ");
                    scanf("%f",&C);

                    F = (9 * C / 5) + 32;

                    printf("%.1fC eh %.1fF\n", C, F); 

                    break;
                case 'F' :
                    printf("Temperatura em F: ");
                    scanf("%f",&F);

                    C = ((F - 32) * 5) / 9;

                    printf("%.1fF eh %.1fC\n", F, C); 

                    break;
            }
            
            break;
        
        case 2 :
            printf("[ P ] Converter de Polegadas para Milimetros\n");
            printf("[ M ] Converter de Milimetros para Polegadas\n");
            printf("Faca sua escolha: ");
            scanf(" %c", &escolha2);

            switch(escolha2)
            {
                case 'P' :
                    printf("Valor em pol: ");
                    scanf("%f", &P);

                    M = P * 25.4;

                    printf("%.1fpol eh %.1fmm\n", P, M);

                    break;

                case 'M' :
                    printf("Valor em mm: ");
                    scanf("%f", &M);

                    P = M / 25.4;

                    printf("%.1fmm eh %.1fpol\n", M, P);

                    break;
                
                default :
                    printf("Valor invalido.\n");
            }

            break;

        default:
            printf("Byeee!\n");

    }
    
    return 0;
}
