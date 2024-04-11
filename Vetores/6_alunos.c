#include <stdio.h>

int main()
{
    int qtdeMedias = 5;
    int qtdeNotasPorAluno = 2;
    float medias[5];

    // Coletando as notas e calculando as medias
    for (int i=0; i < qtdeMedias; i++) {
        printf("\n\nDigite as notas do %d aluno", i+1);
        float notaAluno = 0;
        float somaNota = 0;

        for (int z=0; z < qtdeNotasPorAluno; z++) {
            printf("\n Nota %d: ", z+1);
            scanf("%f", &notaAluno);
            somaNota += notaAluno;
        }
        medias[i] = somaNota / qtdeNotasPorAluno;
    }

    // Exibindo as medias
    for (int i=0; i < qtdeMedias; i++) {
        if (medias[i] >= 6) {
            printf("\nAluno %d esta aprovado com media %.2f", i+1, medias[i]);
        } else {
            printf("\nAluno %d esta reprovado com media %.2f", i+1, medias[i]);
        }
    }

    return 0;
}