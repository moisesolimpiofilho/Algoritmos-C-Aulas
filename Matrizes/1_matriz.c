#include <stdio.h>

/**
 * Escreva um algoritmo que crie uma matriz de 3x3 com números fixos
*/

int main()
{
    int numeros[3][3] = {
        {39, 12, 67},
        {56, 89, 21},
        {9, 54, 678}
    };

    for (int i=0; i < 3; i++) 
    {
        printf("Linha: %d \n", i+1);

        for (int z=0; z < 3; z++) 
        {
            printf("%d ", numeros[i][z]);
        }

        printf("\n");
    }

    return 0;
}