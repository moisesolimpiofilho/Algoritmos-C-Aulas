#include <stdio.h>

int main()
{
    int numeros[] = {45, 89, 23, 12, 20, 30};
    int qtdeElementos = sizeof(numeros) / sizeof(numeros[0]);

    printf("o vetor tem %d elementos", qtdeElementos);
    return 0;
}