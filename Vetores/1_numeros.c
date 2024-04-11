#include <stdio.h>

int main()
{
    const int qtdeElementos = 6;
    int numeros[qtdeElementos];
    numeros[0] = 45;
    numeros[1] = 89;
    numeros[2] = 23;
    numeros[3] = 12;
    numeros[4] = 20;
    numeros[5] = 30;

    printf("o vetor tem %d elementos", qtdeElementos);
    return 0;
}