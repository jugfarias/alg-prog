// Programa que calcula a tabuada do 1 ao 9

#include <stdio.h>

int main() {
    printf("============ TABUADA ================\n");
    
    for (int i = 1; i < 10; i++){
        printf("Tabuada do %d:\n", i);

        for (int j = 1; j < 11; j++){
            printf("%d\t x\t %d\t =\t %d\n", i, j, (i * j));
        }
    }

    return 0;
}