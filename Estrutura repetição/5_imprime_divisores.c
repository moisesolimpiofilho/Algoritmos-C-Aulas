#include <stdio.h>

int main()
{
    int numeroUsuario = 0;

    printf("Digite um numero: ");
    scanf("%d", &numeroUsuario);

    for (int i=1; i <= numeroUsuario; i++) {
        if (numeroUsuario % i == 0) {
            printf("%d eh dividor de %d com resto zero \n", i, numeroUsuario);
        }
    }
    return 0;
}