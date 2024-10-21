#include <stdio.h>

#define MINIMO 6.0

int main() {

    float media;
    int matricula;

    for (int i = 1; i < 6; i++){
        printf("Matricula do aluno %d: ", i);
        scanf("%d", &matricula);

        printf("Media do aluno %d: ", matricula);
        scanf("%f", &media);

        if (media >= MINIMO)
            printf("Aluno %d aprovado.\n", matricula);
        else
            printf("Aluno %d reprovado.\n", matricula);
        
    }

    return 0;
}