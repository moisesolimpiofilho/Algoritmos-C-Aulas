#include <stdio.h>
#include <locale.h>

struct cliente
{
    char nome[20];
    float salario;
    float valorImovel;
    int periodoAnos;
    float valorParcela;
};


float calculaValorParcelaImovel(struct cliente cliente)
{
    int qtdeMeses = cliente.periodoAnos * 12;
    return cliente.valorImovel / qtdeMeses;
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

void aprovaFinanciamento(float valorParcela, float percentualSalario, struct cliente cliente) 
{
    if (percentualSalario >= valorParcela)
    {
        printf("Parabéns, seu financiamento esta aprovado\n");
        mostrarRelatorio(valorParcela, cliente.valorImovel, cliente.periodoAnos, cliente.nome);
    } 
    else
    {
        printf("Infelizmente nao foi aprovado seu financiamento\n");
        printf("Parcela imovel: R$ %.2f\n", valorParcela);
        printf("Percentual salario: R$ %.2f\n", percentualSalario);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct cliente cliente;

    printf("--Calculadora de Financiamento--\n");
    printf("Qual seu nome? ");
    scanf("%s", &cliente.nome);

    printf("Qual seu salario? ");
    scanf("%f", &cliente.salario);

    printf("Qual valor do imovel? ");
    scanf("%f", &cliente.valorImovel);

    printf("Quantos anos deseja pagar? ");
    scanf("%d", &cliente.periodoAnos);    

    float valorParcela = calculaValorParcelaImovel(cliente);
    float percentualSalario = calculaValorParcelaSalario(cliente.salario);
    aprovaFinanciamento(valorParcela, percentualSalario, cliente);

    return 0;
}