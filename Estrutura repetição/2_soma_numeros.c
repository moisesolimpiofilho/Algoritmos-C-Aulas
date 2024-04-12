#include <stdio.h>

int main()
{
    int soma = 0;

    for (int i=0; i <= 100; i++) {
        soma += i;
    }
    printf("A soma dos numeros de 1 ate 10 eh: %d", soma);
    return 0;
}