#include <stdio.h>

int main()
{
    int numeroUsuario = 0;
    int qtdeDivisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &numeroUsuario);

    for (int i=1; i <= numeroUsuario; i++) {
        if (numeroUsuario % i == 0) {
            qtdeDivisores++;
        }
    }

    if (qtdeDivisores == 2) {
        printf("O numero %d eh primo", numeroUsuario);
    } else {
        printf("O numero %d nao eh primo", numeroUsuario);
    }
    return 0;
}