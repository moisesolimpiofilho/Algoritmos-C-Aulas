#include <stdio.h>

/**
 * Escreva um algoritmo que crie uma matriz de 3x3 com números fixos
*/

int main()
{
    int numeros[3][3];
    int i, z;

    for (i=0; i < 3; i++) 
    {
        printf("---Numeros para linha %d---\n", i+1);

        for (z=0; z < 3; z++) 
        {
            printf("Digite o %d numero ", z+1);
            scanf("%d", &numeros[i][z]);
        }

        printf("\n");
    }

    // Imprimindo
    for (i=0; i < 3; i++) 
    {
        printf("Linha: %d \n", i+1);

        for (z=0; z < 3; z++) 
        {
            printf("%d ", numeros[i][z]);
        }

        printf("\n");
    }

    return 0;
}