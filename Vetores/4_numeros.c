#include <stdio.h>

int main()
{
    const int qtdeElementos = 6;
    int numeros[] = {45, 89, 23, 12, 20, 30};

    for (int i=0; i < qtdeElementos; i++) {
        printf("\n O elemento na posicao %d eh %d",i, numeros[i]);
    }

    return 0;
}