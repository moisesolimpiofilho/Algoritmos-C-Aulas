#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    char saboresPizzas[5][20] = {"Mussarela","Frango","Marguerita","Calabresa","Franbacon"};        
    char tiposPizzas[3][20] = {
        "Individual R$ 24,90", "8 Pedacos R$ 39,90", "12 Pedacos R$ 49,90",
        "Individual R$ 26,90", "8 Pedacos R$ 49,90", "12 Pedacos R$ 59,90",
        "Individual R$ 28,90", "8 Pedacos R$ 54,90", "12 Pedacos R$ 64,90",
        "Individual R$ 29,90", "8 Pedacos R$ 56,90", "12 Pedacos R$ 66,90",
        "Individual R$ 31,90", "8 Pedacos R$ 61,90", "12 Pedacos R$ 71,90",
    };
    float valoresPizzas[15] = {
        24.90, 39.90, 49.90,
        26.90, 49.90, 59.90,
        28.90, 54.90, 64.90,
        29.90, 56.90, 66.90,
        31.90, 61.90, 71.90 
    };
    char setores[4][20] = {"Setor 1 R$ 9,90", "Setor 2 R$ 14,90", "Setor 3 R$ 17,90", "Setor 4 R$ 21,90"};
    float valoresEntregaSetor[4] = {9.90, 14.90, 17.90, 21.90};
    int qtdeVendas = 0;

    printf("---Fechamento de Caixa Pizzaria---\n");
    printf("Quantos vendas deseja cadastrar? \n");
    scanf("%d", &qtdeVendas);

    int numeroPedidos[qtdeVendas];
    float valorTotalPedido[qtdeVendas];
    char nomePizzas[qtdeVendas][20];
    char tipoPizzas[qtdeVendas][20];
    char nomeSetores[qtdeVendas][20];

    for (int i=0; i < qtdeVendas; i++) {
        numeroPedidos[i] = rand() % 100;
        
        printf("Pedido numero %d\n", numeroPedidos[i]);

        int codPizza = 0;
        printf("Digite o codigo referente a pizza que deseja adicionar\n");
        printf("[0]-Mussarela, [1]-Frango, [2]-Marguerita, [3]-Calabresa, [4]-Franbacon\n");
        scanf("%d", &codPizza);
        strcpy(nomePizzas[i], saboresPizzas[codPizza]);

        int codTipoPizza = 0;
        printf("Digite o codigo referente ao tamanho\n");

        if (codPizza == 0)
        {
            printf("[0]-Individual (R$ 24,90), [1]-8 Pedacos (R$ 39,90), [2]-12 Pedacos (R$ 49,90)\n");

        } 
        else if (codPizza == 1)
        {
            printf("[3]-Individual (R$ 26,90), [4]-8 Pedacos (R$ 49,90), [5]-12 Pedacos (R$ 59,90)\n");
        } 
        else if (codPizza == 2)
        {
            printf("[6]-Individual (R$ 28,90), [7]-8 Pedacos (R$ 54,90), [8]-12 Pedacos (R$ 64,90)\n");
        } 
        else if (codPizza == 3)
        {
            printf("[9]-Individual (R$ 29,90), [10]-8 Pedacos (R$ 56,90), [11]-12 Pedacos (R$ 66,90)\n");
        } 
        else if (codPizza == 4)
        {
            printf("[12]-Individual (R$ 31,90), [13]-8 Pedacos (R$ 61,90), [14]-12 Pedacos (R$ 71,90)\n");
        }
        
        scanf("%d", &codTipoPizza);
        strcpy(tipoPizzas[i], tiposPizzas[codTipoPizza]);

        int qtdePizzas = 0;
        printf("Qual a quantidade?\n");
        scanf("%d", &qtdePizzas);

        int codSetor = 0;
        printf("Digite o codigo referente ao setor?\n");
        printf("[0]-Setor 1 (R$ 9,90), [1]-Setor 2 (R$ 14,90), [2]-Setor 3 (R$ 17,90), [3]-Setor 4 (R$ 21,90)\n");
        scanf("%d", &codSetor);
        strcpy(nomeSetores[i], setores[codSetor]);

        float total = (qtdePizzas * valoresPizzas[codPizza]) + valoresEntregaSetor[codSetor];
        valorTotalPedido[i] = total;

    }

    printf("---RELATORIO DE VENDAS---\n");

    for (int i = 0; i < qtdeVendas; i++) {
        printf("Venda Pedido: %d\n", numeroPedidos[i]);
        printf("Valor Total: %.2f\n", valorTotalPedido[i]);
        printf("Pizza: %s\n", nomePizzas[i]);
        printf("Tipo Pizza: %s\n", tipoPizzas[i]);
        printf("Entrega Setor: %s\n", nomeSetores[i]);
    }

    return 0;
}