#include <stdio.h>

float calculaValorParcelaImovel(float valorImovel, int qtdeAnos)
{
    int qtdeMeses = qtdeAnos * 12;
    return valorImovel / qtdeMeses;
}

float calculaValorParcelaSalario(float salario)
{
    return salario * 0.30;
}

void mostrarRelatorio(float valorParcela, float valorImovel, int qtdeAnos, char *nome)
{
    printf("--Relatorio do Financiamento--\n");
    printf("Caro %s segue os detalhes do financiamento\n", nome);
    printf("Valor do imovel: R$ %.2f\n", valorImovel);
    printf("Valor da parcela: R$ %.2f\n", valorParcela);
    printf("Quantidade de meses a pagar: %d\n", qtdeAnos * 12);
}

void aprovaFinanciamento(float valorParcela, float percentualSalario, float valorImovel, int qtdeAnos, char *nome) 
{
    if (percentualSalario >= valorParcela)
    {
        printf("Parabéns, seu financiamento esta aprovado");
        mostrarRelatorio(valorParcela, valorImovel, qtdeAnos, nome);
    } 
    else
    {
        printf("Infelizmente nao foi aprovado seu financiamento\n");
        printf("Parcela imovel: R$ %.2f\n", valorParcela);
        printf("Percentual salario: R$ %.2f\n", percentualSalario);
    }
}

int main()
{
    char nome[20];
    int qtdeAnos;
    float valorImovel, salario;

    printf("--Calculadora de Financiamento--\n");
    printf("Qual seu nome? ");
    scanf("%s", nome);

    printf("Qual seu salario? ");
    scanf("%f", &salario);

    printf("Qual valor do imovel? ");
    scanf("%f", &valorImovel);

    printf("Quantos anos deseja pagar? ");
    scanf("%d", &qtdeAnos);    

    float valorParcela = calculaValorParcelaImovel(valorImovel, qtdeAnos);
    float percentualSalario = calculaValorParcelaSalario(salario);
    aprovaFinanciamento(valorParcela, percentualSalario, valorImovel, qtdeAnos, nome);

    return 0;
}