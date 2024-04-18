#include <stdio.h>

/**
 * Utilizando o exercício número 2 faça a soma das matrizes por linha criando um vetor.
*/
#define QTDE_LINHAS 3
#define QTDE_COLUNAS 3

int main()
{
    int numeros[QTDE_LINHAS][QTDE_COLUNAS];
    int i, z;
    int somatorio[QTDE_COLUNAS];

    for (i=0; i < QTDE_LINHAS; i++) 
    {
        printf("---Numeros para linha %d---\n", i+1);

        for (z=0; z < QTDE_COLUNAS; z++) 
        {
            printf("Digite o %d numero ", z+1);
            scanf("%d", &numeros[i][z]);
        }

        printf("\n");
    }

    // Somando
    for (i=0; i < QTDE_LINHAS; i++) 
    {
        printf("Linha: %d \n", i+1);
        int somaLinha = 0;

        for (z=0; z < QTDE_COLUNAS; z++) 
        {
            somaLinha += numeros[i][z];
        }
        somatorio[i] = somaLinha;
    }

    printf("---Imprimindo somatorio---\n");

    for (i=0; i < QTDE_COLUNAS; i++) {
        printf("Soma dos numeros do %d vetor da matriz %d \n", i+1, somatorio[i]);
    }

    return 0;
}