#include <stdio.h>
#include <locale.h>

float calcular_valor_parcela_imovel(float valorImovel, int qtdeAnos)
{
    int qtdeMeses = qtdeAnos * 12;    
    float valorParcela = valorImovel / qtdeMeses;
    return valorParcela;
}

float calcular_valor_parcela_salario(float salario)
{
    float parcelaSalario = salario * 0.30;
    return parcelaSalario;
}

void mostrar_relatorio(float valorParcela, float parcelaSalario,
                       float valorImovel, int qtdeAnos, char *nome)
{
    printf("---Relatório de Financiamento---\n");
    printf("Caro %s, segue os detalhes do financiamento \n", nome);
    printf("Valor total do imóvel R$ %.2f \n", valorImovel);
    printf("Valor da parcela mensal R$ %.2f \n", valorParcela);
    printf("Valor da parcela salario R$ %.2f \n", parcelaSalario);
    printf("Quantidade de meses a pagar %d \n", qtdeAnos * 12);
}

float aprovar_financiamento(float valorParcela, float parcelaSalario,
                           float valorImovel, int qtdeAnos, char *nome) 
{
    if (parcelaSalario >= valorParcela)
    {
        printf("\nParabéns, seu financiamento está aprovado \n\n");
        mostrar_relatorio(valorParcela, parcelaSalario, valorImovel, qtdeAnos, nome);
    } 
    else
    {
        printf("\nInfelizmente não foi possível aprovar seu financiamento \n\n");
        printf("Valor parcela imóvel R$ %.2f \n", valorParcela);
        printf("Valor parcela salário R$ %.2f \n", parcelaSalario);
    }
    
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    int qtdeAnos = 0;
    float valorImovel = 0;
    float salario = 0;

    printf("--Calculadora de Financiamento--\n");
    
    printf("Qual seu nome? ");
    scanf("%s", &nome);

    printf("Qual seu salário? ");
    scanf("%f", &salario);

    printf("Qual valor do imóvel? ");
    scanf("%f", &valorImovel);

    printf("Em quantos anos deseja pagar? ");
    scanf("%d", &qtdeAnos);

    float valorParcela = calcular_valor_parcela_imovel(valorImovel, qtdeAnos);
    
    float valorParcelaSalario = calcular_valor_parcela_salario(salario);
    
    aprovar_financiamento(valorParcela, valorParcelaSalario, 
                          valorImovel, qtdeAnos, nome);
    return 0;
}