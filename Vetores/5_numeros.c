#include <stdio.h>

int main()
{
    const int qtdeElementos = 5;
    int numeros[qtdeElementos];
    int soma = 0;
    int maior = 0;
    int menor = 0;

    for (int i=0; i< qtdeElementos; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[i]);
    }

    for (int z=0; z < qtdeElementos; z++) {
        soma += numeros[z];
        if (z == 0) {
            maior = numeros[z];
            menor = numeros[z];
        } else {
            if (numeros[z] > maior) {
                maior = numeros[z];
            }
            if (numeros[z] < menor) {
                menor = numeros[z];
            }
        }
    }

    printf("\n A lista possui %d elementos", qtdeElementos);
    printf("\n A soma dos numeros da lista eh: %d", soma);
    printf("\n O maior numero da lista eh: %d", maior);
    printf("\n O menor numero da lista eh: %d", menor);
    return 0;
}