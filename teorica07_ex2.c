#include <stdio.h>

#define MAXIMO 100

int main() {

    for(int i = 0; i < 100; i++){
        printf("%d ", i);

        if(i % 10 == 0)
            printf("\n");
    }

    printf("\n");


    return 0;
}