#include <stdio.h>

int main()
{
    int tabuada = 0;

    printf("Digite um numero para gerar a tabuada: ");
    scanf("%d", &tabuada);

    for (int i=1; i <= 10; i++) {
        int resultado = tabuada * i;
        printf("%d x %d = %d \n", i, tabuada, resultado);
    }
    return 0;
}