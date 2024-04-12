#include <stdio.h>

int main()
{
    int numeroUsuario = 0;

    printf("Digite um numero: ");
    scanf("%d", &numeroUsuario);

    for (int i=1; i <= numeroUsuario; i++) {
        printf("Numero %d \n", i);
    }
    return 0;
}