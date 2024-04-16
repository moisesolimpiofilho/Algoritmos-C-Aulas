
#include <stdio.h>

int calcular_media(int nota1, int nota2)
{
    int media = (nota1 + nota2) / 2;
    return media;
}

int main()
{
    int n1 = 5;
    int n2 = 7;
    int media = calcular_media(n1, n2);
    
    printf("A média do aluno é: %d", media);

    return 0;
}


