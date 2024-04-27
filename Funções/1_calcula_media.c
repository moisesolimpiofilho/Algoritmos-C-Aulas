#include <stdio.h>
#include <locale.h>

int calcular_media(int nota1, int nota2)
{
    int media = (nota1 + nota2) / 2;
    return media;
}

int main()
{
    int n1 = 5;
    int n2 = 3;
    int rs = calcular_media(n1, n2);
    printf("A média é %d \n", rs);
    return 0;
}