#include <stdio.h>
#include <locale.h>

int totalKmsPercorridos = 0;
int totalLitrosAbastecidos = 0;
float totalValorAbastecimentos = 0;

void imprimir_relatorio(char datas[][20], int kmPercorridos[], int litrosAbastecidos[], 
                        float valorTotalAbastecimentos[], int qtdeRegistros)
{
    printf("\n---Relatório Controle da Frota---\n");
    
    for (int i = 0; i < qtdeRegistros; i++)
    {
        printf("Data: %s \n", datas[i]);
        printf("Quantidade KMs percorridos: %d \n", kmPercorridos[i]);
        printf("Quantidade litros abastecidos: %d \n", litrosAbastecidos[i]);
        printf("Valor total abastecimentos: R$ %.2f \n", valorTotalAbastecimentos[i]);
        printf("\n");
    } 
}

void registra_dados()
{
    int mesmaData = 0;
    int kmPercorridoRegistro = 0;
    int litrosAbastecidosRegistro = 0;
    float valorTotalAbastecimentoRegistro = 0;

    do {
            printf("Qual a quantidade de KMs percorridos? ");
            scanf("%d", &kmPercorridoRegistro);

            printf("Qual a quantidade de litros abastecidos? ");
            scanf("%d", &litrosAbastecidosRegistro);

            printf("Qual valor total do abastecimento? ");
            scanf("%f", &valorTotalAbastecimentoRegistro);

            totalKmsPercorridos += kmPercorridoRegistro;
            totalLitrosAbastecidos += litrosAbastecidosRegistro;
            totalValorAbastecimentos += valorTotalAbastecimentoRegistro;

            printf("Deseja adicionar mais um registro para o mesmo dia (0-Não, 1-Sim)? ");
            scanf("%d", &mesmaData);            

        } while (mesmaData == 1);

        printf("\n");
}

int main()
{
    int qtdeRegistros = 0;

    printf("---Mercado Livre Controle de Frota---\n");

    printf("Quantos registros deseja fazer? ");
    scanf("%d", &qtdeRegistros);

    char datas[qtdeRegistros][20];
    int kmPercorridos[qtdeRegistros];
    int litrosAbastecidos[qtdeRegistros];
    float valorTotalAbastecimentos[qtdeRegistros];

    for (int i = 0; i < qtdeRegistros; i++)
    {
        printf("Qual a data do registro? ");
        scanf("%s", &datas[i]);

        printf("\n");

        registra_dados();

        kmPercorridos[i] = totalKmsPercorridos;
        litrosAbastecidos[i] = totalLitrosAbastecidos;
        valorTotalAbastecimentos[i] = totalValorAbastecimentos;

        totalKmsPercorridos = 0;
        totalLitrosAbastecidos = 0;
        totalValorAbastecimentos = 0;        
    }

    imprimir_relatorio(datas, kmPercorridos, litrosAbastecidos, 
                       valorTotalAbastecimentos, qtdeRegistros);      

    return 0;
}