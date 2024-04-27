#include <stdio.h>
#include <math.h>
#include <locale.h>

float calcular_area_figuras(int tipo, float medida)
{
    if (tipo == 1)
    {
        return M_PI * (medida * medida);
    }
    else
    {
        return medida * medida;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float medida = 0;
    int tipoGeometria = 0;
    
    printf("---Calculadora de figuras geométricas---\n");

    printf("Digite 1 para círculo e 2 para quadrado: ");
    scanf("%d", &tipoGeometria);

    if (tipoGeometria == 1)
    {
        printf("Digite o raio do círculo: ");        
    } else if (tipoGeometria == 2)
    {
        printf("Digite a medida do lado do quadrado: ");
    }
    scanf("%f", &medida);

    float resultado = calcular_area_figuras(tipoGeometria, medida);

    printf("A área total é: %.4f \n", resultado);

    return 0;
}