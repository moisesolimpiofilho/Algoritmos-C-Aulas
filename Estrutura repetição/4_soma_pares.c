#include <stdio.h>

int main()
{
    int numeroUsuario = 0;
    int soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &numeroUsuario);

    for(int i=0; i <= numeroUsuario; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }

    printf("A soma dos numeros pares ate %d eh: %d", numeroUsuario, soma);
    return 0;
}